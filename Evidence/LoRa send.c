#include <SPI.h>
#include <LoRa.h>

#define SS    18
#define RST   14
#define DIO0  26

unsigned int msgCount = 0;
bool ackReceived = false;

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("LoRa Sender Starting...");

  LoRa.setPins(SS, RST, DIO0);
  if (!LoRa.begin(868E6)) {
    Serial.println("LoRa init failed!");
    while (true);
  }
  Serial.println("LoRa init succeeded.");
}

void loop() {
  String message = "Message #" + String(msgCount);
  Serial.print("Sending: ");
  Serial.println(message);

  // Send message
  LoRa.beginPacket();
  LoRa.print(message);
  LoRa.endPacket();

  // Wait for ACK
  unsigned long startTime = millis();
  ackReceived = false;

  while (millis() - startTime < 2000) { // 2s timeout
    int packetSize = LoRa.parsePacket();
    if (packetSize) {
      String incoming = "";
      while (LoRa.available()) {
        incoming += (char)LoRa.read();
      }
      if (incoming == "ACK:" + String(msgCount)) {
        Serial.println(">> ACK received");
        ackReceived = true;
        break;
      }
    }
  }

  if (!ackReceived) {
    Serial.println(">> ACK not received (timeout)");
  }

  msgCount++;
  delay(3000);
}
