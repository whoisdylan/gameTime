//#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>

int main() {
	if(!glfwInit())
		return 1;
	glfwSleep(1.0);
	glfwTerminate();
}
