#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(7.0);
glBegin(GL_LINES);
//corordinate box
glVertex2i(0, 240);
glVertex2i(640,240);
glVertex2i(320,0);
glVertex2i(320, 480);

//top left

glVertex2i(90, 450);//p2
glVertex2i(90, 260);//p1

glVertex2i(90, 260);//p1
glVertex2i(230, 260);//p3

glVertex2i(230, 260);//p3
glVertex2i(230, 450);//p4

glVertex2i(230, 450);//p4
glVertex2i(90, 450);//p3

//inside the rectangle

glVertex2i(120, 400);//p2
glVertex2i(120, 300);//p1

glVertex2i(120, 300);//p1
glVertex2i(200, 300);//p3

glVertex2i(200, 300);//p3
glVertex2i(200, 400);//p4

glVertex2i(200,400 );//p4
glVertex2i(120, 400);//p3


//the triange

    glBegin(GL_TRIANGLES);

    glColor3f(1,0,0);
    glVertex2i(90,50);
    glVertex2i(210,50);
    glVertex2i(90,50);
    glVertex2i(150,150);
    glVertex2i(210,50);
   glVertex2i(150,150);

   //upper triange
   glVertex2i(100,150);
   glVertex2i(200,150);

   glVertex2i(100,150);
   glVertex2i(150,200);

   glVertex2i(200,150);
   glVertex2i(150,200);


   glEnd();
   //down right
   glBegin(GL_TRIANGLES);

   glVertex2i(380,30);
   glVertex2i(500,30);
   glVertex2i(440,110);

    glVertex2i(440,110);
   glVertex2i(380,190);
   glVertex2i(500,190);
//top right

 glEnd();

  glBegin(GL_LINES);
glVertex2i(360, 420);//p2
glVertex2i(500, 420);//p1

glVertex2i(500, 420);//p1
glVertex2i(500, 260);//p3

glVertex2i(500, 260);//p3
glVertex2i(360, 260);//p4

glVertex2i(360, 420);//p4
glVertex2i(360, 260);//p3

glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
//glPointSize(100.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
//glutInitWindowPosition (100, 150);
glutCreateWindow ("Lab Task 2");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
