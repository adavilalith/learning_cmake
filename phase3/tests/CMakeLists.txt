add_executable(unit_tests test_printer.cpp)

target_link_libraries(unit_tests
    PRIVATE
        core_lib
        project_warnings
)

add_test(NAME PrinterTest COMMAND unit_tests)