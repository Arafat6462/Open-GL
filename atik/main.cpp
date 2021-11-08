 #include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;


void Idle()
{
glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
glClear(GL_COLOR_BUFFER_BIT);



    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(0,0,0);
    glRotatef(i,0,0,0.1);//i=how many degree you want to rotate around an axis

    glBegin(GL_TRIANGLES);
    glColor3ub(110, 0, 25);
    glVertex2f(0,-.1);
    glVertex2f(-.13,.4);
    glVertex2f(.13,.4);
    glEnd();
     glTranslatef(0,0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(110, 0, 25);
    glVertex2f(0,-.1);
    glVertex2f(-.3,.1);
    glVertex2f(-.3,-.3);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(110, 0, 25);
    glVertex2f(0,-.1);
    glVertex2f(.3,.1);
    glVertex2f(.3,-.3);
    glEnd();

    glPopMatrix();


    i-=0.1f;

    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.1,-.1);
    glVertex2f(.1,-.1);
    glVertex2f(-.1,-.8);
    glVertex2f(.1,-.8);
    glEnd();

glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);          // Initialize GLUT
glutInitWindowSize(320, 320);
glutCreateWindow("Model Transform");
glutDisplayFunc(display);//

glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
glutMainLoop();
return 0;}
