#include <stdio.h>
#include <iostream>
// #include "library/src/adder.h"
#include <adder.h> // after installing library to /usr/local/lib
                   // and header to /usr/local/include

#include <GLFW/glfw3.h>

int main() {
    printf("Hello world\n");
    std::cout << simplemath::add(5, 30) << std::endl;

    GLFWwindow* window;

    if( !glfwInit() ) {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "GLFW Window", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return EXIT_SUCCESS;
}