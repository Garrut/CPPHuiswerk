#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>

using namespace std;

void Render()
{
	static const GLfloat blue[] = { 0.0, 0.0, 0.4, 1.0 };
	glClearBufferfv(GL_COLOR, 0, blue);
	glutSwapBuffers();
}

int main(int argc, char ** argv)
{
	#pragma region << * * * * * * Setup GLut & GLew * * * * * >>

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Hello OpenGL");
	glutDisplayFunc(Render);

	glewInit();

#pragma endregion

	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);

	glutMainLoop();

	return 0;
}