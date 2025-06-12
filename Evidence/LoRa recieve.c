#include <SPI.h>
#include <LoRa.h>

#define SS    18
#define RST   14
#define DIO0  26

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("LoRa Receiver Starting...");

  LoRa.setPins(SS, RST, DIO0);
  if (!LoRa.begin(868E6)) {
    Serial.println("LoRa init failed!");
    while (true);
  }
  Serial.println("LoRa init succeeded.");
}

void loop() {
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    String incoming = "";
    while (LoRa.available()) {
      incoming += (char)LoRa.read();
    }

    Serial.print("Received: ");
    Serial.print(incoming);
    Serial.print(" | RSSI: ");
    Serial.println(LoRa.packetRssi());

    // Extract message number for ACK
    if (incoming.startsWith("Message #")) {
      String number = incoming.substring(9);
      sendAck(number);
    }
  }
}

void sendAck(String msgId) {
  delay(50); // slight delay before response
  String ack = "ACK:" + msgId;
  LoRa.beginPacket();
  LoRa.print(ack);
  LoRa.endPacket();
  Serial.print(">> Sent ACK for Message #");
  Serial.println(msgId);
}
