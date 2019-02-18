#include "..\header\Feet.h"



Feet::Feet()
{
	printf("%f\n", theta);
	theta = 0;
}


Feet::~Feet()
{
}

void Feet::draw() {
	glPushMatrix(); {
		glTranslated(0,-3,.5);
		glRotatef(-(*rotated), 1.0,0,0);
		glPushMatrix(); {
			glRotatef(theta, 1.0,0,0);
			glScalef(2,.5,2);
			new Cube();
		}glPopMatrix();
	}glPopMatrix();
}

void Feet::update() {
	//printf("....%d %f \n",*flag, theta);
	if (theta < 30 && *flag) {
		theta += 0.1;
		//printf("////");
	}
	else if (theta > 0 && !*flag)
		theta -= 0.1;
}