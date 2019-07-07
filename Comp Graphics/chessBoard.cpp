/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glClearColor(1,1,1,0);

int flag= 0;

for (int i=0; i<=900; i=i+100)
{
    for (int j=100; j<=900; j=j+100)
    {
        if (flag)
        {
            glColor3ub(0,0,0);
            flag=0;
        }
        else{
            glColor3ub(255,255,255);
            flag=1;
        }
        glBegin(GL_QUADS);
        glVertex2i(i,j);
        glVertex2i(i,j+100);
        glVertex2i(i+100,j+100);
        glVertex2i(i+100,j);
        glEnd();


    }
}
glFlush();

}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 900.0, 0.0, 900.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 900);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Chessboard");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
