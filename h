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

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init (void)
{
glClearColor(1.0,1.0,1.0,1.0);       // set the display window color to white
glMatrixMode(GL_PROJECTION);        // set the projection parameters
gluOrtho2D(0.0, 200.0, 0.0, 150.0); //define a 2D orthographic projection matrix
//glLineWidth(10);
}

void lineSegment(void)
{
glClear(GL_COLOR_BUFFER_BIT);     // clear the display window
glColor3f(1.0,0.0,0.0);         //set line segment color to red
glBegin(GL_LINES); //Treats each pair of vertices as an independent line segment
glVertex2i(180,15);       // specify the line segment geometry / to specify point, line, and polygon vertices
glVertex2i(10,145);         //2D point in short coordinates / glVertex3i (0,0,0)
glEnd();
glFlush();         // process all OpenGL functions as quickly as possible
}
 int main(int argc, char** argv)
{
glutInit(&argc, argv);      // initialize glut
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);    //set display mode
glutInitWindowPosition(200,100);       //set top left display window position
glutInitWindowSize(400,300);        //set display window height and width
glutCreateWindow("An Example OpenGL Program");      //create display
init(); //initialize the GLUT library
glutDisplayFunc(lineSegment);        //send graphics to display window
glutMainLoop();        // Starts the GLUT even processing loop

}
