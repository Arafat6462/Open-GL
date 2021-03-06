#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
GLfloat sunx = 0.0f;
GLfloat suny = 0.0f;
GLfloat suny_Day = 0.0f;
GLfloat carx = 0.0f;
GLfloat speed = 5.0f;
GLfloat planex = .0f;
GLfloat carspeed = 8.0f;
GLfloat cloudx = 0.0f;



void update(int value) {

    if(sunx >1920)
    {
        sunx = 0.0f;
        suny = 0.0f;
        suny_Day = 0.0f;
    }

    if(carx <-400)
        carx = 1600;

    if(planex < 0)
        planex = 1600;
    if(cloudx <-300)
        cloudx = 1100;

    sunx += speed; //position=position+speed;
    suny +=speed/4; // sun go down
    suny_Day -=speed/6; //sun go up
    carx -=carspeed;
	planex -= 10;
	cloudx -= 7;

    glutPostRedisplay();



	glutTimerFunc(100, update, 0);
}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'f':
    carspeed = 35.0f;
    break;
case 'm':
    carspeed = 15.0f;
    break;
case 's':
    carspeed = 6.0f;
    break;

glutPostRedisplay();
	}
}


void drawQuads(GLfloat x, GLfloat y, GLfloat height,GLfloat width);
void drawSquare(GLfloat x, GLfloat y, GLfloat height);
void borderQuads(GLfloat x, GLfloat y ,GLfloat height,GLfloat width);
void QuadSTRIP(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f,GLfloat g, GLfloat h);
void borderQuadSTRIP(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f,GLfloat g, GLfloat h);
void Triangle(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f);
void BorderTriangle(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f);
void circle(GLfloat x, GLfloat y,GLfloat radius);
void myDisplay_demo(int val);



