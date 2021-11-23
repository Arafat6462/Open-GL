 #include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;
void dis();
void display();

void update(int value) {

    if(position <-1.5)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100,update,0);
}


void update1(int value) {

    if(position1 >1.0)
        position1 = -1.0f;

    position1 += speed;

	glutPostRedisplay();


	glutTimerFunc(100,update1,0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void disback(int val)
{
    //glutDisplayFunc(display);
}


void late_night()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
glTranslatef(0.0f,position, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glPopMatrix();
   //glutTimerFunc(1500,disback,0);
   glFlush();

}

void demo_late_night(int val) {

 glutDisplayFunc(late_night);


}



void night()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glPopMatrix();
   glutTimerFunc(1500,demo_late_night,0);
   glFlush();
}

void night_demo(int val) {

 glutDisplayFunc(night);


}
void day() {
   glClear(GL_COLOR_BUFFER_BIT);


glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,-0.2f);
   glVertex2f(0.5f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();

glPopMatrix();

glutTimerFunc(1500,night_demo,0);
glFlush();

}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(day);
   init();

   glutTimerFunc(100, update, 0);
     glutTimerFunc(100, update1, 0);
   glutMainLoop();
   return 0;
}

