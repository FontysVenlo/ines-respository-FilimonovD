// ==========================================
// C++ Syntax Overview for Experienced Coders
// ==========================================

#include <iostream>   // std::cout, std::endl
#include <string>     // std::string

// Use of namespace (shortcut for std::)
// In production code, prefer using std:: explicitly to avoid naming conflicts
using namespace std;

// ------------------------------------------
// Function Prototypes (declarations)
// ------------------------------------------
void greet(const string& name);           // Pass by const reference (safe + efficient)
void explainPointersAndReferences();
void scopeResolutionExample();

// ------------------------------------------
// Main Entry Point
// ------------------------------------------
int main() {
    string user = "Daniel";
    greet(user);

    explainPointersAndReferences();
    scopeResolutionExample();

    return 0;
}

// ------------------------------------------
// Function Definitions
// ------------------------------------------

// Function using const reference — avoids copying the string
void greet(const string& name) {
    cout << "Hello, " << name << "!" << endl;
}

// Demonstrates pointers and references
void explainPointersAndReferences() {
    int x = 42;

    // Pointer holds the address of x
    int* ptr = &x;

    // Reference is an alias to x
    int& ref = x;

    cout << "\n--- Pointers & References ---\n";
    cout << "Value of x: " << x << endl;
    cout << "Pointer to x (*ptr): " << *ptr << endl;
    cout << "Reference to x (ref): " << ref << endl;

    *ptr = 100;  // Modifies x via pointer
    cout << "Modified x via pointer: " << x << endl;

    ref = 200;   // Modifies x via reference
    cout << "Modified x via reference: " << x << endl;
}

// Demonstrates scope resolution operator and use of std::
void scopeResolutionExample() {
    cout << "\n--- Scope Resolution :: ---\n";

    // Even though we used 'using namespace std', you can still be explicit:
    std::string msg = "Using std::string explicitly";
    std::cout << msg << std::endl;

    // Scope resolution is also used for class/static members and namespaces
    // Example (pseudo): MyClass::staticMethod();
}

// ------------------------------------------
// Additional Syntax Highlights (Reference)
// ------------------------------------------
/*
    === C++ Syntax Quick Notes ===

    - ::  → Scope resolution operator (used with namespaces or class members)
    - &   → Reference (alias to a variable)
    - *   → Pointer (stores memory address)
    - const Type& → Safe, efficient parameter passing
    - nullptr     → Safer than using NULL (modern C++)
    - #include    → Brings in standard or user headers
    - auto        → Type inference (e.g., auto x = 5;)
    - int x{10};  → Uniform initialization syntax (prevents narrowing)

    === Common Patterns ===

    std::string s = "Hello";         // String from standard library
    const std::string& ref = s;     // Read-only reference
    int* ptr = &x;                  // Pointer to int
    int& ref2 = x;                  // Reference to int
    if (ptr != nullptr) { ... }    // Check if pointer is valid

*/
