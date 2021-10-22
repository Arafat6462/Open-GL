#include<windows.h>
#include<GL/glut.h>

void display()
{

    glClearColor(1.0f,1.0f,1.0f,1.0f); // background color
    glClear(GL_COLOR_BUFFER_BIT); // clean the drawing space.

    glBegin(GL_LINES); // create a line. begin
    glColor3f(1,0,0); // RGB color range 0 -> 1
    glVertex2f(0.0f, 0.0f); // axis value. 2=2D, 3=3D, f=float, i=int, ....
    glVertex2f(0.2f, 0.3f);
    glEnd(); // vertex information for line is completed. end.



    glBegin(GL_LINES);
    glColor3f(0,.1,.6);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.2, -0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0,1,1);
    glVertex2f(-.5,.8);
    glVertex2f(-1,0);
    glVertex2f(-.3,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex2f(-0,-0);
    glVertex2f(-1,0);
    glVertex2f(-1,-1);
    glVertex2f(0,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2f(.4,-.3);
    glVertex2f(.6,-.3);
    glVertex2f(.7,-.4);
    glVertex2f(.7,-.5);
    glVertex2f(.6,-.6);
    glVertex2f(.4,-.6);
    glVertex2f(.3,-.5);
    glVertex2f(.3,-.4);
    glEnd();

    glFlush(); // Rendering. show in display.

}

int main(int argc, char** argv)
{

    glutInit(&argc, argv); // initialize
    glutCreateWindow("HELLO");
    glutInitWindowSize(500,500);
    glutDisplayFunc(display); // callback function.
    glutMainLoop(); // to stay design in display. recursively calling main function. :(
    return 0;

}
