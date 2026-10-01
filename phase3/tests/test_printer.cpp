#include <cassert>
#include "core/printer.hpp"

int main() {
    std::string result = core::format_message("Alice");
    assert(result == "Welcome to Modern CMake, Alice!");
    return 0; // Return 0 signals success to CTest
}