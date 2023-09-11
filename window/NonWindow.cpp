#include "NonWindow.hpp"

#include <GLFW/glfw3.h>

#include <string>
#include <utility>

namespace non {

NonWindow::NonWindow(int w, int h, std::string name) : width(w), height(h), windowName(std::move(name)) {
    initWindow();
}

NonWindow::~NonWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void NonWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}

}// namespace non
