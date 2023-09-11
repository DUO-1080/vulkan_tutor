#pragma once

#include <string>
#define GLFE_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace non {
class NonWindow {
public:
    NonWindow(int w, int h, std::string name);
    ~NonWindow();

    NonWindow(const NonWindow&) = delete;
    NonWindow& operator=(const NonWindow&) = delete;

    bool shouldClose() {
        return glfwWindowShouldClose(window);
    }

private:
    int width;
    int height;

    std::string windowName;
    GLFWwindow* window{};

    void initWindow();
};
}// namespace non
