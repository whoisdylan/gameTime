//#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>
#include <unistd.h>

int main() {
	if(!glfwInit())
		return 1;
	usleep(1000*1000);
	glfwTerminate();
}
