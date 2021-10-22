#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	//////////////////// Quads
    glBegin(GL_QUADS);
    glColor3ub(228,3,3);
    glVertex2f(-.8,.6);
    glVertex2f(.8,.6);
    glVertex2f(.8,.4);
    glVertex2f(-.8,.4);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,140,0);
    glVertex2f(-.8,.4);
    glVertex2f(.8,.4);
    glVertex2f(.8,.2);
    glVertex2f(-.8,.2);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-.8,.2);
    glVertex2f(.8,.2);
    glVertex2f(.8,.0);
    glVertex2f(-.8,.0);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0,128,38);
    glVertex2f(-.8,.0);
    glVertex2f(.8,.0);
    glVertex2f(.8,-.2);
    glVertex2f(-.8,-.2);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0,77,255);
    glVertex2f(-.8,-.2);
    glVertex2f(.8,-.2);
    glVertex2f(.8,-.4);
    glVertex2f(-.8,-.4);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(117,7,135);
    glVertex2f(-.8,-.4);
    glVertex2f(.8,-.4);
    glVertex2f(.8,-.6);
    glVertex2f(-.8,-.6);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(0,106,78);
    glVertex2f(-.8,.6);
    glVertex2f(0,0);
    glVertex2f(-.8,-.6);
    glEnd();

    // stand
    glBegin(GL_QUADS);
    glColor3ub(107,135,144);
    glVertex2f(-.9,.6);
    glVertex2f(-.8,.6);
    glVertex2f(-.8,-1);
    glVertex2f(-.9,-1);
    glEnd();

    // FLAG F
    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.5,-.7);
    glVertex2f(-.5,-0.95);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.5,-.7);
    glVertex2f(-.3,-0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.5,-.8);
    glVertex2f(-.3,-.8);
    glEnd();

    // L
    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.2,-.7);
    glVertex2f(-.2,-0.95);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.2,-.95);
    glVertex2f(0,-0.95);
    glEnd();

    //A
     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.1,-.95);
    glVertex2f(.2,-0.7);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.3,-.95);
    glVertex2f(.2,-0.7);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.14,-.83);
    glVertex2f(.26,-0.83);
    glEnd();

    //G

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.6,-.7);
    glVertex2f(.4,-0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.4,-.7);
    glVertex2f(.4,-0.95);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.6,-.95);
    glVertex2f(.4,-0.95);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.6,-.95);
    glVertex2f(.6,-0.83);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.5,-.83);
    glVertex2f(.6,-0.83);
    glEnd();


	///////////////////

	GLfloat x=-.5f; GLfloat y=.0f; GLfloat radius =.18f;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(219,0,64);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}




