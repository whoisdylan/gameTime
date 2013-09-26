//#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>
// #include <unistd.h>
#include <iostream>

int main() {
	// if(!glfwInit())
	// 	return 1;
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	glfwInit();
	GLFWwindow *mainWindow = glfwCreateWindow(800, 600, "OpenGL Testing", NULL, NULL);
	// std::cout << mainWindow << std::endl;

	while (glfwGetWindowAttrib(mainWindow, GLFW_VISIBLE)) {
		glfwSwapBuffers(mainWindow);
		glfwPollEvents();
		//needed to escape fullscreen mode
		if (glfwGetKey(mainWindow, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
			break;
		}
	}
	glfwTerminate();
}
