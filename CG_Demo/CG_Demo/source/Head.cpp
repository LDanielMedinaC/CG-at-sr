#include "Head.h"

Head::Head()
{
	rotX = 0;
	directionAngle = 1;
}


Head::~Head()
{
}

void Head:: draw() {
	glPushMatrix(); {
		glTranslatef(0,2,2.5);
		glColor3f(.5,.6,.4);
		glRotatef(rotX, 0, 1, 0);
		glPushMatrix(); {
			
			glScalef(2,2,3);
			glutSolidCube(1);
		}glPopMatrix();
	}glPopMatrix();
}

void Head::update() {
	static int cont = 0;
	rotX += 0.1*directionAngle;
	if (rotX > 40 || rotX < -40) {
		directionAngle *= -1.0;
	}
}
