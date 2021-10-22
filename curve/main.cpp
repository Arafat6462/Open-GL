
#include<windows.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>


void Draw()
{
    GLfloat x[4],y1[4],y2[4];
    GLdouble xt[200],y1t[200],y2t[200],t;
    int i,c;
    glClear(GL_COLOR_BUFFER_BIT);

    x[0] = .100; x[1] = .200; x[2] = .300;  x[3] = .400;
    y1[0] = .450; y1[1] = .480; y1[2] = .450;  y1[3] = .400;
    y2[0] = .430; y2[1] = .460; y2[2] = .430;  y2[3] = .380;

    for(i=0,t=0,c=0;t<1;i++,t=t+0.01)
    {
       xt[i] = pow(1-t,3)*x[0]+3*t*pow(1-t,2)*x[1]+3*pow(t,2)*(1-t)*x[2]+pow(t,3)*x[3];
       y1t[i] = pow(1-t,3)*y1[0]+3*t*pow(1-t,2)*y1[1]+3*pow(t,2)*(1-t)*y1[2]+pow(t,3)*y1[3];
       y2t[i] = pow(1-t,3)*y2[0]+3*t*pow(1-t,2)*y2[1]+3*pow(t,2)*(1-t)*y2[2]+pow(t,3)*y2[3];
       c++;
    }

    glColor3f(0,0,1);
    glBegin(GL_QUAD_STRIP);
        for(i=0;i<c;i++)
        {
            glVertex2d(xt[i],y1t[i]);
            glVertex2d(xt[i],y2t[i]);
        }
    glEnd();

    glFlush();
}


void MyInit()
{
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
    glMatrixMode(GL_MODELVIEW);

}

int main(int argC,char *argV[])
{
    glutInit(&argC,argV);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Animate Flag");
   // MyInit();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

