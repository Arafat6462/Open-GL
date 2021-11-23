#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

GLfloat position = 0.0f;
GLfloat position_Yvalue = 0.0f;
GLfloat speed = 0.005f;

void update(int value) {

    if(position <-.90)
        position = .90f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(10, update, 0);
}





GLfloat position2 = 0.0f;
GLfloat speed2 = 0.003f;

void update2(int value) {

    if(position2 >.65)
        position2 = -.5f;

    position2 += speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(10, update2, 0);
}



void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}



/////////////////////////////////// -------------- mouse keyboard arrow
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed = 0.01f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed = 0.001f;
			}
	glutPostRedisplay();}







void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 0.003f;
    break;
glutPostRedisplay();
	}
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
position_Yvalue += 0.02f;
break;
case GLUT_KEY_DOWN:
position_Yvalue -= 0.02f;
break;
case GLUT_KEY_LEFT:
speed +=.002f;
break;
case GLUT_KEY_RIGHT:
speed -=0.002f;
break;}
glutPostRedisplay();}


///////////////////////////////////---------------mouse keyboard arrow end

/////////// night view start
 void night() {
    gluOrtho2D(-2,2,-2,2);
    // ..........
    //.......... all code is in range of -2 to 2.
    //.............
    //...........
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);



	glClearColor(0.20f, 0.20f, 0.20f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



	glBegin(GL_QUADS); // main building background sky
    glColor3ub(15,69,127);
    glVertex2f(-1,.35);
    glVertex2f(1,.35);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();


//////////////////////////////--------------  moving sun in main building

//glPushMatrix();
//glTranslatef(position2,position2,0);



	GLfloat  x=-.93f;  GLfloat y=.9f;  GLfloat radius =.05f;
	 int triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(183,185,184);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();






 //   glPopMatrix();


    //////////////////////////////-------------- moving sun in main building end






    // left walkway
    glBegin(GL_QUADS);
    glColor3ub(36,65,80);
    glVertex2f(-1,-1);
    glVertex2f(-.85,-1);
    glVertex2f(-.7,.1);
    glVertex2f(-.8,.1);
    glEnd();

     // right walkway
    glBegin(GL_QUADS);
    glColor3ub(36,65,80);
    glVertex2f(.85,-1);
    glVertex2f(1,-1);
    glVertex2f(.8,.1);
    glVertex2f(.7,.1);
    glEnd();







    glBegin(GL_QUADS); // ground and building road
    glColor3ub(84,100,92);
    glVertex2f(-.75,-.25);
    glVertex2f(.75,-.25);
    glVertex2f(.7,.1);
    glVertex2f(-.7,.1);
    glEnd();


    glBegin(GL_QUADS); // main building body
    glColor3ub(153,155,150);
    glVertex2f(-.85,.1);
    glVertex2f(.85,.1);
    glVertex2f(.85,.9);
    glVertex2f(-.85,.9);
    glEnd();

    glBegin(GL_QUADS); // main building 2nd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

    glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 2nd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();


    glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 3rd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

     glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 4th floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

     glLoadIdentity();


    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.5f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();




     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();




    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();
        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glLoadIdentity();


      glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(-1.7f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glLoadIdentity();




    glBegin(GL_QUADS); // main building main door
    glColor3ub(37,44,46);
    glVertex2f(-.15,.1);
    glVertex2f(.08,.1);
    glVertex2f(.08,.22);
    glVertex2f(-.15,.22);
     glEnd();




    // tree
    glLoadIdentity();
    glTranslatef(+0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();



    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();

    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();




    glLoadIdentity();



    glBegin(GL_LINES); // ground goal bar left
    glColor3ub(0,0,0);
    glVertex2f(-.65,.0);
    glVertex2f(-.66,-.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.65,.0);
    glVertex2f(-.64,-.05);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.66,-.1);
    glVertex2f(-.65,-.14);
     glEnd();

      glBegin(GL_LINES); // ground goal bar right
    glColor3ub(0,0,0);
    glVertex2f(.65,.0);
    glVertex2f(.66,-.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.65,.0);
    glVertex2f(.64,-.05);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.66,-.1);
    glVertex2f(.65,-.14);
     glEnd();


 gluOrtho2D(-1.4,1.4,-.8,.8); // to resize.

//////////////////////////////-------------- rotation
/////////////////// circle

	 x=.4f;   y=-.55f;   radius =.1f;
	  triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

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
    glTranslatef(.4,-.55,0);
    glRotatef(l,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(244,67,54);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.005f);
    glVertex2f( 0.08f, 0.01f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    l-=0.002f;


     glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.4,-.55,0);
    glRotatef(k,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
   glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.005f);
    glVertex2f( 0.08f, 0.01f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    k-=0.015f;


    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.4,-.55,0);
    glRotatef(j,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(174,190,196);
    glVertex2f(0.0f, 0.0f);
   glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.01f);
    glVertex2f( 0.08f, 0.02f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    j-=0.1f;

/////////////////////////////--------------- rotation end

















//////////////////////////////-------------- moving ball in ground
/////////////////// circle







glPushMatrix();
glTranslatef(position,position_Yvalue,0);



	  x=.0f;   y=-.05f;   radius =.02f;
	  triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.02,-.05);
    glVertex2f(.02,-.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.0,-.07);
    glVertex2f(.0,-.03);
    glEnd();



    glPopMatrix();


    //////////////////////////////-------------- moving ball in ground end




	glFlush();  // Render now
}

