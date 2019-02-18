#include "..\header\Cube.h"



Cube::Cube()
{
	glLineWidth(3.0f);
	glBegin(GL_LINES); {
		
		glVertex3f(-0.5,0,0.5);
		glVertex3f(0.5, 0, 0.5);
		glVertex3f(0.5,0,0.5);
		glVertex3f(0.5,0,-0.5);
		glVertex3f(0.5,0,-0.5);
		glVertex3f(-0.5,0,-0.5);
		glVertex3f(-0.5,0,-0.5);
		glVertex3f(-0.5,0,0.5);
		
		glVertex3f(-0.5, -1, 0.5);
		glVertex3f(0.5, -1, 0.5);
		glVertex3f(0.5, -1, 0.5);
		glVertex3f(0.5, -1, -0.5);
		glVertex3f(0.5, -1, -0.5);
		glVertex3f(-0.5, -1, -0.5);
		glVertex3f(-0.5, -1, -0.5);
		glVertex3f(-0.5, -1, 0.5);
		glVertex3f(-0.5, 0, 0.5);
		glVertex3f(-0.5, -1, 0.5);
		glVertex3f(0.5, 0, 0.5);
		glVertex3f(0.5, -1, 0.5);
		glVertex3f(0.5, 0, -0.5);
		glVertex3f(0.5, -1, -0.5);
		glVertex3f(-0.5, 0, -0.5);
		glVertex3f(-0.5, -1, -0.5);

	}glEnd();
}


Cube::~Cube()
{
}
