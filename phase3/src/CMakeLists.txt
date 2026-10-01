# 1. Create local library target
add_library(core_lib STATIC
    printer.cpp
)

# 2. Add public headers
target_include_directories(core_lib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
)

# 3. Link project warnings AND external fmt library
target_link_libraries(core_lib
    PUBLIC
        fmt::fmt              # PUBLIC because printer.hpp uses <fmt/color.hpp>
    PRIVATE
        project_warnings
)

# 4. Main Executable Target
add_executable(app main.cpp)

target_link_libraries(app
    PRIVATE
        core_lib
        project_warnings
)