void night_demo(int val) {
 glutDisplayFunc(night);
}
/////////// night view end


/////////// DAy view start
 void day() {
    gluOrtho2D(-2,2,-2,2);
    // ..........
    //.......... all code is in range of -2 to 2.
    //.............
    //...........
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);



	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



	glBegin(GL_QUADS); // main building background sky
    glColor3ub(188,218,230);
    glVertex2f(-1,.35);
    glVertex2f(1,.35);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();


//////////////////////////////--------------  moving sun in main building

//glPushMatrix();
//glTranslatef(position2,position2,0);



	GLfloat  x=-.9f;  GLfloat y=.8f;  GLfloat radius =.05f;
	 int triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();






  //  glPopMatrix();


    //////////////////////////////-------------- moving sun in main building end






    // left walkway
    glBegin(GL_QUADS);
    glColor3ub(96,125,140);
    glVertex2f(-1,-1);
    glVertex2f(-.85,-1);
    glVertex2f(-.7,.1);
    glVertex2f(-.8,.1);
    glEnd();

     // right walkway
    glBegin(GL_QUADS);
    glColor3ub(96,125,140);
    glVertex2f(.85,-1);
    glVertex2f(1,-1);
    glVertex2f(.8,.1);
    glVertex2f(.7,.1);
    glEnd();







    glBegin(GL_QUADS); // ground and building road
    glColor3ub(165,185,175);
    glVertex2f(-.75,-.25);
    glVertex2f(.75,-.25);
    glVertex2f(.7,.1);
    glVertex2f(-.7,.1);
    glEnd();


    glBegin(GL_QUADS); // main building body
    glColor3ub(153,155,150);
    glVertex2f(-.85,.1);
    glVertex2f(.85,.1);
    glVertex2f(.85,.9);
    glVertex2f(-.85,.9);
    glEnd();

    glBegin(GL_QUADS); // main building 2nd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

    glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 2nd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();


    glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 3rd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

     glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 4th floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

     glLoadIdentity();


    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.5f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();




     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();




    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();
        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glLoadIdentity();


      glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(-1.7f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glLoadIdentity();




    glBegin(GL_QUADS); // main building main door
    glColor3ub(37,44,46);
    glVertex2f(-.15,.1);
    glVertex2f(.08,.1);
    glVertex2f(.08,.22);
    glVertex2f(-.15,.22);
     glEnd();




    // tree
    glLoadIdentity();
    glTranslatef(+0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();



    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();

    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();




    glLoadIdentity();



    glBegin(GL_LINES); // ground goal bar left
    glColor3ub(0,0,0);
    glVertex2f(-.65,.0);
    glVertex2f(-.66,-.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.65,.0);
    glVertex2f(-.64,-.05);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.66,-.1);
    glVertex2f(-.65,-.14);
     glEnd();

      glBegin(GL_LINES); // ground goal bar right
    glColor3ub(0,0,0);
    glVertex2f(.65,.0);
    glVertex2f(.66,-.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.65,.0);
    glVertex2f(.64,-.05);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.66,-.1);
    glVertex2f(.65,-.14);
     glEnd();


 gluOrtho2D(-1.4,1.4,-.8,.8); // to resize.

