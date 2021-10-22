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
    glColor3ub(110,160,0);
    glVertex2f(-.8,-.3);
    glVertex2f(.8,-.3);
    glVertex2f(1,-.8);
    glVertex2f(-1,-.8);
    glEnd();



    /////////////////////////


    // D building

     glBegin(GL_QUADS); // main body
    glColor3ub(62,95,130);
    glVertex2f(-.9,-.3);
    glVertex2f(.8,-.3);
    glVertex2f(.8,.9);
    glVertex2f(-.9,.9);
    glEnd();




     glBegin(GL_QUADS); //right sight stair
    glColor3ub(21,43,84);
    glVertex2f(.8,-.3);
    glVertex2f(.9,-.3);
    glVertex2f(.9,.98);
    glVertex2f(.8,.98);
    glEnd();

    glBegin(GL_QUADS); //right sight parking
    glColor3ub(64,81,98);
    glVertex2f(.8,-.3);
    glVertex2f(.98,-.3);
    glVertex2f(.98,-.1);
    glVertex2f(.8,-.1);
    glEnd();


        // window
     glBegin(GL_QUADS); //right sight stair window
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS); //right sight stair window open
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();

     glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //2nd floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();


    // glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //3rd floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();


     //glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //4th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();


     //glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //5th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();


     //glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //6th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();


    // glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //7th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();


    // glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //8th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();


     //glLoadIdentity();
    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //9th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();

    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //10th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();

    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //11th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();

    glTranslatef(+0.0f, 0.1f, 0.0f);
     glBegin(GL_QUADS); //12th floor
    glColor3ub(105,140,160);
    glVertex2f(.84,-.1);
    glVertex2f(.86,-.1);
    glVertex2f(.86,-.05);
    glVertex2f(.84,-.05);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(.84,-.085);
    glVertex2f(.86,-.085);
    glVertex2f(.86,-.065);
    glVertex2f(.84,-.065);
    glEnd();

    glLoadIdentity();







         //goal bar
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-.1,-.2);
    glVertex2f(.1,-.2);
    glEnd();

     glBegin(GL_LINES); //goal bar
     glColor3ub(255,255,255);
    glVertex2f(-.1,-.2);
    glVertex2f(-.1,-.3);
    glEnd();

     glBegin(GL_LINES); //goal bar
    glColor3ub(255,255,255);
    glVertex2f(.1,-.2);
    glVertex2f(.1,-.3);
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
    glutInitWindowSize(1600, 1000);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}




