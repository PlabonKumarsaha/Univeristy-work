#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(5.0);

glColor3ub(21, 67, 90);
glBegin(GL_QUADS);
glVertex2i(260, 520);
glVertex2i(280, 520);
glVertex2i(280, 540);
glVertex2i(260, 540);
glEnd();

glBegin(GL_QUADS);
glVertex2i(200, 520);
glVertex2i(200, 480);
glVertex2i(220, 480);
glVertex2i(220, 520);
glEnd();

glColor3ub(21, 67, 96);
glBegin(GL_QUADS);
glVertex2i(220, 520);
glVertex2i(220, 480);
glVertex2i(280, 480);
glVertex2i(280, 520);
glEnd();
glColor3ub(245, 176, 65);
//lower chin after the cowl
glBegin(GL_QUADS);
glVertex2i(200, 480);
glVertex2i(200, 460);
glVertex2i(280, 460);
glVertex2i(280, 480);
glEnd();


glColor3ub(128,128,128);
//gola
glBegin(GL_QUADS);
glVertex2i(200, 480);
glVertex2i(200, 460);
glVertex2i(220, 460);
glVertex2i(220, 480);
glEnd();

//shirt
glBegin(GL_QUADS);
glVertex2i(180,330);
glVertex2i(300, 330);
glVertex2i(300, 460);
glVertex2i(180, 460);
glEnd();

glColor3ub (1, 1, 1);

glBegin(GL_QUADS);
glVertex2i(200, 540);
glVertex2i(200, 480);
glVertex2i(220, 480);
glVertex2i(220, 540);
glEnd();

//belt!
glColor3ub(255,255,0);
glBegin(GL_QUADS);
glVertex2i(180,380);
glVertex2i(180, 355);
glVertex2i(300, 355);
glVertex2i(300, 380);
glEnd();

//the hands
glColor3ub(128,128,128);
glBegin(GL_QUADS);
glVertex2i(160, 430);
glVertex2i(160, 405);
glVertex2i(320, 405);
glVertex2i(320, 430);
glEnd();


//inner logo!
glColor3ub(66, 73, 73);
glBegin(GL_QUADS);
glVertex2i(200, 435);
glVertex2i(200, 405);
glVertex2i(280, 405);
glVertex2i(280, 435);
glEnd();

//left suide hand
glColor3ub(243, 156, 18);
glBegin(GL_QUADS);
glVertex2i(160, 405);
glVertex2i(160, 380);
glVertex2i(180, 380);
glVertex2i(180, 405);
glEnd();

//right side hand!@
glColor3ub(243, 156, 18);
glBegin(GL_QUADS);
glVertex2i(300, 405);
glVertex2i(300, 380);
glVertex2i(320, 380);
glVertex2i(320, 405);
glEnd();


//right hand glove
glColor3ub(21, 67, 96);
glBegin(GL_QUADS);
glVertex2i(300, 380);
glVertex2i(300, 355);
glVertex2i(320, 355);
glVertex2i(320, 380);
glEnd();

//left hand glove
glColor3ub(21, 67, 96);
glBegin(GL_QUADS);
glVertex2i(160, 380);
glVertex2i(160, 355);
glVertex2i(180, 355);
glVertex2i(180, 380);
glEnd();


//cape
glColor3ub(1,1,1);
glBegin(GL_QUADS);
glVertex2i(160, 355);
glVertex2i(160, 285);
glVertex2i(320, 285);
glVertex2i(320, 355);
glEnd();


//underpant
glColor3ub(21, 67, 96);
glBegin(GL_QUADS);
glVertex2i(200, 355);
glVertex2i(200, 310);
glVertex2i(280, 310);
glVertex2i(280, 355);
glEnd();

glBegin(GL_QUADS);
glVertex2i(280, 355);
glVertex2i(280, 335);
glVertex2i(300, 335);
glVertex2i(300, 355);
glEnd();

glColor3b(66, 73, 73);

//pa-left
glBegin(GL_QUADS);
glVertex2i(280, 335);
glVertex2i(280, 260);
glVertex2i(300, 260);
glVertex2i(300, 335);
glEnd();


//pa er nich left
glColor3ub(81,90,90);
glBegin(GL_QUADS);
glVertex2i(280, 260);
glVertex2i(257, 260);
glVertex2i(257, 310);
glVertex2i(280, 310);
glEnd();


//left pa
glColor3b(81,90,90);
glBegin(GL_QUADS);
glVertex2i(180, 335);
glVertex2i(180, 260);
glVertex2i(200, 260);
glVertex2i(200, 335);
glEnd();
//left pa
glColor3ub(66, 73, 73);
glBegin(GL_QUADS);
glVertex2i(200, 260);
glVertex2i(223, 260);
glVertex2i(223, 310);
glVertex2i(200, 310);
glEnd();


//shoes
glColor3b(1,1,1);

glBegin(GL_QUADS);
glVertex2i(180, 260);
glVertex2i(180, 240);
glVertex2i(200, 240);
glVertex2i(200, 260);
glEnd();

glColor3ub(21, 67, 96 );
glBegin(GL_QUADS);
glVertex2i(200, 240);
glVertex2i(223, 240);
glVertex2i(223, 260);
glVertex2i(200, 260);
glEnd();

//right foot shoes
glColor3b(21, 67, 96 );

glBegin(GL_QUADS);
glVertex2i(280, 260);
glVertex2i(280, 240);
glVertex2i(300, 240);
glVertex2i(300, 260);
glEnd();

glColor3ub(1,1,1 );
glBegin(GL_QUADS);
glVertex2i(280, 240);
glVertex2i(257, 240);
glVertex2i(257, 260);
glVertex2i(280, 260);
glEnd();


glColor3ub(202, 111, 30 );
glBegin(GL_QUADS);
glVertex2i(200, 480);
glVertex2i(200, 460);
glVertex2i(220, 460);
glVertex2i(220, 480);
glEnd();

/*
glBegin(GL_QUADS);
glVertex2i(280, 335);
glVertex2i(280, 260);
glVertex2i(300, 260);
glVertex2i(300, 335);
glEnd();
glBegin(GL_QUADS);
glVertex2i(280, 335);
glVertex2i(280, 260);
glVertex2i(300, 260);
glVertex2i(300, 335);
glEnd();
glBegin(GL_QUADS);
glVertex2i(280, 335);
glVertex2i(280, 260);
glVertex2i(300, 260);
glVertex2i(300, 335);
glEnd();
*/


glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 480.0, 0.0, 640.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (480,640);
//glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