void background(int a,int b,int c, int d){
	glBegin(GL_QUADS);
	glColor3ub(214, 107, 75);
	glVertex2i(0, 0);
	glColor3ub(214, 107, 75);
	glVertex2i(1920, 0);
	glColor3ub(138, 74, 75);
	glVertex2i(1920, 837);
	glColor3ub(138, 74, 75);
	glVertex2i(0, 837);
	glColor3ub(0,128,0);//field

	glEnd();

	drawQuads(0,650,187,1920);

}
void building(){
    glColor3ub(196, 187, 171);
    drawQuads(443,456,132,61);
    borderQuads(443,456,132,61);
    glColor3ub(196, 187, 171);
    QuadSTRIP(912,368,907,397,996,368,1008,400);
    borderQuadSTRIP(912,368,907,397,996,368,1008,400);
    glColor3ub(171, 164, 152);//LIGHTDARK
    QuadSTRIP(1102,388,1102,428,1135,382,1135,424);
    borderQuadSTRIP(1102,388,1102,428,1135,382,1135,424);

    glColor3ub(196, 187, 171);
    QuadSTRIP(1135,382,1135,424,1160,398,1160,422);
    borderQuadSTRIP(1135,382,1135,424,1160,398,1160,422);

    glColor3ub(171, 164, 152);//LIGHTDARK
    QuadSTRIP(798,388,798,425,772,380,772,421);
    borderQuadSTRIP(798,388,798,425,772,380,772,421);
    glColor3ub(196, 187, 171);
    QuadSTRIP(772,380,772,421,749,393,749,418);
    borderQuadSTRIP(772,380,772,421,749,393,749,418);

    glColor3ub(196, 187, 171);
    drawQuads(920,397,38,60);
    borderQuads(920,397,38,60);

    glColor3ub(196, 187, 171);
    drawQuads(798,388,235,122);
    borderQuads(798,388,235,122);



    glColor3ub(0,0,0);
    drawQuads(920,394,3,61);
    borderQuads(920,394,3,61);

    glColor3ub(196, 187, 171);
    drawQuads(980,388,235,122);
    borderQuads(980,388,235,122);

    glColor3ub(1, 1, 1);
    drawQuads(920,435,179,60);

    glColor3ub(120, 56, 58);//red
    drawSquare(987,643,10);
    borderQuads(987,643,10,10);

    glColor3ub(120, 56, 58);//red
    drawSquare(891,643,10);
    borderQuads(891,643,10,10);

    glColor3ub(255, 255, 255);
    drawQuads(891,614,29,10);
    borderQuads(891,614,29,10);

    glColor3ub(255, 255, 255);
    drawQuads(987,614,29,10);
    borderQuads(987,614,29,10);

    glColor3ub(120, 56, 58);
    drawQuads(901,614,39,85);
    borderQuads(901,614,39,85);

    glColor3ub(219, 217, 217);
    drawQuads(943,506,108,3);
    borderQuads(943,506,108,3);

    glColor3ub(11, 97, 24);
    drawQuads(943,509,22,32);
    borderQuads(943,509,22,32);


    //circle
    glColor3ub(196, 187, 171);
    QuadSTRIP(1315,437,1319,600,1397,451,1403,596);
    borderQuadSTRIP(1315,437,1319,600,1397,451,1403,596);
    glColor3ub(196, 187, 171);
    QuadSTRIP(1397,461,1319,621,1475,466,1486,665);
    borderQuadSTRIP(1397,461,1403,621,1475,466,1486,665);

    glColor3ub(120, 56, 58);//red
    QuadSTRIP(1334,600,1235,620,1466,600,1466,661);
    borderQuadSTRIP(1334,600,1235,620,1466,600,1466,661);

    glColor3ub(120, 56, 58);//red
    QuadSTRIP(614,598,699,620,443,598,443,654);
    borderQuadSTRIP(614,598,699,620,443,598,443,654);
    glColor3ub(120, 56, 58);//red
    QuadSTRIP(443,590,443,598,500,590,577,597);
    glColor3ub(0,0,0);
    circle(945,663,20);

    glColor3ub(0,0,0);
    QuadSTRIP(1400,561,1402,598,1419,543,1419,598);
    borderQuadSTRIP(1400,561,1402,598,1419,543,1419,598);

    glColor3ub(0,0,0);
    Triangle(1419,543,1419,598,1465,598);
    BorderTriangle(549,490,534,563,563,563);







    int j =0;
    int x=0;
    for(int i = 312;i<=459;i+=13){

        if (j<=30){
            glColor3ub(235, 233, 230);
            drawQuads(997,620+j,3,i);
            borderQuads(997,620+j,3,i);
            j+=3;
        }
    }
    j =0;
    for(int i = 312;i<=459;i+=13){

        if (j<=30){
            glColor3ub(235, 233, 230);
            drawQuads(580-x,620+j,3,312+x);
            borderQuads(580-x,620+j,3,312+x);
            j+=3;
            x+=13;
        }
    }
    j =0;
    x=0;
    for (int i =0;i<=11;i++){
        glColor3ub(235, 233, 230);
        drawQuads(437-x,653+j,3,999+2*x);
        borderQuads(437-x,653+j,3,999+2*x);
        j+=3;
        x+=13;
    }
    glColor3ub(196, 187, 171);
    QuadSTRIP(505, 445,499, 589,587, 434,579, 597);
    borderQuadSTRIP(505, 445,499, 589,587, 434,579, 597);
    glColor3ub(110, 109, 109);//Dark
    QuadSTRIP(588,434,579,596,597,433,590,599);
    borderQuadSTRIP(588,434,579,596,597,433,590,599);
    glColor3ub(196, 187, 171);
    QuadSTRIP(597,429,590,597,693,412,681,597);
    borderQuadSTRIP(597,429,590,597,693,412,681,597);
    glColor3ub(196, 187, 171);
    QuadSTRIP(693,413,680,596,798,425,798,618);
    borderQuadSTRIP(693,413,680,596,798,425,798,618);
    glColor3ub(196, 187, 171);
    QuadSTRIP(1104,429,1102,620,1206,416,1212,601);
    borderQuadSTRIP(1104,429,1102,620,1206,416,1212,601);
    glColor3ub(196, 187, 171);
    QuadSTRIP(1206,416,1212,601,1305,434,1309,602);
    borderQuadSTRIP(1206,416,1212,601,1305,434,1309,602);
    glColor3ub(110, 109, 109);//Dark
    QuadSTRIP(1305,438,1309,602,1315,437,1319,600);
    borderQuadSTRIP(1305,438,1309,602,1315,437,1319,600);

    glColor3ub(255, 255, 255);
    QuadSTRIP(1103,620,1199,600,1120,620,1219,600);
    borderQuadSTRIP(1103,620,1199,600,1120,620,1219,600);
    glColor3ub(120, 56, 58);//red
    QuadSTRIP(1120,620,1219,600,1211,620,1310,600);
    borderQuadSTRIP(1120,620,1219,600,1211,620,1310,600);
    glColor3ub(255, 255, 255);
    QuadSTRIP(1211,620,1310,600,1235,620,1334,600);
    borderQuadSTRIP(1211,620,1310,600,1235,620,1334,600);
    glColor3ub(0,0,0);
    drawQuads(1221,576,23,35);
    borderQuads(1221,576,23,35);
    glColor3ub(0,0,0);
    drawQuads(1334,588,12,30);
    borderQuads(1334,588,12,30);

    glColor3ub(255, 255, 255);
    QuadSTRIP(680,597,797,620,698,597,812,620);
    borderQuadSTRIP(680,597,797,620,698,597,812,620);
    glColor3ub(120, 56, 58);//red
    QuadSTRIP(590,597,701,620,677,597,788,620);
    borderQuadSTRIP(590,597,701,620,677,597,788,620);
    glColor3ub(255, 255, 255);
    QuadSTRIP(614,597,699,620,592,596,679,620);
    borderQuadSTRIP(614,597,699,620,592,596,679,620);
    glColor3ub(196, 187, 171);
    QuadSTRIP(826,370,826,388,912,362,912,388);
    borderQuadSTRIP(826,370,826,388,912,362,912,388);
    glColor3ub(196, 187, 171);
    QuadSTRIP(998,362,998,388,1080,370,1080,388);
    borderQuadSTRIP(998,362,998,388,1080,370,1080,388);
    glColor3ub(0,0,0);
    Triangle(1223,560,1254,560,1236,459);
    BorderTriangle(1223,560,1254,560,1236,459);
    glColor3ub(0,0,0);
    Triangle(1349,472,1337,568,1362,568);
    BorderTriangle(1349,472,1337,568,1362,568);

    glColor3ub(0,0,0);
    Triangle(1349,472,1337,568,1362,568);
    BorderTriangle(1349,472,1337,568,1362,568);
    glColor3ub(0,0,0);
    drawQuads(641,575,20,28);
    borderQuads(641,575,20,28);
    glColor3ub(0,0,0);
    QuadSTRIP(537,575,537,597,561,575,561,593);
    borderQuadSTRIP(537,575,537,592,561,575,561,593);

     glColor3ub(0,0,0);
    Triangle(656,483,671,560,639,560);
    BorderTriangle(656,483,671,560,639,560);

    glColor3ub(0,0,0);
    Triangle(549,490,534,563,563,563);
    BorderTriangle(549,490,534,563,563,563);
    glColor3ub(0,0,0);
    circle(1163,532,21);
    glColor3ub(0,0,0);
    circle(732,522,21);

    glColor3ub(0,0,0);
    drawQuads(1289,261,168,3);
    borderQuads(1289,261,168,2);

    glColor3ub(0,0,0);
    drawQuads(712,174,240,3);
    borderQuads(712,174,240,2);

    glColor3ub(0,0,0);
    drawQuads(946,295,72,2);
    borderQuads(946,295,72,1);

    glColor3ub(0,0,0);
    drawQuads(991,295,72,2);
    borderQuads(991,295,72,1);

    glColor3ub(191, 13, 13);
    circle(959,519,5);


//191, 13, 13


}
void trees(){
     glColor3ub(156, 92, 25);
    drawQuads(364,530,120,5);
    borderQuads(364,530,120,5);


}
void footpath(){
	int flag=0;
	glColor3ub(57, 48, 39);//road footpath
	drawQuads(0, 837, 40, 1920);
	for(int i=0;i<1920;i+=40){
		if(flag==0){
			glColor3ub(68, 47, 46);
			drawQuads(i, 877, 3, 80);

			glColor3ub(47, 24, 8);
			drawQuads(i, 880, 20, 80);
			glColor3ub(139,69,19);//line for footpath
			drawQuads(i,787,50,5);


			flag=1;
		}
		else{
			glColor3ub(110, 95, 88);
			drawQuads(i, 877, 3, 80);
			glColor3ub(83, 68, 61);
			drawQuads(i, 880, 20, 80);

			flag=0;
		}
	}
	glColor3ub(107, 89, 89);//road
	drawQuads(0, 900, 180, 1920);
}