//////////////////////////////-------------- rotation
/////////////////// circle

	 x=.4f;   y=-.55f;   radius =.1f;
	  triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

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
    glTranslatef(.4,-.55,0);
    glRotatef(l,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(244,67,54);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.005f);
    glVertex2f( 0.08f, 0.01f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    l-=0.002f;


     glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.4,-.55,0);
    glRotatef(k,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
   glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.005f);
    glVertex2f( 0.08f, 0.01f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    k-=0.015f;


    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.4,-.55,0);
    glRotatef(j,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(174,190,196);
    glVertex2f(0.0f, 0.0f);
   glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.01f);
    glVertex2f( 0.08f, 0.02f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    j-=0.1f;

/////////////////////////////--------------- rotation end

















//////////////////////////////-------------- moving ball in ground
/////////////////// circle







glPushMatrix();
glTranslatef(position,position_Yvalue,0);



	  x=.0f;   y=-.05f;   radius =.02f;
	  triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.02,-.05);
    glVertex2f(.02,-.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.0,-.07);
    glVertex2f(.0,-.03);
    glEnd();



    glPopMatrix();


    //////////////////////////////-------------- moving ball in ground end


     glutTimerFunc(3500,night_demo,0); // change view

	glFlush();  // Render now
}

void day_demo(int val) {
 glutDisplayFunc(day);
}
/////////// day view end

