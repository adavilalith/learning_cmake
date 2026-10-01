#pragma once
#include <string>

namespace core {
    // Generates a styled, formatted message string
    std::string format_message(const std::string& name);
    
    // Prints a colored message directly to console using fmt
    void print_styled_banner(const std::string& title);
}