void sun(){


    glPushMatrix();
    glTranslatef(sunx,suny,0);



	GLfloat  x=400;  GLfloat y=200;  GLfloat radius =70.0f;
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


}
void car(){

     glPushMatrix();
     glTranslatef(carx,0,0);

     glColor3ub(180,80,35); // body down part
     drawQuads(250,950,20,150);

    glBegin(GL_QUADS); // body up part
    glColor3ub(180,80,35);
    glVertex2f(250,950);
    glVertex2f(300,930);
    glVertex2f(380,930);
    glVertex2f(400,950);
    glEnd();

    glColor3ub(220,160,100); // window
    drawQuads(310,930,25,40);

    glColor3ub(40,50,70); //wheel
    circle(280,970, 15);
    circle(380,970, 15);


    glPopMatrix();

}
void car2(){

     glPushMatrix();
     glTranslatef(carx,0,0);

     glColor3ub(50,70,75); // body down part
     drawQuads(850,950,40,200);

    glBegin(GL_QUADS); // body up part
    glColor3ub(50,70,75);
    glVertex2f(850,950);
    glVertex2f(900,920);
    glVertex2f(1030,920);
    glVertex2f(1050,950);
    glEnd();

    glColor3ub(122,122,122); // window
    drawQuads(910,930,25,40);
    drawQuads(980,930,25,40);

    glColor3ub(40,50,70); //wheel
    circle(880,980, 15);
    circle(1020,980, 15);


    glPopMatrix();

}


