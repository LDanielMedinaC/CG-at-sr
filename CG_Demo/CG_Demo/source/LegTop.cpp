#include "LegTop.h"



LegTop::LegTop()
{
}

LegTop::LegTop(float _x, float _theta) {
	x = _x;
	theta = 105;
	direction = 1;
	lb = new LegBottom(10);
}


LegTop::~LegTop()
{


}

void LegTop:: draw() {
	glPushMatrix(); {
		glTranslated(x, -1, 2.5);
		glPushMatrix(); {
			glRotated(theta, 1, 0, 0);
			glPushMatrix();{
				glScaled(1, 5, 1);
				new Cube();
			}glPopMatrix();
			lb->draw();
		}glPopMatrix();
	}glPopMatrix();
}

void LegTop::update(){
	if (theta > 105.0 || theta < 15) {
		direction *= -1;
		lb -> top =  !lb->top;
	}
	theta += 0.1f * direction;
	lb->rotated = -theta;
	lb->update();
}

