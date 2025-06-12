// ==============================================
// Modern C++ Concepts – Smart Pointers, STL, RAII
// ==============================================

#include <iostream>
#include <vector>
#include <memory>      // unique_ptr, shared_ptr
#include <algorithm>   // std::for_each, std::sort
#include <string>
#include <fstream>     // For RAII file example

// ----------------------------------------------
// Simple Class Using RAII Concept (Custom Resource)
// ----------------------------------------------
class Device {
public:
    Device(const std::string& name) : name(name) {
        std::cout << "Acquired device: " << name << "\n";
    }

    ~Device() {
        std::cout << "Released device: " << name << "\n";
    }

    void use() const {
        std::cout << "Using device: " << name << "\n";
    }

private:
    std::string name;
};

// ----------------------------------------------
// Function demonstrating RAII with file
// ----------------------------------------------
void writeToFileRAII() {
    std::cout << "\n--- RAII Example (File Writing) ---\n";

    // std::ofstream is a built-in RAII class
    std::ofstream file("log.txt"); // File is automatically opened
    if (file.is_open()) {
        file << "This line is written using RAII.\n";
        // File will be closed automatically when 'file' goes out of scope
    } else {
        std::cerr << "Failed to open file.\n";
    }
}

// ----------------------------------------------
// Main Entry
// ----------------------------------------------
int main() {
    std::cout << "\n--- STL Vector and auto ---\n";
    std::vector<int> values = {5, 3, 8, 1};

    std::cout << "Original: ";
    for (auto v : values) std::cout << v << " ";
    std::cout << "\n";

    std::sort(values.begin(), values.end());

    std::cout << "Sorted:   ";
    for (const auto& val : values) std::cout << val << " ";
    std::cout << "\n";

    // ----------------------------------------------
    // Lambda Function Example
    // ----------------------------------------------
    std::cout << "\n--- Lambda Function ---\n";
    std::for_each(values.begin(), values.end(), [](int val) {
        std::cout << "Value x2: " << val * 2 << "\n";
    });

    // ----------------------------------------------
    // Smart Pointers
    // ----------------------------------------------
    std::cout << "\n--- Smart Pointers ---\n";

    // unique_ptr: sole ownership
    std::unique_ptr<Device> motor = std::make_unique<Device>("Motor");
    motor->use();  // use via pointer

    // shared_ptr: shared ownership
    std::shared_ptr<Device> sensor = std::make_shared<Device>("Temperature Sensor");
    std::shared_ptr<Device> anotherRef = sensor;

    std::cout << "Sensor use_count: " << sensor.use_count() << "\n";

    // ----------------------------------------------
    // RAII with file (built-in example)
    // ----------------------------------------------
    writeToFileRAII();

    std::cout << "\nProgram end. Smart pointers and file will clean up automatically.\n";

    return 0;
}

/*
 === Modern C++ Highlights ===

 - auto: lets compiler infer type
 - range-based for loops: for (auto v : vec)
 - lambda functions: [](...) { ... }
 - smart pointers:
     * unique_ptr → owns one object, auto-deletes
     * shared_ptr → ref-counted, auto-deletes when last owner gone
 - RAII: constructor acquires resource, destructor releases it
         Used in custom classes AND standard types like std::ofstream

 === RAII Concept ===

 Resource Acquisition Is Initialization:
    - Tie the resource lifetime to an object's lifetime
    - Resource is acquired in the constructor
    - Released automatically in the destructor
    - Prevents leaks, works well with exceptions
*/
