
#include <windows.h>  // for MS Windows
#include <GL/glut.h>

float i = 0;
void keybord(unsigned char key, int x, int y)
{
    if(key == 'Q')
    {
        exit(0);
    }
    if(key == 'R')
    {

        glutPostRedisplay();

        i = i + 3;
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(i, .5,.5,.5);

    }
}

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(0,0,1);
        glBegin(GL_POLYGON);
       glColor3f(0,250,250);
        glVertex3f(-.8,-.8,0);
        glVertex3f(.6,-.8,0);
        glVertex3f(.6,.6,0);
        glVertex3f(-.8,.6,0);


        glColor3f(255,70,70);
        glVertex3f(-.6,-.99,.8);
        glVertex3f(.8,-.99,.8);
        glVertex3f(.8,.8,.8);
        glVertex3f(-.6,.8,.8);

        glColor3f(45,45,0);
        glVertex3f(-.8,.6,0);
        glVertex3f(-.6,.8,.8);
        glVertex3f(.8,.8,.8);
        glVertex3f(.6,.6,0);

         glColor3f(45,45,0);
        glVertex3f(-.8,.6,0);
        glVertex3f(-.6,.8,.8);
        glVertex3f(.8,.8,.8);
        glVertex3f(.6,.6,0);

         glColor3f(45,45,0);
        glVertex3f(-.8,.6,0);
        glVertex3f(-.6,.8,.8);
        glVertex3f(.8,.8,.8);
        glVertex3f(.6,.6,0);

        glColor3f(255,70,70);
        glVertex3f(-.6,-.99,.8);
        glVertex3f(.8,-.99,.8);
        glVertex3f(.8,.8,.8);
        glVertex3f(-.6,.8,.8);

        glColor3f(45,45,0);
        glVertex3f(-.8,.6,0);
        glVertex3f(-.6,.8,.8);
        glVertex3f(.8,.8,.8);
        glVertex3f(.6,.6,0);











        glEnd();
        glutSwapBuffers();


        /* glutPostRedisplay();
         float i = i+.3;

        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(45, .5,.5,.5);

*/
        glutKeyboardFunc(keybord);


}



int main(int argc, char *argv[])
{

   glutInit(&argc, argv);

   glutInitWindowSize(640,480);
   glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);

   glutCreateWindow("Polygon");




   glutDisplayFunc(draw);
   //glutKeyboardFunc(keybord);


   glutMainLoop();



}
