#pragma once

#include "../window/NonWindow.hpp"

namespace non {

class TriangleApp {
public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT{600};

    void run();

private:
    NonWindow nonWindow{WIDTH, HEIGHT, "Triangle App"};
};
}// namespace non
