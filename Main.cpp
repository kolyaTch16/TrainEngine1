#include  <iostream>
#include  "glfw3.h"
#include  "ElectricComponents.h"
#include "FileName.h"
#include <stdlib.h>
#include <stdio.h>
#pragma comment(lib, "glfw3.lib")
int main() {
	//Diode a;
	GLFWwindow* GameWin;
	if (!glfwInit())
		exit(EXIT_FAILURE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	GameWin = glfwCreateWindow(600, 600, "3432", NULL, NULL);
	if (!GameWin)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	
	glfwSwapInterval(1);
	glfwMakeContextCurrent(GameWin);
	while (!glfwWindowShouldClose(GameWin))
	{
		glfwSwapBuffers(GameWin);
		glfwPollEvents();
	}
	return 0;
}