///////////////////////////////////// Day view ////////////////////////////////////////////////////
void background_Day(int a,int b,int c, int d){
	glBegin(GL_QUADS);
	glColor3ub(175, 207, 205);
	glVertex2i(0, 0);
	glColor3ub(175, 207, 205);
	glVertex2i(1920, 0);
	glColor3ub(175, 207, 205);
	glVertex2i(1920, 837);
	glColor3ub(138, 200, 75);
	glVertex2i(0, 837);
	glColor3ub(0,128,0);//field

	glEnd();

	drawQuads(0,650,187,1920);

}
void footpath_Day(){
	int flag=0;
	glColor3ub(180, 180, 180);//road footpath
	drawQuads(0, 837, 40, 1920);
	for(int i=0;i<1920;i+=40){
		if(flag==0){
			glColor3ub(68, 47, 46);
			drawQuads(i, 877, 3, 80);

			glColor3ub(255, 24, 8);
			drawQuads(i, 880, 20, 80);
			glColor3ub(0,69,19);//line for footpath
			drawQuads(i,787,50,5);


			flag=1;
		}
		else{
			glColor3ub(110, 95, 88);
			drawQuads(i, 877, 3, 80);
			glColor3ub(253, 255, 255);
			drawQuads(i, 880, 20, 80);

			flag=0;
		}
	}
	glColor3ub(75, 80, 80);//road
	drawQuads(0, 900, 180, 1920);
}

void sun_Day(){


    glPushMatrix();
    glTranslatef(sunx,suny_Day,0);



	GLfloat  x=400;  GLfloat y=200;  GLfloat radius =70.0f;
	 int triangleAmount = 150; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(240,230,170);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

		glPopMatrix();


}
void car_Day(){

     glPushMatrix();
     glTranslatef(carx,0,0);

     glColor3ub(180,80,35); // body down part
     drawQuads(250,950,20,150);

    glBegin(GL_QUADS); // body up part
    glColor3ub(180,80,35);
    glVertex2f(250,950);
    glVertex2f(300,930);
    glVertex2f(380,930);
    glVertex2f(400,950);
    glEnd();

    glColor3ub(220,160,100); // window
    drawQuads(310,930,25,40);

    glColor3ub(40,50,70); //wheel
    circle(280,970, 15);
    circle(380,970, 15);


    glPopMatrix();

}
void car2_Day(){

     glPushMatrix();
     glTranslatef(carx,0,0);

     glColor3ub(140,160,160); // body down part
     drawQuads(850,950,40,200);

    glBegin(GL_QUADS); // body up part
    glColor3ub(75,95,95);
    glVertex2f(850,950);
    glVertex2f(900,920);
    glVertex2f(1030,920);
    glVertex2f(1050,950);
    glEnd();

    glColor3ub(82,82,82); // window
    drawQuads(910,930,25,40);
    drawQuads(980,930,25,40);

    glColor3ub(40,50,70); //wheel
    circle(880,980, 15);
    circle(1020,980, 15);


    glPopMatrix();

}
void cloud_Day(){
  glPushMatrix();
    glTranslatef(cloudx,0, 0);



	int i;

	GLfloat x=600.1f; GLfloat y=100.4f; GLfloat radius =30.2f;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=630.3f;  y=100.4f;  radius =40.3f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=660.6f;  y=100.4f;  radius =30.2f;
	 triangleAmount = 20;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 x=750.6f;  y=150.4f;  radius =30.2f;
	 triangleAmount = 20;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 x=780.6f;  y=150.4f;  radius =40.2f;
	 triangleAmount = 20;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 x=810.6f;  y=150.4f;  radius =30.2f;
	 triangleAmount = 20;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,249,249);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	glPopMatrix();
	}
//////////////////////////////////////////////////////////////////////////////////////

