#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

int main() {
	//init + verision of glfw
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	//creates the window and if pointer null 	
	GLFWwindow* window = glfwCreateWindow(800, 600, "look at this graph", NULL, NULL);
	if(window == NULL) {
		printf("no nickleback\n");
		glfwTerminate();
		return 17;
	}
	glfwMakeContextCurrent(window);
	
	//compiles on the OS that youre using!!  
	if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		printf("we are not happy unglad :(\n");
		return 17;
	}
	
	//suze of vindow
	glViewport(0, 0, 800, 600);

	//game loop
	while(!glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	//terminate
	glfwTerminate();

	return 0;
}

