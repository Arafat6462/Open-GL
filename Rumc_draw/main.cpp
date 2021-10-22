#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)




   // left line
    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(-1,-.8);
    glVertex2f(-.8,0);
    glEnd();

    // left walkway
    glBegin(GL_QUADS);
    glColor3ub(63,122,101);
    glVertex2f(-.999,-.8);
    glVertex2f(-.9,-.86);
    glVertex2f(-.75,-.04);
    glVertex2f(-.799,0);
    glEnd();

    //ground and basketball line
    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(-.7,-.1);
    glVertex2f(.7,-.1);
    glEnd();


    // basketball and building line
    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(-.7,.1);
    glVertex2f(.7,.1);
    glEnd();


    //front 5th floor building of 3 section
    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(-.6,.1);
    glVertex2f(-.6,.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,.6);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(.2,.1);
    glVertex2f(.2,.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(.6,.1);
    glVertex2f(.6,.6);
    glEnd();

    glBegin(GL_LINES); // top of 5th floor
    glColor3ub(63,122,101);
    glVertex2f(-.6,.6);
    glVertex2f(.6,.6);
    glEnd();

    // back 8th floor
    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(-.56,.1);
    glVertex2f(-.56,.9);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,.9);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(.2,.1);
    glVertex2f(.2,.9);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(.56,.1);
    glVertex2f(.56,.9);
    glEnd();

     glBegin(GL_LINES); // top of 8th floor
    glColor3ub(63,122,101);
    glVertex2f(-.56,.9);
    glVertex2f(.56,.9);
    glEnd();

    // tree


    glLoadIdentity();
    glTranslatef(+0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.5,0);
    glVertex2f(-.55,-.10);
    glVertex2f(-.45,-.10);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.5,.05);
    glVertex2f(-.55,-.05);
    glVertex2f(-.45,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.49,-.1);
    glVertex2f(-.51,-.1);
    glVertex2f(-.51,-.18);
    glVertex2f(-.49,-.18);
    glEnd();



       glLoadIdentity();
    glTranslatef(+0.3f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.5,0);
    glVertex2f(-.55,-.10);
    glVertex2f(-.45,-.10);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.5,.05);
    glVertex2f(-.55,-.05);
    glVertex2f(-.45,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.49,-.1);
    glVertex2f(-.51,-.1);
    glVertex2f(-.51,-.18);
    glVertex2f(-.49,-.18);
    glEnd();



       glLoadIdentity();
    glTranslatef(+0.9f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.5,0);
    glVertex2f(-.55,-.10);
    glVertex2f(-.45,-.10);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.5,.05);
    glVertex2f(-.55,-.05);
    glVertex2f(-.45,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.49,-.1);
    glVertex2f(-.51,-.1);
    glVertex2f(-.51,-.18);
    glVertex2f(-.49,-.18);
    glEnd();





    glLoadIdentity();
    glTranslatef(+0.9f, 0.0f, 0.0f);
    glScaled(1.5,1.5,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.5,0);
    glVertex2f(-.55,-.10);
    glVertex2f(-.45,-.10);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.5,.05);
    glVertex2f(-.55,-.05);
    glVertex2f(-.45,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.49,-.1);
    glVertex2f(-.51,-.1);
    glVertex2f(-.51,-.18);
    glVertex2f(-.49,-.18);
    glEnd();

    glLoadIdentity();








    // right side line
    glBegin(GL_LINES);
    glColor3ub(63,122,101);
    glVertex2f(1,-.8);
    glVertex2f(.8,0);
    glEnd();







	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(120, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}




