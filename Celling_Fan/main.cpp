 #include <windows.h>
#include <GL/glut.h>
#include<math.h>>

GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
# define PI           3.14159265358979323846

GLfloat speed = 0.5f;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'f':
    speed = 0.9f;
    break;
case 'm':
    speed = 0.6f;
    break;
case 's':
    speed = 0.3f;
    break;

glutPostRedisplay();
	}
}



void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);



     glBegin(GL_QUADS);
    glColor3ub(36,65,80);
    glVertex2f(-.05,-.3);
    glVertex2f(-.05,-.8);
    glVertex2f(.05,-.8);
    glVertex2f(.05,-.3);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(36,65,80);
    glVertex2f(-.2,-.8);
    glVertex2f(-.2,-.9);
    glVertex2f(.2,-.9);
    glVertex2f(.2,-.8);
    glEnd();



    /////////////////// circle

	GLfloat x=-.0f; GLfloat y=.0f; GLfloat radius =.4f;
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
    glColor3ub(244,175,130);
    glVertex2f(-0.36f, 0.0f);
    glVertex2f(-0.35f, 0.045f);
    glVertex2f( 0.35f, 0.045f);
    glVertex2f( 0.36f, 0.0f);
    glVertex2f( 0.35f, -0.045f);
    glVertex2f(-0.35f, -0.045f);
    glVertex2f(-0.36f, 0.0f);
    glEnd();
    l -=speed;
    glPopMatrix();



      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
   // glTranslatef(.5,.5,0);
    glRotatef(k,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(244,175,130);
    glVertex2f(0.0f, -0.36f);
    glVertex2f(0.045f, -0.35f);
    glVertex2f(0.045f,  0.35f);
    glVertex2f(0.0f, 0.36f);
    glVertex2f(-0.045f, 0.35f);
    glVertex2f(-0.045f, -0.35f);
    glVertex2f(0.0f, -0.36f);
    glEnd();
    glPopMatrix();
    k-=speed;






    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//

    glutKeyboardFunc(handleKeypress);

    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}

