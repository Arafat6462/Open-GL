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
    glBegin(GL_QUADS); //red squad
    glColor3ub(255,0,0);
    glVertex2f(0,.5);
    glVertex2f(.35,.5);
    glVertex2f(.35,-.2);
    glVertex2f(0,-.2);
    glEnd();

     glBegin(GL_QUADS); //top black quad
    glColor3ub(0,0,0);
    glVertex2f(-.02,.58);
    glVertex2f(.37,.58);
    glVertex2f(.37,.5);
    glVertex2f(-.02,.5);
    glEnd();

     glBegin(GL_QUADS); //white quad
    glColor3ub(255,255,255);
    glVertex2f(.03,.4);
    glVertex2f(.32,.4);
    glVertex2f(.32,.2);
    glVertex2f(.03,.2);
    glEnd();


    glBegin(GL_QUADS); //front last quad
    glColor3ub(255,150,30);
    glVertex2f(.35,-.2);
    glVertex2f(.35,-.1);
    glVertex2f(.9,.1);
    glVertex2f(.96,-.2);
    glEnd();

     glBegin(GL_QUADS); //right yellow quad
    glColor3ub(255,220,0);
    glVertex2f(.35,.35);
    glVertex2f(.65,.35);
    glVertex2f(.65,-.1);
    glVertex2f(.35,-.1);
    glEnd();





    ///////////////////////// right yellow circle
    GLfloat x=.75f; GLfloat y=.125f; GLfloat radius =.225f;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,220,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

    ///////////////////////


    glBegin(GL_QUADS); //right red quad
    glColor3ub(255,0,0);
    glVertex2f(.65,.35);
    glVertex2f(.75,.35);
    glVertex2f(.75,-.1);
    glVertex2f(.65,-.1);
    glEnd();


    glBegin(GL_QUADS); // red quad
    glColor3ub(255,0,0);
    glVertex2f(.55,.45);
    glVertex2f(.65,.45);
    glVertex2f(.65,.35);
    glVertex2f(.55,.35);
    glEnd();


     glBegin(GL_QUADS); //right-top black quad
    glColor3ub(0,0,0);
    glVertex2f(.52,.55);
    glVertex2f(.68,.55);
    glVertex2f(.68,.45);
    glVertex2f(.52,.45);
    glEnd();






    //red down wheel
     x=.1f;   y=-.2f;   radius =.18f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
	// inner yellow wheel
   x=.1f;   y=-.2f;   radius =.13f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(229,150,65);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

    // inner red wheel
    x=.1f;   y=-.2f;   radius =.08f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,142,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();







   // front 1st wheel

      x=.5f;   y=-.2f;   radius =.12f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
	// inner yellow wheel
   x=.5f;   y=-.2f;   radius =.09f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(229,150,65);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

    // inner red wheel
    x=.5f;   y=-.2f;   radius =.06f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,142,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();





   // front last wheel

      x=.8f;   y=-.2f;   radius =.12f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
	// inner yellow wheel
   x=.8f;   y=-.2f;   radius =.09f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(229,150,65);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

    // inner red wheel
    x=.8f;   y=-.2f;   radius =.06f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,142,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

// back part ------------------------



    glBegin(GL_QUADS); //middle black connection quad
    glColor3ub(0,0,0);
    glVertex2f(-.85,-.18);
    glVertex2f(-.05,-.18);
    glVertex2f(-.05,-.25);
    glVertex2f(-.85,-.25);
    glEnd();

     glBegin(GL_QUADS); //back green border bottom
    glColor3ub(0,141,0);
    glVertex2f(-.8,-.1);
    glVertex2f(-.15,-.1);
    glVertex2f(-.15,-.3);
    glVertex2f(-.8,-.3);
    glEnd();






    glBegin(GL_QUADS); //back yellow border
    glColor3ub(250,220,20);
    glVertex2f(-.78,-.1);
    glVertex2f(-.18,-.1);
    glVertex2f(-.18,.5);
    glVertex2f(-.78,.5);
    glEnd();

    glBegin(GL_QUADS); //back green border
    glColor3ub(0,141,0);
    glVertex2f(-.75,-.0);
    glVertex2f(-.2,-.0);
    glVertex2f(-.2,.05);
    glVertex2f(-.75,.05);
    glEnd();



     glBegin(GL_QUADS); //back white border
    glColor3ub(255,255,255);
    glVertex2f(-.75,.4);
    glVertex2f(-.6, .4);
    glVertex2f(-.6,.1);
    glVertex2f(-.75,.1);
    glEnd();


      glBegin(GL_QUADS); //back white border
    glColor3ub(255,255,255);
    glVertex2f(-.55,.4);
    glVertex2f(-.4, .4);
    glVertex2f(-.4,.1);
    glVertex2f(-.55,.1);
    glEnd();


     glBegin(GL_QUADS); //back white border
    glColor3ub(255,255,255);
    glVertex2f(-.35,.4);
    glVertex2f(-.2, .4);
    glVertex2f(-.2,.1);
    glVertex2f(-.35,.1);
    glEnd();


     glBegin(GL_QUADS); //back white border
      glColor3ub(255,0,0);
    glVertex2f(-.8,.5);
    glVertex2f(-.16, .5);
    glVertex2f(-.18,.55);
    glVertex2f(-.75,.55);
    glEnd();





// back last wheel

      x=-.65f;   y=-.2f;   radius =.12f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
	// inner yellow wheel
   x=-.65f;   y=-.2f;   radius =.09f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250,220,20);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

    // inner red wheel
    x=-.65f;   y=-.2f;   radius =.06f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,0,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();






   // back second wheel

      x=-.3f;   y=-.2f;   radius =.12f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
	// inner yellow wheel
   x=-.3f;   y=-.2f;   radius =.09f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250,220,20);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

    // inner red wheel
    x=-.3f;   y=-.2f;   radius =.06f;
	  triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,0,0);
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
    glutInitWindowSize(520, 520);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}




