# Modern CMake Learning Project

A production-ready C++ project template built to master Modern CMake best practices.

## Overview

This repository documents my transition from basic build scripts to a clean, modular, target-oriented CMake architecture. It demonstrates cross-platform compiler management, automated dependency fetching, and integrated unit testing.

## Key Features

- Target-Oriented Design: Uses static libraries (`STATIC`) and `INTERFACE` targets instead of global variables.
- Automated Dependency Management: Fetches external dependencies (e.g., `fmt`) automatically via `FetchContent`.
- Cross-Platform Warnings: Centralizes strict compiler warning flags (`-Wall -Wextra` on GCC/Clang, `/W4` on MSVC) using a dedicated `project_warnings` interface target.
- Automated Testing: Integrated CTest framework running unit tests against internal library targets.
- Single Source of Truth: Clean separation of library code (`src/`) and tests (`tests/`) without code duplication.

## Project Structure

```text
.
├── CMakeLists.txt          # Root configuration (FetchContent, CTest)
├── cmake/
│   └── CompilerFlags.cmake  # Interface target for compiler warnings
├── src/
│   ├── CMakeLists.txt      # Builds core_lib library and main app executable
│   ├── include/            # Public library headers
│   └── printer.cpp         # Library implementation
└── tests/
    ├── CMakeLists.txt      # Builds and registers unit test runners
    └── test_printer.cpp    # Unit test implementation