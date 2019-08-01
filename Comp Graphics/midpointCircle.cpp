#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 1.0f;
GLfloat position2 = 1.0f;
GLfloat position3 = 1.0f;
GLfloat speed = 0.08f;
GLfloat speed2 = 0.02f;
GLfloat speed3 = 0.05f;
GLfloat a =0.0f;

void update(int value) {

    if(position < -1.2f)
        position = 1.0f;
    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update2(int value) {

    if(position2 < -1.2f)
        position2 = 1.0f;
    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
void update3(int value) {

    if(position3 < -1.2f)
        position3 = 1.0f;
    position3 -= speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed= 0.0f;
    break;
case 'w':
    speed += 0.1f;
    break;
case 'd':
    a-=0.15f;
    break;
case 'f':
    a+=0.15f;


glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();




glPushMatrix();

glTranslatef(a,0.0f, 0.0f);

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 1.0f, 1.0f);
   glVertex2f(0.2f,-0.5f);
   glVertex2f(0.3f, -0.5f);
   glVertex2f(0.25f, -0.4f);
   glEnd();

    glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(0.1f,-0.6f);
   glVertex2f(0.4f, -0.6f);
   glVertex2f(0.3f, -0.5f);
   glVertex2f(0.2f, -0.5f);
   glEnd();

    glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(0.1f,-0.8f);
   glVertex2f(0.4f, -0.8f);
   glVertex2f(0.3f, -0.65f);
   glVertex2f(0.2f, -0.65f);
   glEnd();

 glBegin(GL_POLYGON);
   glColor3ub(184,134,11);
   glVertex2f(0.2f,-0.8f);
   glVertex2f(0.3f, -0.8f);
   glVertex2f(0.3f, -0.5f);
   glVertex2f(0.2f,-0.5f);
   glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(255,0,0);

   glVertex2f(0.2f,-0.8f);
   glVertex2f(0.1f,-0.85f);
   glVertex2f(0.25f,-0.95f);
    glVertex2f(0.4f,-0.85f);
   glVertex2f(0.3f,-0.8f);

   glEnd();

      glBegin(GL_POLYGON);
   glColor3ub(255,215,0);

   glVertex2f(0.2f,-0.8f);
   glVertex2f(0.18f,-0.84f);
   glVertex2f(0.25f,-0.88f);
    glVertex2f(0.32f,-0.84f);
   glVertex2f(0.3f,-0.8f);

   glEnd();


glPopMatrix();

glPushMatrix();

glTranslatef(0.0,position,0.0);
glColor3ub(255,0,0);

glutSolidSphere (0.08, 20, 10);

glPopMatrix();

glPushMatrix();

glTranslatef(0.5,position2,0.0);

glColor3ub(0,255,0);

glutSolidSphere (0.08, 20, 10);

glPopMatrix();

glPushMatrix();

glTranslatef(-0.8,position3,0.0);

glColor3ub(0,0,255);

glutSolidSphere (0.08, 20, 10);

glPopMatrix();



   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(640, 640);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutTimerFunc(1000, update2, 0);
   glutTimerFunc(1000, update3, 0);
   glutMainLoop();
   return 0;
}
