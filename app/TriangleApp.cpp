#include "TriangleApp.hpp"

#include <GLFW/glfw3.h>

namespace non {

void TriangleApp::run() {
    while (!nonWindow.shouldClose()) {
        glfwPollEvents();
    }
}

}// namespace non