void Morning() {
    gluOrtho2D(-2,2,-2,2);
    // ..........
    //.......... all code is in range of -2 to 2.
    //.............
    //...........
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);



	glClearColor(.80f, .80f, .80f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



	glBegin(GL_QUADS); // main building background sky
    glColor3ub(123,204,245);
    glVertex2f(-1,.35);
    glVertex2f(1,.35);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();


//////////////////////////////--------------  moving sun in main building

glPushMatrix();
glTranslatef(position2,position2,0);



	GLfloat  x=-.99f;  GLfloat y=.4f;  GLfloat radius =.05f;
	 int triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,172,64);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();






    glPopMatrix();


    //////////////////////////////-------------- moving sun in main building end






    // left walkway
    glBegin(GL_QUADS);
    glColor3ub(66,95,110);
    glVertex2f(-1,-1);
    glVertex2f(-.85,-1);
    glVertex2f(-.7,.1);
    glVertex2f(-.8,.1);
    glEnd();

     // right walkway
    glBegin(GL_QUADS);
    glColor3ub(66,95,110);
    glVertex2f(.85,-1);
    glVertex2f(1,-1);
    glVertex2f(.8,.1);
    glVertex2f(.7,.1);
    glEnd();







    glBegin(GL_QUADS); // ground and building road
    glColor3ub(125,165,155);
    glVertex2f(-.75,-.25);
    glVertex2f(.75,-.25);
    glVertex2f(.7,.1);
    glVertex2f(-.7,.1);
    glEnd();


    glBegin(GL_QUADS); // main building body
    glColor3ub(153,155,150);
    glVertex2f(-.85,.1);
    glVertex2f(.85,.1);
    glVertex2f(.85,.9);
    glVertex2f(-.85,.9);
    glEnd();

    glBegin(GL_QUADS); // main building 2nd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

    glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 2nd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();


    glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 3rd floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

     glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building 4th floor
    glColor3ub(106,112,109);
    glVertex2f(-.85,.22);
    glVertex2f(.85,.22);
    glVertex2f(.85,.3);
    glVertex2f(-.85,.3);
    glEnd();

     glLoadIdentity();


    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.5f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();




     glTranslatef(+0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 1st floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(+0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

    glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 2nd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();




    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();
        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

        glTranslatef(0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 3rd floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();

     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


     glTranslatef(-0.25f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // main building window 4th floor
    glColor3ub(77,80,78);
    glVertex2f(-.8,.11);
    glVertex2f(-.75,.11);
    glVertex2f(-.75,.2);
    glVertex2f(-.8,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.17);
    glVertex2f(-.75,.17);
    glVertex2f(-.75,.175);
    glVertex2f(-.8,.175);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.8,.14);
    glVertex2f(-.75,.14);
    glVertex2f(-.75,.145);
    glVertex2f(-.8,.145);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(-.773,.11);
    glVertex2f(-.777,.11);
    glVertex2f(-.777,.2);
    glVertex2f(-.773,.2);
    glEnd();


    glLoadIdentity();


      glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(0.25f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glTranslatef(-1.7f, 0.0f, 0.0f);
     glBegin(GL_QUADS); // main building column
    glColor3ub(106,115,109);
    glVertex2f(-.65,.1);
    glVertex2f(-.67,.1);
    glVertex2f(-.67,.9);
    glVertex2f(-.65,.9);
     glEnd();

      glLoadIdentity();




    glBegin(GL_QUADS); // main building main door
    glColor3ub(37,44,46);
    glVertex2f(-.15,.1);
    glVertex2f(.08,.1);
    glVertex2f(.08,.22);
    glVertex2f(-.15,.22);
     glEnd();




    // tree
    glLoadIdentity();
    glTranslatef(+0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();



    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();

    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();


    glTranslatef(+0.1f, 0.0f, 0.0f);// tree
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.695,-.16);
    glVertex2f(-.72,-.21);
    glVertex2f(-.67,-.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.695,-.14);
    glVertex2f(-.72,-.19);
    glVertex2f(-.67,-.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.69,-.21);
    glVertex2f(-.7,-.21);
    glVertex2f(-.7,-.25);
    glVertex2f(-.69,-.25);
    glEnd();




    glLoadIdentity();



    glBegin(GL_LINES); // ground goal bar left
    glColor3ub(0,0,0);
    glVertex2f(-.65,.0);
    glVertex2f(-.66,-.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.65,.0);
    glVertex2f(-.64,-.05);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.66,-.1);
    glVertex2f(-.65,-.14);
     glEnd();

      glBegin(GL_LINES); // ground goal bar right
    glColor3ub(0,0,0);
    glVertex2f(.65,.0);
    glVertex2f(.66,-.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.65,.0);
    glVertex2f(.64,-.05);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.66,-.1);
    glVertex2f(.65,-.14);
     glEnd();


 gluOrtho2D(-1.4,1.4,-.8,.8); // to resize.

//////////////////////////////-------------- rotation
/////////////////// circle

	 x=.4f;   y=-.55f;   radius =.1f;
	  triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

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
    glTranslatef(.4,-.55,0);
    glRotatef(l,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(244,67,54);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.005f);
    glVertex2f( 0.08f, 0.01f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    l-=0.002f;


     glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.4,-.55,0);
    glRotatef(k,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
   glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.005f);
    glVertex2f( 0.08f, 0.01f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    k-=0.015f;


    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.4,-.55,0);
    glRotatef(j,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_POLYGON);
    glColor3ub(174,190,196);
    glVertex2f(0.0f, 0.0f);
   glVertex2f( 0.08f, 0.0f);
    glVertex2f( 0.09f, 0.01f);
    glVertex2f( 0.08f, 0.02f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    glPopMatrix();
    j-=0.1f;

/////////////////////////////--------------- rotation end

















//////////////////////////////-------------- moving ball in ground
/////////////////// circle







glPushMatrix();
glTranslatef(position,position_Yvalue,0);



	  x=.0f;   y=-.05f;   radius =.02f;
	  triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.02,-.05);
    glVertex2f(.02,-.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.0,-.07);
    glVertex2f(.0,-.03);
    glEnd();



    glPopMatrix();


    //////////////////////////////-------------- moving ball in ground end


    glutTimerFunc(3500,day_demo,0);

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(1400, 800);   // Set the window's initial width & height
    glutIdleFunc(Idle);
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(Morning); // Register display callback handler for window re-paint


   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutSpecialFunc(SpecialInput);


	  glutTimerFunc(100, update, 0);
	  glutTimerFunc(100, update2, 0);

	glutMainLoop();           // Enter the event-processing loop
	return 0;
}




