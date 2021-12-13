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


	glutTimerFunc(100, update2, 0);
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

void Morning() {

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




