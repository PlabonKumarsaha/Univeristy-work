#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI   3.14159265358979323846


GLfloat position = 0.0f;
GLfloat speed = 0.05f;

void update(int value) {

    if(position < -1.0)
        position = 1.2f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
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
    speed = 0.0f;
    break;
case 'w':
    speed += 0.1f;
    break;


glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   glBegin(GL_QUADS);
   glColor3ub(150,100,20);
   glVertex2f(-0.2f,-0.8f);
   glVertex2f(-0.1f,-0.8f);
   glVertex2f(-0.1f,-0.5f);
   glVertex2f(-0.2f,-0.5f);

   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,255);
   glVertex2f(-0.2f,-0.5f);
   glVertex2f(-0.1f,-0.5f);
   glVertex2f(-0.15f,-0.4f);
    glEnd();

    // top right triangle
    glBegin(GL_TRIANGLES);
   glColor3ub(255,0,0);
   glVertex2f(-0.1f,-0.55f);
   glVertex2f(0.0f,-0.55f);
   glVertex2f(-0.1f,-0.5f);

    glEnd();

   // top left triangle
    glBegin(GL_TRIANGLES);
   glColor3ub(255,0,0);
   glVertex2f(-0.3f,-0.55f);
   glVertex2f(-0.2f,-0.55f);
   glVertex2f(-0.2f,-0.5f);

    glEnd();
    //bottom left triangle
        glBegin(GL_TRIANGLES);
   glColor3ub(255,0,0);
   glVertex2f(-0.32f,-0.8f);
   glVertex2f(-0.2f,-0.8f);
   glVertex2f(-0.2f,-0.65f);

    glEnd();

    //bottom right triangle
       glBegin(GL_TRIANGLES);
   glColor3ub(255,0,0);
   glVertex2f(-0.1f,-0.8f);
   glVertex2f(0.02f,-0.8f);
   glVertex2f(-0.1f,-0.65f);

    glEnd();

    //fire 1
    glBegin(GL_POLYGON);
    glColor3ub(255,60,20);
    glVertex2f(-0.32f,-0.85f);
   glVertex2f(-0.15f,-0.97f);
   glVertex2f(0.02f,-0.85f);
   glVertex2f(-0.1f,-0.8f);
   glVertex2f(-0.2f,-0.8f);
   glVertex2f(-0.32f,-0.85f);

   glEnd();

   //fire 2
   glBegin(GL_POLYGON);
    glColor3ub(255,180,20);
    glVertex2f(-0.23f,-0.82f);
   glVertex2f(-0.146f,-0.87f);
   glVertex2f(-0.083f,-0.82f);
   glVertex2f(-0.1f,-0.8f);
   glVertex2f(-0.2f,-0.8f);
    glEnd();

    glPushMatrix();
    glTranslatef(0,position, 0.0f);
    //yellow circle
   GLfloat x=-0.15f;
   GLfloat y=-0.31f;
   GLfloat radius =.087f;
   int triangleAmount = 200; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(210,240,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

      //red circle
   GLfloat x1=0.03f;
   GLfloat y1=0.35f;


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(240,0,0);
		glVertex2f(x1, y1); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	  //blue circle
   GLfloat x2=-0.59f;
   GLfloat y2=0.75f;

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,140);
		glVertex2f(x2, y2); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 //green circle
   GLfloat x3=0.55f;
   GLfloat y3=0.3f;

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,195,0);
		glVertex2f(x3, y3); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();


   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(480, 620);
   glutInitWindowPosition(150, 50);
   glutCreateWindow("Rocket Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
