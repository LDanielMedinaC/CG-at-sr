#include "..\header\LegBotton.h"



LegBottom::LegBottom()
{
	feet = new Feet();
	feet-> rotated = &theta;
}


LegBottom::~LegBottom()
{
}

LegBottom:: LegBottom(float _theta) {
	theta = 300;
	direction = 1;
	top = true;
	down = false;
	feet = new Feet();
	feet->rotated = &theta;
	feet->flag = &top;
}


void LegBottom::draw() {
	glPushMatrix(); {
		glTranslated(0,-5, 0);
		glRotatef(rotated, 1,0,0);
		glPushMatrix(); {
			glRotated(theta, 1, 0, 0);
			feet->draw();
			glScalef(1, 3, 1);
			new Cube();
		}glPopMatrix();
	}glPopMatrix();
}

void LegBottom::update() {
	if (top && theta > 300) {
		theta -= 0.1f;
	}
	if(!top && theta < 365)
		theta += 0.1f;
	feet->update();
}