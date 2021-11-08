#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)





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




//////////////////////////////-------------- rotation
/////////////////// circle

	GLfloat x=.4f; GLfloat y=-.55f; GLfloat radius =.1f;
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





	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(1400, 800);   // Set the window's initial width & height
    glutIdleFunc(Idle);
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}




