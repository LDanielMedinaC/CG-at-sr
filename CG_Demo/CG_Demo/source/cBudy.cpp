#include "cBudy.h"



Budy::Budy()
{
	head = new Head();
	legTop = new LegTop(-2.5, 165.0);
	legLeft = new LegTop(2.5, 165.0);
}


Budy::~Budy()
{
}


void Budy::draw() {

	glPushMatrix(); {
		glColor3f(0, 1, 1);
		glTranslatef(0,5,0);
		head->draw();
		legTop->draw();
		legLeft->draw();
		glPushMatrix();{
			glRotatef(20.0, 1, 0, 0);
			glScalef(5,1,5);
			glutWireCube(1);
		}glPopMatrix();
	}glPopMatrix();
}

void Budy::update() {
	head->update();
	legTop->update();
	legLeft->update();
}