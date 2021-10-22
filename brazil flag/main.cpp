 #include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
#include<GL/glu.h>

# define PI           3.14159265358979323846


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	////////////////////outer Quads
    glBegin(GL_QUADS);
    glColor3ub(0,156,55);
    glVertex2f(-.8,.6);
    glVertex2f(.8,.6);
    glVertex2f(.8,-.6);
    glVertex2f(-.8,-.6);
    glEnd();


    // inner yellow quads
    glBegin(GL_QUADS);
    glColor3ub(254,224,0);
    glVertex2f(0,.5);
    glVertex2f(.6,0);
    glVertex2f(0,-.5);
    glVertex2f(-.6,0);
    glEnd();




    // stand
    glBegin(GL_QUADS);
    glColor3ub(107,135,144);
    glVertex2f(-.9,.6);
    glVertex2f(-.8,.6);
    glVertex2f(-.8,-1);
    glVertex2f(-.9,-1);
    glEnd();

    // Nick name for "NIPU"
    // N
    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.5,-.7);
    glVertex2f(-.5,-0.95);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.5,-.7);
    glVertex2f(-.3,-0.95);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.3,-.7);
    glVertex2f(-.3,-.95);
    glEnd();

    // I
    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.1,-.7);
    glVertex2f(-.1,-0.95);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.2,-.7);
    glVertex2f(0,-0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(-.2,-.95);
    glVertex2f(0,-0.95);
    glEnd();

    //P
     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.1,-.95);
    glVertex2f(.1,-0.7);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.1,-.7);
    glVertex2f(.3,-0.7);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-0.83);
    glEnd();

        glBegin(GL_LINES);
    glColor3ub(0,.1,.6);
    glVertex2f(.3,-.83);
    glVertex2f(.1,-0.83);
    glEnd();

    //U



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
    glVertex2f(.6,-0.7);
    glEnd();




	/////////////////// inner circle /////////////////

	GLfloat x=-.0f; GLfloat y=.0f; GLfloat radius =.3f;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,34,119);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();



    // inner circle Bezier Curves line.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

    GLfloat x1[4],y1[4],y2[4]; // four point of x and y value.
    GLdouble xt[200],y1t[200],y2t[200],t;
    int i,c;

   // distance between two line
    x1[0] = -.300; x1[1] = -.1500; x1[2] = .1500;  x1[3] = .3;
    y1[0] = .0; y1[1] = .080; y1[2] = .050;  y1[3] = .00;
    y2[0] = -.030; y2[1] = .050; y2[2] = .020;  y2[3] = -.030;

    //  Bezier Curves equation.
    for(i=0,t=0,c=0;t<1;i++,t=t+0.02)
    {
       xt[i] = pow(1-t,3)*x1[0]+3*t*pow(1-t,2)*x1[1]+3*pow(t,2)*(1-t)*x1[2]+pow(t,3)*x1[3];
       y1t[i] = pow(1-t,3)*y1[0]+3*t*pow(1-t,2)*y1[1]+3*pow(t,2)*(1-t)*y1[2]+pow(t,3)*y1[3];
       y2t[i] = pow(1-t,3)*y2[0]+3*t*pow(1-t,2)*y2[1]+3*pow(t,2)*(1-t)*y2[2]+pow(t,3)*y2[3];
       c++;
    }

    // draw quad from Bezier Curves equation value
    glColor3f(1,1,1);
    glBegin(GL_QUAD_STRIP);
        for(i=0;i<c;i++)
        {
            glVertex2d(xt[i],y1t[i]);
            glVertex2d(xt[i],y2t[i]);
        }
    glEnd();
    // inner circle Bezier Curves line end.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(800, 500);   // Set the window's initial width & height
	glutCreateWindow("Brazil Flag"); // Create a window with the given title
 	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}




