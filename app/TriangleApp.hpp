#pragma once

#include "../window/NonWindow.hpp"
#include "NonPipeline.hpp"

namespace non {

class TriangleApp {
public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT{600};

    void run();

private:
    NonWindow nonWindow{WIDTH, HEIGHT, "Triangle App"};
    NonPipeline nonPipeline{"shaders/shader.vert.spv", "shaders/shader.frag.spv"};
};
}// namespace non
