#include "core/printer.hpp"

int main() {
    core::print_styled_banner("PHASE 3 DEMO");
    std::string greeting = core::format_message("Developer");
    
    // Call function using external fmt capabilities
    core::print_styled_banner(greeting);
    return 0;
}