void plane(){

  glPushMatrix();
  glTranslatef(planex,0,0);

glBegin(GL_POLYGON); ///// body
glColor3f(1.0f, 1.0f,0.0f);

glVertex2f(652.0f,320.0f);
glVertex2f(556.0f,288.3f);
glVertex2f(268.3f,288.3f);
glVertex2f(268.3f,400.5f);
glVertex2f(556.6f,400.5f);
glVertex2f(652.7f,382.45f);


glEnd();
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(336.35,288.3);
glVertex2f(336.35,400.5);
glEnd();

 glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(642,315);
    glVertex2f(700,270);
    glVertex2f(780,280);
    glVertex2f(642,390);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(480.5,288.3);
    glVertex2f(576.6,150.1);
    glVertex2f(475.495,160.065);
    glVertex2f(384.4,288.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(480.5,400.5);
    glVertex2f(547.57,515.62);
    glVertex2f(451.47,515.62);
    glVertex2f(384.4,400.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(288.3,363.41);
    glVertex2f(278.29,363.41);
    glVertex2f(278.29,344.39);
    glVertex2f(288.3,344.39);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(132,165,204);
    glVertex2f(284.296,400.39);
    glVertex2f(284.296,289.301);
    glVertex2f(282.294,289.301);
    glVertex2f(282.294,400.39);
    glEnd();
     glPopMatrix();

}


void day(){

//background theme
background_Day(1, 2, 3, 4);

sun_Day();

//footpath
footpath_Day();



car_Day();
car2_Day();
cloud_Day();
plane();
//trees
//trees();


//Building
building();

glEnd();
glutTimerFunc(5000,myDisplay_demo,0);

}
void day_demo(int val){

glutDisplayFunc(day);
}


void myDisplay(void){
glClear (GL_COLOR_BUFFER_BIT);

glPointSize(5.0);




//background theme
background(1, 2, 3, 4);

sun();

//footpath
footpath();


//plane();
car();
car2();
//trees
//trees();


//Building
building();

glEnd();

glutTimerFunc(5000,day_demo,0);

glFlush ();

}
void myDisplay_demo(int val){

glutDisplayFunc(myDisplay);
}


void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1920.0, 1080.0, 0.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (960, 540);
glutInitWindowPosition (960, 540);
glutCreateWindow ("Songsod Vobon");
glutDisplayFunc(myDisplay);
myInit ();

glutKeyboardFunc(handleKeypress); // for key-board
glutTimerFunc(100, update, 0);
glutMainLoop();

}

//drawquads
void drawQuads(GLfloat x, GLfloat y, GLfloat height,GLfloat width){
	glBegin(GL_QUADS);
	glVertex2i(x, y);
	glVertex2i(x+width, y);
	glVertex2i(x+width, y+height);
	glVertex2i(x, y+height);
	glEnd();
}
//draw square
void drawSquare(GLfloat x, GLfloat y, GLfloat height){
	drawQuads(x, y, height, height);
}
void borderQuads(GLfloat x, GLfloat y ,GLfloat height,GLfloat width){
    glColor3ub(1, 1, 1);
    drawQuads(x,y,1,width);
    glColor3ub(1, 1, 1);
    drawQuads(x,y,height,1);
    glColor3ub(1, 1, 1);
    drawQuads(x+width,y,height,1);
    glColor3ub(1, 1, 1);
    drawQuads(x,y+height,1,width);


}
void QuadSTRIP(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f,GLfloat g, GLfloat h){
    glBegin(GL_QUAD_STRIP);
	glVertex2i(a, b);
	glVertex2i(c, d);
	glVertex2i(e, f);
	glVertex2i(g, h);
	glEnd();



}
void borderQuadSTRIP(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f,GLfloat g, GLfloat h){
    glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(a, b);
	glVertex2f(c, d);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(a, b);
	glVertex2f(e, f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(g,h);
	glVertex2f(c,d);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(g, h);
	glVertex2f(e, f);
	glEnd();



}
void Triangle(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f){
    glBegin(GL_TRIANGLES);
    glVertex2i(a, b);
    glVertex2i(c, d);
    glVertex2i(e, f);
}
void BorderTriangle(GLfloat a, GLfloat b,GLfloat c, GLfloat d,GLfloat e, GLfloat f){
    glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(a, b);
	glVertex2f(c, d);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(c, d);
	glVertex2f(e, f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(e,f);
	glVertex2f(a,b);
	glEnd();
}
void circle(GLfloat x, GLfloat y,GLfloat radius){
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();


}
