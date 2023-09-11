cmake_minimum_required(VERSION 3.0)
project(vulkan_tutor)

set(CMAKE_CXX_STANDARD 20)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(vulkan_tutor main.cpp window/NonWindow.hpp window/NonWindow.cpp app/TriangleApp.hpp app/TriangleApp.cpp app/NonPipeline.hpp app/NonPipeline.cpp)
target_link_libraries(vulkan_tutor glfw;Vulkan::Vulkan)
