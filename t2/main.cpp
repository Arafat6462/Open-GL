 #include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
# define PI           3.14159265358979323846
#include<math.h>>
void display(void)
{
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);




glBegin(GL_POLYGON); ///// body
glColor3f(1.0f, 1.0f,0.0f);

glVertex2f(-.7f,.35f);
glVertex2f(-.6f,.3f);
glVertex2f(-.3f,.3f);
glVertex2f(-.3f,.5f);
glVertex2f(-.6f,.5f);
glVertex2f(-.7f,.45f);


glEnd();
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.35,.3);
glVertex2f(-.35,.5);
glEnd();

 glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(-.69,.34);
    glVertex2f(-.751,.518);
    glVertex2f(-.72,.532);
    glVertex2f(-.67,.465);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(-.5,.3);
    glVertex2f(-.6,.1);
    glVertex2f(-.495,.065);
    glVertex2f(-.4,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(-.5,.5);
    glVertex2f(-.57,.62);
    glVertex2f(-.47,.62);
    glVertex2f(-.4,.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(-.3,.41);
    glVertex2f(-.29,.41);
    glVertex2f(-.29,.39);
    glVertex2f(-.3,.39);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(-.296,.41);
    glVertex2f(-.296,.499);
    glVertex2f(-.294,.499);
    glVertex2f(-.294,.41);
    glEnd();
        glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(-.296,.39);
    glVertex2f(-.296,.301);
    glVertex2f(-.294,.301);
    glVertex2f(-.294,.39);
    glEnd();


glFlush();

}
void init(void)
{

    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15.0,15.0,-15.0,15.0,-15.0,15.0);



}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(1600, 1000);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
