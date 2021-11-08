#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
# define PI           3.14159265358979323846


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);






    /////////////////// circle

	GLfloat x=-.0f; GLfloat y=.0f; GLfloat radius =.5f;
	int triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(96,125,140);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();





   /////////////////


     glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
   // glTranslatef(.5,.5,0);
    glRotatef(l,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(244,67,54);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.45f, 0.0f);
    glVertex2f( 0.46f, 0.015f);
    glVertex2f( 0.45f, 0.03f);
    glVertex2f( 0.0f, 0.03f);
    glEnd();
    glPopMatrix();
    l-=0.002f;


     glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
   // glTranslatef(.5,.5,0);
    glRotatef(k,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.45f, 0.0f);
    glVertex2f( 0.46f, 0.01f);
    glVertex2f( 0.45f, 0.02f);
    glVertex2f( 0.0f, 0.02f);
    glEnd();
    glPopMatrix();
    k-=0.015f;


    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
   // glTranslatef(.5,.5,0);
    glRotatef(j,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(174,190,196);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.45f, 0.0f);
    glVertex2f( 0.465f, 0.005f);
    glVertex2f( 0.45f, 0.01f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    j-=0.1f;


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//

    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}

