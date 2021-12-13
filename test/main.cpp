#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

  if(position <-1.0)
        position = 1.2f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}



void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);


	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	int i;

	GLfloat x=.1f; GLfloat y=.4f; GLfloat radius =.2f;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=.3f;  y=.4f;  radius =.3f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=.6f;  y=.4f;  radius =.2f;
	 triangleAmount = 20;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 x=-.1f;  y=-.4f;  radius =.2f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=-.3f;  y=-.4f;  radius =.3f;
	 triangleAmount = 20;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-.6f;  y=-.4f;  radius =.2f;
	 triangleAmount = 20;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	glFlush();
}





int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Cloud Moving");
	glutInitWindowSize(1920,1820);
	glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
	glutMainLoop();
	return 0;
}



