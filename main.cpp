#include <cstdlib>
#include <exception>
#include <iostream>

#include "app/TriangleApp.hpp"
int main(int argc, char *argv[]) {
    non::TriangleApp app;

    try {
        app.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
