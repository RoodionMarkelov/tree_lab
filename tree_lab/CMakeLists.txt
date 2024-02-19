# CMakeList.txt: проект CMake для tree_lab; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (tree_lab "tree_lab.cpp" "tree_lab.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET tree_lab PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
