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
    glVertex2f(-.8,-.3);
    glVertex2f(.8,-.3);
    glVertex2f(.8,.9);
    glVertex2f(-.8,.9);
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

      // parking window 1
     glBegin(GL_QUADS);
    glColor3ub(105,140,160);
    glVertex2f(.81,-.18);
    glVertex2f(.88,-.18);
    glVertex2f(.88,-.12);
    glVertex2f(.81,-.12);
    glEnd();

     // parking window 2
     glBegin(GL_QUADS);
    glColor3ub(105,140,160);
    glVertex2f(.9,-.18);
    glVertex2f(.97,-.18);
    glVertex2f(.97,-.12);
    glVertex2f(.9,-.12);
    glEnd();

    // parking gate
     glBegin(GL_QUADS);
    glColor3ub(37,44,46);
    glVertex2f(.84,-.3);
    glVertex2f(.97,-.3);
    glVertex2f(.97,-.22);
    glVertex2f(.84,-.22);
    glEnd();

     glBegin(GL_QUADS); // main body left side
    glColor3ub(75,113,155);
    glVertex2f(-.9,-.3);
    glVertex2f(-.8,-.3);
    glVertex2f(-.8,.9);
    glVertex2f(-.9,.88);
    glEnd();
     glBegin(GL_QUADS); // main body left side top
    glColor3ub(160,160,160);
    glVertex2f(-.9,.86);
    glVertex2f(-.8,.88);
    glVertex2f(-.8,.9);
    glVertex2f(-.9,.88);
    glEnd();

     glBegin(GL_QUADS); // main body left-middle side 3 divider
    glColor3ub(140,140,140);
    glVertex2f(-.8,.5);
    glVertex2f(-.71,.5);
    glVertex2f(-.71,.9);
    glVertex2f(-.8,.9);
    glEnd();
    glBegin(GL_QUADS); // main body left-middle side 3 divider line
    glColor3ub(160,160,160);
    glVertex2f(-.8,.5);
    glVertex2f(.8,.5);
    glVertex2f(.8,.55);
    glVertex2f(-.8,.55);
    glEnd();

     glBegin(GL_QUADS); // main body left-middle side 3 divider
    glColor3ub(140,140,140);
    glVertex2f(-.8,.1);
    glVertex2f(-.74,.1);
    glVertex2f(-.74,.5);
    glVertex2f(-.8,.5);
    glEnd();
    glBegin(GL_QUADS); // main body left-middle side 3 divider line
    glColor3ub(160,160,160);
    glVertex2f(-.8,.1);
    glVertex2f(.8,.1);
    glVertex2f(.8,.15);
    glVertex2f(-.8,.15);
    glEnd();

     glBegin(GL_QUADS); // main body left-middle side 3 divider
    glColor3ub(140,140,140);
    glVertex2f(-.8,.1);
    glVertex2f(-.77,.1);
    glVertex2f(-.77,-.3);
    glVertex2f(-.8,-.3);
    glEnd();

     glBegin(GL_QUADS); // main body 1st floor.
    glColor3ub(160,160,160);
    glVertex2f(-.77,-.2);
    glVertex2f(.8,-.2);
    glVertex2f(.8,-.22);
    glVertex2f(-.77,-.22);
    glEnd();
    glBegin(GL_QUADS); // main body 2nd floor.
    glColor3ub(160,160,160);
    glVertex2f(-.77,-.1);
    glVertex2f(.8,-.1);
    glVertex2f(.8,-.12);
    glVertex2f(-.77,-.12);
    glEnd();
     glBegin(GL_QUADS); // main body 3rd floor.
    glColor3ub(160,160,160);
    glVertex2f(-.77,-.0);
    glVertex2f(.8,-.0);
    glVertex2f(.8,-.02);
    glVertex2f(-.77,-.02);
    glEnd();


    glBegin(GL_QUADS); // main body 4th floor.
    glColor3ub(160,160,160);
    glVertex2f(-.74,.27);
    glVertex2f(.8,.27);
    glVertex2f(.8,.29);
    glVertex2f(-.74,.29);
    glEnd();
     glBegin(GL_QUADS); // main body 5th floor.
    glColor3ub(160,160,160);
    glVertex2f(-.74,.37);
    glVertex2f(.8,.37);
    glVertex2f(.8,.39);
    glVertex2f(-.74,.39);
    glEnd();

    glBegin(GL_QUADS); // main body 6th floor.
    glColor3ub(160,160,160);
    glVertex2f(-.71,.66);
    glVertex2f(.8,.66);
    glVertex2f(.8,.68);
    glVertex2f(-.71,.68);
    glEnd();
    glBegin(GL_QUADS); // main body 7th floor.
    glColor3ub(160,160,160);
    glVertex2f(-.71,.76);
    glVertex2f(.8,.76);
    glVertex2f(.8,.78);
    glVertex2f(-.71,.78);
    glEnd();

    glBegin(GL_QUADS); // main body top floor.
    glColor3ub(160,160,160);
    glVertex2f(-.71,.86);
    glVertex2f(.8,.86);
    glVertex2f(.8,.9);
    glVertex2f(-.71,.9);
    glEnd();




    //tree 3rd floor
   // glLoadIdentity();
   // glTranslatef(+0.0f, 0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();

    //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();

      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


      //tree 3rd floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.18);
    glVertex2f(-.62,.18);
    glVertex2f(-.645,.22);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.2);
    glVertex2f(-.62,.2);
    glVertex2f(-.645,.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.15);
    glVertex2f(-.64,.15);
    glVertex2f(-.64,.18);
    glVertex2f(-.65,.18);
    glEnd();


    glLoadIdentity();





     //tree 6th floor
    //glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();

    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();

    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();
    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();
    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();

    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();

    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();

    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();

    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();



    //tree 6th floor
    glTranslatef(+0.15f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(12,157,91);
    glVertex2f(-.67,.58);
    glVertex2f(-.62,.58);
    glVertex2f(-.645,.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(12,174,91);
    glVertex2f(-.67,.6);
    glVertex2f(-.62,.6);
    glVertex2f(-.645,.64);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138,152,89);
    glVertex2f(-.65,.55);
    glVertex2f(-.64,.55);
    glVertex2f(-.64,.58);
    glVertex2f(-.65,.58);
    glEnd();


    glLoadIdentity();









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




