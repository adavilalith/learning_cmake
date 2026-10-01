    #include "core/printer.hpp"
#include <fmt/core.h>
#include <fmt/color.h>

namespace core {
    std::string format_message(const std::string& name) {
        // fmt::format works like Python f-strings
        return fmt::format("Welcome to Modern CMake, {}!", name);
    }

    void print_styled_banner(const std::string& title) {
        // Print formatted, green/bold text straight to terminal
        fmt::print(
            fmt::fg(fmt::color::lime_green) | fmt::emphasis::bold,
            "=== {} ===\n", 
            title
        );
    }
}