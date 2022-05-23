#include<stdio.h>
#include<GL/glut.h>
int x,y,z,flag;
int slide,df;
void drawstring(float x,float y,float z,char *string, void *font)
{
      int len, i;

           glRasterPos3f(x,y,z);
           len=(int) strlen(string);
           for (i = 0; i < len; i++)
{
             glutBitmapCharacter(font,string[i]);
}
}

void frontscreen(void)
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glColor3f(1,0,0);
drawstring(3.2,19.0,0.0,"MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(0.7,0,1);
drawstring(3.6,17.5,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(1,0.5,0);
drawstring(8,16,0.0,"A MINI PROJECT ON",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(1,0.5,0);
drawstring(6,14.5,0.0,"GRAPHICS VISUALIZATION ON",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(1,0,0);
drawstring(6,13.5,0.0,"TRAVELLING AROUND BANGLORE CITY",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(1,0.5,0);
drawstring(10,12,0.0,"BY",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(0.8, 0, 0.5);
drawstring(6,11,0.0,"SHADMAN 		               4MT18CS140",GLUT_BITMAP_TIMES_ROMAN_24);
drawstring(6,10,0.0,"SHAMIS                         4MT18CS184",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(1, 0.5, 0);
drawstring(9.5,8,0.0,"GUIDES",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(0.8, 0, 0.5);
drawstring(8.7,7,0.0,"MRS Aishwarya M. Bhat",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(0.8, 0.8, 0.5);
drawstring(8.9,6,0.0,"Assistant Professor of CSE",GLUT_BITMAP_TIMES_ROMAN_24);
drawstring(9.5,5,0.0,"MITE , Moodabidri",GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(1, 0.1, 1);
drawstring(8,1.9,0.0,"PRESS 'A'or'a' TO START",GLUT_BITMAP_TIMES_ROMAN_24);
glFlush();
glutSwapBuffers();
}

//slide1
float x1,y1;
void timer_slide1(int e)
{
if(x1>20){
	x1=-10;
}
x1=x1+1.1;
glutPostRedisplay();
glutTimerFunc(100,timer_slide1,0);
}

void ttyre()
{
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glTranslatef(3,9,0);
glutSolidSphere(0.2,30,70);
glPopMatrix();
}
void train()
{
glPushMatrix();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2i(2,9);
glVertex2i(2,11);
glVertex2i(3,11);
glVertex2i(3,9);
glEnd();

glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(3,9);
glVertex2i(3,10);
glVertex2i(4.8,10);
glVertex2i(4.8,9);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glLineWidth(300.0);
glVertex2f(3.8,10);
glVertex2f(3.8,11);
glEnd();
glPopMatrix();

}




void tyre()
{
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glTranslatef(1,3,0);
glutSolidSphere(0.5,30,70);
glPopMatrix();
}

void car()
{
glPushMatrix();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,4);
glVertex2i(5,4);
glVertex2i(5,3);
glVertex2i(0,3);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.5,4);
glVertex2f(1.5,5);
glVertex2f(3.5,5);
glVertex2f(4.5,4);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0.8,4);
glVertex2f(1.5,4.7);
glVertex2f(2.3,4.7);
glVertex2f(2.3,4);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(2.5,4);
glVertex2f(2.5,4.7);
glVertex2f(3.5,4.7);
glVertex2f(4.2,4);
glEnd();


glPopMatrix();
}

void vtyre()
{
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glTranslatef(16.5,5,0);
glutSolidSphere(0.5,30,70);
glPopMatrix();
}
void van()
{
glPushMatrix();
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(17,5);
glVertex2i(17,8);
glVertex2i(20,8);
glVertex2i(20,5);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(16,5);
glVertex2f(16,7);
glVertex2f(17,7);
glVertex2f(17,5);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(16.2,6.8);
glVertex2f(16.2,6);
glVertex2f(16.8,6);
glVertex2f(16.8,6.8);
glEnd();

glPopMatrix();
}



void whitepaint()
{
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2i(0,3);
glVertex2i(0,4);
glVertex2i(4,4);
glVertex2i(4,3);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(6,3);
glVertex2f(6,4);
glVertex2f(10,4);
glVertex2f(10,3);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(11,3);
glVertex2f(11,4);
glVertex2f(15,4);
glVertex2f(15,3);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(17,3);
glVertex2f(17,4);
glVertex2f(20,4);
glVertex2f(20,3);
glEnd();


glPopMatrix();

}

void cloud()
{
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(3.5,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(4,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(3.5,18.6,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(9,17,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(9.5,17,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(9,17.6,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(13.5,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(14,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(13.5,18.5,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

}

void light()
{

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glLineWidth(300.0);
glVertex2f(10,6);
glVertex2f(10,11);
glEnd();
glPopMatrix();

glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(9.5,11);
glVertex2f(9.5,13);
glVertex2f(10.5,13);
glVertex2f(10.5,11);
glEnd();

glPushMatrix();
glColor3f(1.0,0.0,0.0);
glTranslatef(10,12.5,0);
glutSolidSphere(0.2,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,0.0);
glTranslatef(10,11.9,0);
glutSolidSphere(0.2,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glTranslatef(10,11.3,0);
glutSolidSphere(0.2,60,70);
glPopMatrix();
}
void board(){
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(10.5,8.5);
	glColor3f(1.0,0.0,0.0);
glVertex2f(10.5,10);
glVertex2f(17,10);
glVertex2f(17,8.5);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glLineWidth(300.0);
glVertex2f(11,6);
glVertex2f(11,8.5);

glVertex2f(16,6);
glVertex2f(16,8.5);

glEnd();
glPopMatrix();

}

void text(int text_x, int text_y,const char *m)
{
	glRasterPos3i(text_x,text_y,0);
	for (int i =0 ;i <strlen(m);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,m[i]);
	}
}

void slide1(void)
{

glClear(GL_COLOR_BUFFER_BIT);
//Sky
glColor3f(0.0,0.5,1.0);
glBegin(GL_POLYGON);
glVertex2i(0,10);
glColor3f(1.0,1.0,1.0);
glVertex2i(0,20);
glColor3f(1.0,1.0,1.0);

glVertex2i(20,20);
glVertex2i(20,10);
glEnd();


glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,6);
glVertex2i(0,9);
glVertex2i(20,9);
glVertex2i(20,6);
glEnd();


//grass

glPushMatrix();
glColor3f(0.0,0.70,0.0);
glTranslatef(0,7,0);
glutSolidSphere(1.5,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(2,6,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(3,7,0);
glutSolidSphere(1.0,30,70);
glPopMatrix();



glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(5,7,0);
glutSolidSphere(1.5,30,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(6,5,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(7,6,0);
glutSolidSphere(1.0,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(8,7,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(4,6,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(5,7,0);
glutSolidSphere(1.5,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(6,5,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(7,6,0);
glutSolidSphere(1.0,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(8,6,0);
glutSolidSphere(1.5,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(9,5,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(10,6,0);
glutSolidSphere(1.0,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(11,5,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(12,5,0);
glutSolidSphere(0.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(14,5,0);
glutSolidSphere(1.9,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(16,5,0);
glutSolidSphere(2.5,30,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.7,0.0);
glTranslatef(19,5,0);
glutSolidSphere(2.9,30,70);
glPopMatrix();



//road
glColor3f(0.5,0.5,0.5);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(0,6);
glVertex2i(20,6);
glVertex2i(20,0);
glEnd();

//road border1
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,6);
glVertex2i(0,7);
glVertex2i(20,7);
glVertex2i(20,6);
glEnd();

//road borderwhite1
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2i(4,6);
glVertex2i(4,7);
glVertex2i(8,7);
glVertex2i(8,6);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2i(12,6);
glVertex2i(12,7);
glVertex2i(16,7);
glVertex2i(16,6);
glEnd();

//road white paint
glPushMatrix();
glTranslatef(0,0,0);
whitepaint();
glPopMatrix();



//CAR

glPushMatrix();
glTranslatef(0+x1,0,0);
car();
glPopMatrix();



//TIER
glPushMatrix();
glTranslatef(0+x1,0,0);
tyre();
glPopMatrix();
glPushMatrix();
glTranslatef(3+x1,0,0);
tyre();
glPopMatrix();





//BUILDING1
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,10);
glColor3f(1.0,1.0,1.0);
glVertex2i(0,16);
glVertex2i(3,16);
glVertex2i(3,10);
glEnd();

//win1
glColor3f(1.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(1,10);
glColor3f(1.0,1.0,0.0);
glVertex2i(1,11);
glVertex2i(2,11);
glVertex2i(2,10);
glEnd();
glColor3f(1.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(1,12);
glColor3f(1.0,1.0,0.0);
glVertex2i(1,13);
glVertex2i(2,13);
glVertex2i(2,12);
glEnd();
glColor3f(1.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(1,14);
glColor3f(1.0,1.0,0.0);
glVertex2i(1,15);
glVertex2i(2,15);
glVertex2i(2,14);
glEnd();
//building2
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(3,10);
glColor3f(1.0,1.0,0.0);
glVertex2i(3,15);
glVertex2i(4,16);
glVertex2i(4,10);
glEnd();
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(4,10);
glColor3f(1.0,0.0,0.0);
glVertex2i(4,16);
glVertex2i(7,16);
glVertex2i(7,10);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex2i(7,10);
glColor3f(1.0,0.0,0.0);
glVertex2i(7,17);
glVertex2i(8,17);
glVertex2i(8,10);
glEnd();
//WINDOW
glColor3f(0.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(5,10);
glColor3f(1.0,1.0,0.0);
glVertex2i(5,11);
glVertex2i(6,11);
glVertex2i(6,10);
glEnd();
glColor3f(0.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(5,12);
glColor3f(1.0,1.0,0.0);
glVertex2i(5,13);
glVertex2i(6,13);
glVertex2i(6,12);
glEnd();
glColor3f(0.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(5,14);
glColor3f(1.0,1.0,0.0);
glVertex2i(5,15);
glVertex2i(6,15);
glVertex2i(6,14);
glEnd();


glColor3f(0.0,0.2,0.4);
glBegin(GL_POLYGON);
glVertex2i(8,10);
glColor3f(0.0,0.5,0.2);

glVertex2i(8,16);
glVertex2i(10,16);
glVertex2i(10,10);
glEnd();

//BUILDING3
glColor3f(0.5,0.5,1.0);
glBegin(GL_POLYGON);
glVertex2i(10,10);
glColor3f(1.0,1.0,0.0);

glVertex2i(10,15);
glVertex2i(11,16);
glVertex2i(11,10);
glEnd();
glColor3f(0.2,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2i(11,10);
glColor3f(1.0,1.0,0.0);

glVertex2i(11,16);
glVertex2i(14,16);
glVertex2i(14,10);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2i(14,10);
glColor3f(1.0,0.0,0.0);
glVertex2i(14,17);
glVertex2i(15,17);
glVertex2i(15,10);
glEnd();

glColor3f(0.5,1.2,0.2);
glBegin(GL_POLYGON);
glVertex2i(15,10);
glColor3f(1.0,1.0,0.0);
glVertex2i(15,15);
glVertex2i(16,15);
glVertex2i(16,10);
glEnd();
//WINDOW2
glColor3f(0.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(12,10);
glColor3f(1.0,1.0,0.0);
glVertex2i(12,11);
glVertex2i(13,11);
glVertex2i(13,10);
glEnd();
glColor3f(0.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(12,12);
glColor3f(1.0,1.0,0.0);
glVertex2i(12,13);
glVertex2i(13,13);
glVertex2i(13,12);
glEnd();
glColor3f(0.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(12,14);
glColor3f(1.0,1.0,0.0);
glVertex2i(12,15);
glVertex2i(13,15);
glVertex2i(13,14);
glEnd();

//BUILDING4
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(16,10);
glColor3f(1.0,1.0,1.0);
glVertex2i(16,16);
glVertex2i(19,16);
glVertex2i(19,10);
glEnd();

glColor3f(1.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(17,10);
glColor3f(1.0,1.0,0.0);

glVertex2i(17,11);
glVertex2i(18,11);
glVertex2i(18,10);
glEnd();
glColor3f(1.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(17,12);
glColor3f(1.0,1.0,0.0);

glVertex2i(17,13);
glVertex2i(18,13);
glVertex2i(18,12);
glEnd();
glColor3f(1.5,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2i(17,14);
glColor3f(1.0,1.0,0.0);

glVertex2i(17,15);
glVertex2i(18,15);
glVertex2i(18,14);
glEnd();
//trafficlight
glPushMatrix();
glTranslatef(0,0,0);
light();
glPopMatrix();
//track
glColor3f(0.0,0.0,0.0);
glLineWidth(100.0);
glBegin(GL_LINES);
glVertex2f(0,9);
glVertex2f(20,9);
glEnd();
//ttyre
glPushMatrix();
glTranslatef(0+x1,0,0);
ttyre();
glPopMatrix();
glPushMatrix();
glTranslatef(0.7+x1,0,0);
ttyre();
glPopMatrix();
//train
glPushMatrix();
glTranslatef(0+x1,0,0);
train();
glPopMatrix();
//board welcome
glPushMatrix();
glTranslatef(0,0,0);
board();
glPopMatrix();
//van

glPushMatrix();
glTranslatef(0-x1,0,0);
van();
glPopMatrix();

//van tire
glPushMatrix();
glTranslatef(0-x1,0,0);
vtyre();
glPopMatrix();
glPushMatrix();
glTranslatef(3-x1,0,0);
vtyre();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.0,1.0);
	text(11.9,9,"Welcome To Bangalore");
glPopMatrix();



//cloud
glPushMatrix();
glTranslatef(0,0,0);
cloud();
glPopMatrix();
//Sun
glPushMatrix();
glColor3f(0.9,0.9,0.0);
glTranslatef(18,18,0);
glutSolidSphere(1.0,30,70);
glPopMatrix();

drawstring(8,1.9,0.0,"[PRESS 'B'or'b'FOR SECOND SLIDE]",GLUT_BITMAP_TIMES_ROMAN_24);

glFlush();



glutSwapBuffers();
}

//slide2


float x2,y2;
void timer_slide2(int e)
{

x2 = x2 + 0.1;
y2 = y2 + 0.1;
if(x2<2.5 && y2<2.5){
glutPostRedisplay();
glutTimerFunc(100,timer_slide2,0);
}
}
void man2()
{

   glPushMatrix();//shoe
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.2,4.3,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();

     glPushMatrix();//shoe
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.8,4.3,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();

    glPushMatrix();
glColor3f(0.0,0.0,1.0);//leg

    glBegin(GL_POLYGON);
    glVertex2f(2,4.4);
    glVertex2f(2,6);
    glVertex2f(2.4,6);
    glVertex2f(2.4,4.4);
    glEnd();
    glPopMatrix();

     glPushMatrix();
glColor3f(0.0,0.0,1.0);//leg
    glBegin(GL_POLYGON);
    glVertex2f(2.6,4.4);
    glVertex2f(2.6,6);
    glVertex2f(3,6);
    glVertex2f(3,4.4);
     glEnd();
    glPopMatrix();



    glPushMatrix();
glColor3f(0.0,0.5,1.0);//pant
    glBegin(GL_POLYGON);
    glVertex2f(2,5.5);
    glVertex2f(2,6);
    glVertex2f(3,6);
    glVertex2f(3,5.5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
glColor3f(1.0,0.0,0.0);//shirt
    glBegin(GL_POLYGON);
    glVertex2f(1.8,6);
    glVertex2f(1.8,7.2);
    glVertex2f(3.2,7.2);
    glVertex2f(3.2,6);
    glEnd();
    glPopMatrix();

    glPushMatrix();//hair
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.2,8.3,0);
    glutSolidSphere(0.7,30,70);
    glPopMatrix();

    glPushMatrix();//face
    glColor3f(1.0,1.0,0.5);
    glTranslatef(2.4,8,0);
    glutSolidSphere(0.7,30,70);
    glPopMatrix();

glColor3f(1.0,1.0,0.5);//neck
    glBegin(GL_POLYGON);
    glVertex2f(2.1,7.2);
    glVertex2f(2.1,7.4);
    glVertex2f(2.7,7.4);
    glVertex2f(2.7,7.2);
    glEnd();
    glPopMatrix();

  //rhand
/*    glPushMatrix();
glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
   glVertex2f(3,6);
   glVertex2f(3,7.2);
   glVertex2f(3.2,7.2);
   glVertex2f(3.2,6);
    glEnd();
    glPopMatrix();*/


 glPushMatrix();//sphere
    glColor3f(1.0,1.0,0.5);
    glTranslatef(3.1+x2,5.8+y2,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();
    glPushMatrix();


 /*   glPushMatrix();
glColor3f(1.0,0.0,0.0);//lhand
    glBegin(GL_POLYGON);
    glVertex2f(1.7,6);
    glVertex2f(1.7,7.2);
    glVertex2f(2.2,7.2);
    glVertex2f(2.2,6);
    glEnd();
    glPopMatrix();*/


 glPushMatrix();//sphere
    glColor3f(1.0,1.0,0.5);
    glTranslatef(1.9+x2,5.8+y2,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();

    glPushMatrix();//eye
    glColor3f(0.1,0.1,0.1);
    glTranslatef(2.5+x2,8.3+y2,0);
    glutSolidSphere(0.1,30,70);
    glPopMatrix();

  glPushMatrix();//eye
    glColor3f(0.1,0.1,0.1);
    glTranslatef(2.8+x2,8.5+y2,0);
    glutSolidSphere(0.1,30,70);
    glPopMatrix();

     glPushMatrix();//mouth
    glColor3f(0.4,0.0,0.0);
    glTranslatef(2.9+x2,7.8+y2,0);
    glutSolidSphere(0.1,30,70);
    glPopMatrix();
}

void grass()
{
glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(0,11,0);
    glutSolidSphere(1.0,30,70);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(2,11,0);
    glutSolidSphere(1.5,30,70);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(4,11,0);
    glutSolidSphere(1.9,30,70);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(20,11,0);
    glutSolidSphere(1.9,30,70);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(18,11,0);
    glutSolidSphere(2.0,30,70);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(16,11,0);
    glutSolidSphere(1.0,30,70);
    glPopMatrix();

}


void mountain()
{

glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(0,14,0);
glutSolidSphere(2.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(3.7,13.5,0);
glutSolidSphere(2,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(8.7,13.5,0);
glutSolidSphere(4,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(11.7,13.5,0);
glutSolidSphere(3.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(14.7,13.5,0);
glutSolidSphere(4,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(19.7,13.5,0);
glutSolidSphere(2,60,70);
glPopMatrix();





}
void palace()
{

glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(4,8);
glVertex2f(4,14);
glVertex2f(16,14);
glVertex2f(16,8);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(4.4,8);
glVertex2f(4.4,13.6);
glVertex2f(15.6,13.6);
glVertex2f(15.6,8);
glEnd();
glPopMatrix();

//d1
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(4.9,8);
glVertex2f(4.9,11.5);
glVertex2f(5.5,12);
glVertex2f(6.2,11.5);
glVertex2f(6.2,8);
glEnd();
glPopMatrix();

//w1
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(5.1,8);
glVertex2f(5.1,10.5);
glVertex2f(6,10.5);
glVertex2f(6,8);
glEnd();
glPopMatrix();
//r1
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(5.5,12.1,0);
glutSolidSphere(0.15,30,70);
glPopMatrix();

//rr1
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(5.5,12.7,0);
glutSolidSphere(0.2,30,70);
glPopMatrix();
//d2
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(6.4,8);
glVertex2f(6.4,11.5);
glVertex2f(7,12);
glVertex2f(7.7,11.5);
glVertex2f(7.7,8);
glEnd();
glPopMatrix();

//w2
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(6.6,8);
glVertex2f(6.6,10.5);
glVertex2f(7.5,10.5);
glVertex2f(7.5,8);
glEnd();
glPopMatrix();

//r2
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(7.0,12.1,0);
glutSolidSphere(0.15,30,70);
glPopMatrix();

//rr2
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(7.0,12.7,0);
glutSolidSphere(0.2,30,70);
glPopMatrix();
//d3
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(8,8);
glVertex2f(8,11.5);
glVertex2f(9.5,12);
glVertex2f(11,11.5);
glVertex2f(11,8);
glEnd();
glPopMatrix();

//w3
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(8.2,8);
glVertex2f(8.2,11.4);
glVertex2f(9.4,11.8);
glVertex2f(10.8,11.4);
glVertex2f(10.8,8);
glEnd();
glPopMatrix();
//d4
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(11.2,8);
glVertex2f(11.2,11.5);
glVertex2f(12.1,12);
glVertex2f(13,11.5);
glVertex2f(13,8);
glEnd();
glPopMatrix();

//w4
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(11.4,8);
glVertex2f(11.4,10.5);
glVertex2f(12.8,10.5);
glVertex2f(12.8,8);
glEnd();
glPopMatrix();

//r4
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(12.1,12.1,0);
glutSolidSphere(0.15,30,70);
glPopMatrix();

//rr4
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(12.1,12.7,0);
glutSolidSphere(0.2,30,70);
glPopMatrix();
//d5
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(13.2,8);
glVertex2f(13.2,11.5);
glVertex2f(14.2,12);
glVertex2f(15,11.5);
glVertex2f(15,8);
glEnd();
glPopMatrix();

//w5
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(13.4,8);
glVertex2f(13.4,10.5);
glVertex2f(14.8,10.5);
glVertex2f(14.8,8);
glEnd();
glPopMatrix();

//r4
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(14.2,12.1,0);
glutSolidSphere(0.15,30,70);
glPopMatrix();

//rr4
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glTranslatef(14.2,12.7,0);
glutSolidSphere(0.2,30,70);
glPopMatrix();

//steps


glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(3.5,7.5);
glVertex2f(3.5,8);
glVertex2f(16.5,8);
glVertex2f(16.5,7.5);
glEnd();
glPopMatrix();



glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(4,6.8);
glVertex2f(4,7.5);
glVertex2f(16,7.5);
glVertex2f(16,6.8);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(3.3,6.3);
glVertex2f(4.3,6.8);
glVertex2f(15.7,6.8);
glVertex2f(16.7,6.3);
glEnd();
glPopMatrix();

//STEPS LINE
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(3.5,7.5);
glVertex2f(16.5,7.5);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(4,6.8);
glVertex2f(16,6.8);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(3.3,6.3);
glVertex2f(16.7,6.3);
glEnd();
glPopMatrix();

//palace right pillar
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(16,8);
glVertex2f(16,16);
glVertex2f(17,16);
glVertex2f(17,8);
glEnd();
glPopMatrix();
//WINDOW
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(16,15);
glVertex2f(17,15);

glEnd();
glPopMatrix();


//palace right pillar2
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(17,8);
glVertex2f(17,16.5);
glVertex2f(19.5,16.5);
glVertex2f(19.5,8);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(16,15.3);
glVertex2f(19.5,15.3);


glVertex2f(17,8.3);
glVertex2f(19.5,8.3);
glEnd();
glPopMatrix();

//PILLAR TOP

glPushMatrix();
glColor3f(1.0,1.0,0.4);
glPointSize(20.0);
glBegin(GL_POINTS);
glVertex2f(16.2,16.1);
glVertex2f(16.8,16.1);


glVertex2f(16.9,16.6);
glVertex2f(17.5,16.6);
glVertex2f(18.1,16.6);
glVertex2f(18.6,16.6);
glVertex2f(19.1,16.6);



glEnd();
glPopMatrix();

//PILLAR2 WINDOW
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glPointSize(25.0);
glBegin(GL_POINTS);

glVertex2f(16.4,14);
glVertex2f(17.8,14.3);
glVertex2f(18.8,14.3);


glEnd();
glPopMatrix();


//palace left pillar
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(2,8);
glVertex2f(2,16);
glVertex2f(4,16);
glVertex2f(4,8);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(2,8.3);
glVertex2f(4,8.3);

glVertex2f(2,15.3);
glVertex2f(4,15.3);


glEnd();
glPopMatrix();


//PILLAR TOP left

glPushMatrix();
glColor3f(1.0,1.0,0.4);
glPointSize(20.0);
glBegin(GL_POINTS);
glVertex2f(2.2,16.1);

glVertex2f(2.8,16.1);
glVertex2f(3.3,16.1);

glVertex2f(3.8,16.1);


glEnd();
glPopMatrix();
//PILLAR left WINDOW
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glPointSize(25.0);
glBegin(GL_POINTS);

glVertex2f(2.4,14);
glVertex2f(3.5,14);



glEnd();
glPopMatrix();

//1floor
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(4,14);
glVertex2f(4,17);
glVertex2f(14,17);
glVertex2f(14,14);
glEnd();
glPopMatrix();


//border
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(4,14);
glVertex2f(4,14.5);
glVertex2f(16,14.5);
glVertex2f(16,14);
glEnd();
glPopMatrix();

//w1
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(4.2,14);
glVertex2f(4.2,16);
glVertex2f(5,16.3);

glVertex2f(5.5,16);
glVertex2f(5.5,14);
glEnd();
glPopMatrix();

//w2
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(5.7,14);
glVertex2f(5.7,16);
glVertex2f(6.3,16.3);

glVertex2f(7,16);
glVertex2f(7,14);
glEnd();
glPopMatrix();

//w3
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(7.4,14);
glVertex2f(7.4,16);
glVertex2f(8.8,16.4);

glVertex2f(10,16);
glVertex2f(10,14);
glEnd();
glPopMatrix();


//w4
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.3,14);
glVertex2f(10.3,16);
glVertex2f(11,16.4);

glVertex2f(11.8,16);
glVertex2f(11.8,14);
glEnd();
glPopMatrix();

//w5
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(12,14);
glVertex2f(12,16);
glVertex2f(12.7,16.4);

glVertex2f(13.5,16);
glVertex2f(13.5,14);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(2,15);
glVertex2f(14,15);

glVertex2f(4,16.5);
glVertex2f(14,16.5);
glEnd();
glPopMatrix();


//ROOF
glPushMatrix();
glColor3f(8.0,0.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(4,17);
glVertex2f(5,18);
glVertex2f(13,18);
glVertex2f(14,17);
glEnd();
glPopMatrix();

//TOWER
glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(14.3,14);
glVertex2f(14.3,18);
glVertex2f(16,18);
glVertex2f(16,14);
glEnd();
glPopMatrix();

//TOWER TOP

glPushMatrix();
glColor3f(1.0,1.0,0.4);
glBegin(GL_POLYGON);
glVertex2f(14.3,18);
glVertex2f(14.1,19.5);
glVertex2f(16.2,19.5);
glVertex2f(16,18);
glEnd();
glPopMatrix();



glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(14.3,18);
glVertex2f(16,18);

glVertex2f(14.3,16);
glVertex2f(16.4,16);

glVertex2f(14.5,18.0);
glVertex2f(14.5,19.5);

glVertex2f(14.7,18.0);
glVertex2f(14.7,19.5);


glVertex2f(14.9,18.0);
glVertex2f(14.9,19.5);

glVertex2f(15.1,18.0);
glVertex2f(15.1,19.5);

glVertex2f(15.3,18.0);
glVertex2f(15.3,19.5);

glVertex2f(15.5,18.0);
glVertex2f(15.5,19.5);

glVertex2f(15.7,18.0);
glVertex2f(15.7,19.5);

glVertex2f(15.9,18.0);
glVertex2f(15.9,19.5);
glEnd();
glPopMatrix();

//PILLAR left WINDOW
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glPointSize(25.0);
glBegin(GL_POINTS);

glVertex2f(15,16.7);
glVertex2f(15,15);

glEnd();
glPopMatrix();
}

void groundgrass()
{

glPushMatrix();
glColor3f(0.0,0.9,0.0);
glTranslatef(2,7,0);
glutSolidSphere(2.5,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,1.3,0.0);
glTranslatef(4.2,9.2,0);
glutSolidSphere(1.7,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.5,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(1,7);
glVertex2f(1,10);
glVertex2f(2,10);
glVertex2f(2,7);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.8,0.0);
glTranslatef(1.5,10,0);
glutSolidSphere(1.0,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.8,0.0);
glTranslatef(1.0,10.1,0);
glutSolidSphere(1.0,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,0.8,0.0);
glTranslatef(2,9.8,0);
glutSolidSphere(1.0,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.8,0.0);
glTranslatef(2.2,11,0);
glutSolidSphere(1.0,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,0.0,0.0);
glTranslatef(0.5,8,0);
glutSolidSphere(0.2,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.5,0.0,1.0);
glTranslatef(0.5,8,0);
glutSolidSphere(0.1,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,0.0,0.0);
glTranslatef(0.4,7,0);
glutSolidSphere(0.2,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(1.0,0.0,0.0);
glTranslatef(2.9,6.7,0);
glutSolidSphere(0.2,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.5,0.0,1.0);
glTranslatef(2.9,6.7,0);
glutSolidSphere(0.1,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(1.0,0.0,0.0);
glTranslatef(2.4,7.5,0);
glutSolidSphere(0.2,60,70);
glPopMatrix();


}
void bottomgrass()
{
glPushMatrix();
glColor3f(0.0,0.2,0.0);
glTranslatef(1,1,0);
glutSolidSphere(1.4,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.2,0.0);
glTranslatef(3,1,0);
glutSolidSphere(1.4,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.2,0.0);
glTranslatef(1.8,2,0);
glutSolidSphere(1.4,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(1,0);
glVertex2f(1.5,4);
glVertex2f(2,0);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0,0);
glVertex2f(0.5,3);
glVertex2f(1,0);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(2,0);
glVertex2f(2.5,3);
glVertex2f(3,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3,0);
glVertex2f(3.5,4);
glVertex2f(4,0);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.5,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(5,0);
glVertex2f(5,2);
glVertex2f(6,2);
glVertex2f(6,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(4.5,2);
glVertex2f(5.5,3);
glVertex2f(6.5,2);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(4.5,2.5);
glVertex2f(5.5,3.5);
glVertex2f(6.5,2.5);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(4.5,3);
glVertex2f(5.5,3.9);
glVertex2f(6.5,3);
glEnd();
glPopMatrix();




glPushMatrix();
glColor3f(0.5,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(7,0);
glVertex2f(7,2);
glVertex2f(8,2);
glVertex2f(8,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(6.5,2);
glVertex2f(7.5,3);
glVertex2f(8.5,2);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(6.5,2.5);
glVertex2f(7.5,3.5);
glVertex2f(8.5,2.5);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(6.5,3);
glVertex2f(7.5,3.9);
glVertex2f(8.5,3);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.5,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(10,0);
glVertex2f(10,4);
glVertex2f(11,4);
glVertex2f(11,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.2,0.0);
glTranslatef(11.4,4.3,0);
glutSolidSphere(1.2,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1.2,0.0);
glTranslatef(10,4.2,0);
glutSolidSphere(1.2,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,1,0.0);
glTranslatef(10.3,5.5,0);
glutSolidSphere(1.2,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,1,0.0);
glTranslatef(11,5.5,0);
glutSolidSphere(1.2,60,70);
glPopMatrix();


glPushMatrix();
glColor3f(0.0,1,0.0);
glTranslatef(10.7,3.4,0);
glutSolidSphere(1.2,60,70);
glPopMatrix();



glPushMatrix();
glColor3f(0.0,0.2,0.0);
glTranslatef(12,1,0);
glutSolidSphere(1.4,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.2,0.0);
glTranslatef(14,0.5,0);
glutSolidSphere(1.4,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.2,0.0);
glTranslatef(12.8,2.0,0);
glutSolidSphere(1.5,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(0.0,0.2,0.0);
glTranslatef(9,0.4,0);
glutSolidSphere(1.5,60,70);
glPopMatrix();
}

void output(char s[])
{

int k;

for(k=0;k<strlen(s);k++)
{
glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);

}
}

void slide2(void)
{

glClear(GL_COLOR_BUFFER_BIT);

//Sky
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2i(0,11);
glVertex2i(0,20);
glVertex2i(20,20);
glVertex2i(20,11);

glEnd();

//mountain
glPushMatrix();
glTranslatef(0,0,0);
mountain();
glPopMatrix();

glPushMatrix();
//board
glColor3f(0.5,0.0,0.2);
glBegin(GL_POLYGON);
glVertex2f(5,18);
glVertex2f(5,19);
glColor3f(0.0,1.0,1.0);
glVertex2f(13,19);
glVertex2f(13,18);

glEnd();
glPopMatrix();




//grass
glPushMatrix();
glTranslatef(0,0,0);
grass();
glPopMatrix();

//ground greenary
glPushMatrix();

glColor3f(0.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(0,11);
glVertex2i(20,11);
glVertex2i(20,0);

glEnd();
glPopMatrix();
//groundgrass
glPushMatrix();
glTranslatef(0,0,0);
groundgrass();
glPopMatrix();


//palace


glPushMatrix();
glTranslatef(0,0,0);
palace();
glPopMatrix();




glPushMatrix();//pond border
glColor3f(0.5,0.2,0.2);
glTranslatef(18,3,0);
glutSolidSphere(3.3,30,70);
glPopMatrix();

glPushMatrix();//pond
glColor3f(0.0,1.0,1.0);
glTranslatef(18,3,0);
glutSolidSphere(3.0,30,70);
glPopMatrix();


//route
glPushMatrix();
glColor3f(1.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2f(0,0);
glVertex2f(0,6.4);
glVertex2f(15.4,6.4);
glVertex2f(14.4,0);
glEnd();
glPopMatrix();
/*
glPushMatrix();
glColor3f(1.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,6);
glVertex2i(5,11);
glVertex2f(16,11);
glVertex2i(15,6);

glEnd();
glPopMatrix();
*/
//BOTTOM GRASS
//top
glPushMatrix();
glTranslatef(0,0,0);
bottomgrass();
glPopMatrix();


glColor3f(1,0,0);
//glRasterPos2i(100,180);
//glutBitmapCharacter(GLUT_BITMAP_8_BY_13,'A');
char buff[20]="BANGALORE PALACE";
glPushMatrix();
glTranslatef(5.5,18.2,0);
glScalef(0.005,0.005,1.0);
//glRotatef(x,1.0,1.0,0.0);
output(buff);
glPopMatrix();

//man
glPushMatrix();
glTranslatef(x2,y2,0);
man2();
glPopMatrix();

drawstring(8,2.5,0.0,"[PRESS 'C'or'c' FOR THIRD SLIDE]",GLUT_BITMAP_TIMES_ROMAN_24);

glFlush();

glutSwapBuffers();

}

//slide3

float x3,y3 = 0;
void timer_slide3(int e)
{
x3=x3+0.1;
if (x3 > 5){
	y3 = y3+0.1;
}
if (x3 < 7 and y3 < 5)
{
glutPostRedisplay();
glutTimerFunc(100,timer_slide3,0);
}
}

void man3()
{

   glPushMatrix();//shoe
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.2,4.3,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();

     glPushMatrix();//shoe
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.8,4.3,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();

    glPushMatrix();
glColor3f(0.0,0.0,1.0);//leg

    glBegin(GL_POLYGON);
    glVertex2f(2,4.4);
    glVertex2f(2,6);
    glVertex2f(2.4,6);
    glVertex2f(2.4,4.4);
    glEnd();
    glPopMatrix();

     glPushMatrix();
glColor3f(0.0,0.0,1.0);//leg
    glBegin(GL_POLYGON);
    glVertex2f(2.6,4.4);
    glVertex2f(2.6,6);
    glVertex2f(3,6);
    glVertex2f(3,4.4);
     glEnd();
    glPopMatrix();



    glPushMatrix();
glColor3f(0.0,0.5,1.0);//pant
    glBegin(GL_POLYGON);
    glVertex2f(2,5.5);
    glVertex2f(2,6);
    glVertex2f(3,6);
    glVertex2f(3,5.5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
glColor3f(1.0,0.0,0.0);//shirt
    glBegin(GL_POLYGON);
    glVertex2f(1.8,6);
    glVertex2f(1.8,7.2);
    glVertex2f(3.2,7.2);
    glVertex2f(3.2,6);
    glEnd();
    glPopMatrix();

    glPushMatrix();//hair
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.2,8.3,0);
    glutSolidSphere(0.7,30,70);
    glPopMatrix();

    glPushMatrix();//face
    glColor3f(1.0,1.0,0.5);
    glTranslatef(2.4,8,0);
    glutSolidSphere(0.7,30,70);
    glPopMatrix();

glColor3f(1.0,1.0,0.5);//neck
    glBegin(GL_POLYGON);
    glVertex2f(2.1,7.2);
    glVertex2f(2.1,7.4);
    glVertex2f(2.7,7.4);
    glVertex2f(2.7,7.2);
    glEnd();
    glPopMatrix();

/*  //rhand
    glPushMatrix();
	glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
   glVertex2f(3,6);
   glVertex2f(3,7.2);
   glVertex2f(3.2,7.2);
   glVertex2f(3.2,6);
    glEnd();
    glPopMatrix();*/


 glPushMatrix();//sphere
    glColor3f(1.0,1.0,0.5);
    glTranslatef(3.1+x3,5.8+y3,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();
    glPushMatrix();


  /* glPushMatrix();
glColor3f(1.0,0.0,0.0);//lhand
    glBegin(GL_POLYGON);
    glVertex2f(1.7,6);
    glVertex2f(1.7,7.2);
    glVertex2f(2.2,7.2);
    glVertex2f(2.2,6);
    glEnd();
    glPopMatrix();*/


 glPushMatrix();//sphere
    glColor3f(1.0,1.0,0.5);
    glTranslatef(1.9+x3,5.8+y3,0);
    glutSolidSphere(0.2,30,70);
    glPopMatrix();

    glPushMatrix();//eye
    glColor3f(0.1,0.1,0.1);
    glTranslatef(2.5+x3,8.3+y3,0);
    glutSolidSphere(0.1,30,70);
    glPopMatrix();

  glPushMatrix();//eye
    glColor3f(0.1,0.1,0.1);
    glTranslatef(2.8+x3,8.5+y3,0);
    glutSolidSphere(0.1,30,70);
    glPopMatrix();

     glPushMatrix();//mouth
    glColor3f(0.4,0.0,0.0);
    glTranslatef(2.9+x3,7.8+y3,0);
    glutSolidSphere(0.1,30,70);
    glPopMatrix();
}



void tyre1()
{
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glTranslatef(1,3,0);
glutSolidSphere(0.5,30,70);
glPopMatrix();
}

void car1()
{
glPushMatrix();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,4);
glVertex2i(5,4);
glVertex2i(5,3);
glVertex2i(0,3);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.5,4);
glVertex2f(1.5,5);
glVertex2f(3.5,5);
glVertex2f(4.5,4);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0.8,4);
glVertex2f(1.5,4.7);
glVertex2f(2.3,4.7);
glVertex2f(2.3,4);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(2.5,4);
glVertex2f(2.5,4.7);
glVertex2f(3.5,4.7);
glVertex2f(4.2,4);
glEnd();


glPopMatrix();
}

void vtyre1()
{
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glTranslatef(16.5,2,0);
glutSolidSphere(0.5,30,70);
glPopMatrix();
}
void van1()
{
glPushMatrix();
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(17,2);
glVertex2i(17,5);
glVertex2i(20,5);
glVertex2i(20,2);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(16,2);
glVertex2f(16,4);
glVertex2f(17,4);
glVertex2f(17,2);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(16.2,3.8);
glVertex2f(16.2,3);
glVertex2f(16.8,3);
glVertex2f(16.8,3.8);
glEnd();

glPopMatrix();
}

void whitepaint1()
{

glPushMatrix();
glLineWidth(30.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(0,2.3);
glVertex2f(20,2.3);

glEnd();
glPopMatrix();

glPushMatrix();
glLineWidth(30.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(0,2.3);
glVertex2f(1,2.3);
glEnd();
glPopMatrix();

glPushMatrix();
glLineWidth(30.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(3,2.3);
glVertex2f(5,2.3);
glEnd();
glPopMatrix();

glPushMatrix();
glLineWidth(30.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(7,2.3);
glVertex2f(9,2.3);
glEnd();
glPopMatrix();


glPushMatrix();
glLineWidth(30.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(11,2.3);
glVertex2f(13,2.3);
glEnd();
glPopMatrix();

glPushMatrix();
glLineWidth(30.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(15,2.3);
glVertex2f(17,2.3);
glEnd();
glPopMatrix();


glPushMatrix();
glLineWidth(30.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(19,2.3);
glVertex2f(20,2.3);
glEnd();
glPopMatrix();

}


void cloud1()
{
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(3.5,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(4,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(3.5,18.6,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();
/*

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(9,17,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(9.5,17,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(9,17.6,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

*/
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(16.5,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(17,18,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(16.5,18.5,0);
glutSolidSphere(0.8,60,70);
glPopMatrix();

}
void hotel()
{
//backside
glPushMatrix();
glColor3f(1.0,0.5,0.2);
glBegin(GL_POLYGON);
glVertex2f(1,8);
glColor3f(1.0,1.5,0.2);
glVertex2f(1,12);
glVertex2f(19,12);
glColor3f(1.0,1.5,0.2);
glVertex2f(19,8);
glEnd();
glPopMatrix();


//back roof
glPushMatrix();
glColor3f(1.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.5,12);
glColor3f(1.0,1.5,1.0);

glVertex2f(1,13.5);
glVertex2f(19,13.5);
glVertex2f(19.5,12);
glEnd();
glPopMatrix();

//frontside
glPushMatrix();
glColor3f(1.0,1.5,0.2);
glBegin(GL_POLYGON);
glVertex2f(6,8);
glColor3f(0.0,0.5,1.2);
glVertex2f(6,16);
glVertex2f(14,16);
glVertex2f(14,8);
glEnd();
glPopMatrix();


//frontside roof
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(1.0,0.5,0.2);
	glVertex2f(5.5,16);
glColor3f(0.0,1.5,0.2);
	glVertex2f(6,17.8);
	glVertex2f(14,17.8);
	glVertex2f(14.5,16);
glEnd();
glPopMatrix();

//front entranceside roof
glPushMatrix();
glColor3f(1.0,0.5,0.2);
glBegin(GL_POLYGON);
glVertex2f(6.5,10);
glColor3f(1.0,0.5,0.2);
glVertex2f(7,12);
glVertex2f(13,12);
glVertex2f(13.5,10);
glEnd();
glPopMatrix();

//mat steps
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(5,7.5);
glVertex2f(5,8);
glVertex2f(15,8);
glVertex2f(15,7.5);
glEnd();
glPopMatrix();
//pillar
glPushMatrix();
glLineWidth(30.0);
glColor3f(1.0,1.5,0.2);
glBegin(GL_LINES);
glVertex2f(7,7);
glVertex2f(7,10);

glVertex2f(13,7);
glVertex2f(13,10);
glEnd();
glPopMatrix();

//pillar dowm
glPushMatrix();
glColor3f(1.0,0.0,0.5);
glPointSize(25);

glBegin(GL_POINTS);
glVertex2f(7,7);
glVertex2f(13,7);

glEnd();
glPopMatrix();



//mat
glPushMatrix();
glColor3f(1.0,0.0,0.5);
glBegin(GL_POLYGON);
glVertex2f(7.5,6);
glVertex2f(8,7.5);
glVertex2f(12,7.5);
glVertex2f(12.5,6);
glEnd();
glPopMatrix();

//win1
glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(1.5,10);
glVertex2f(1.5,11.5);
glVertex2f(3,11.5);
glVertex2f(3,10);
glEnd();
glPopMatrix();

//win2
glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(3.5,10);
glVertex2f(3.5,11.5);
glVertex2f(5,11.5);
glVertex2f(5,10);
glEnd();
glPopMatrix();


//win  R1
glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(14.5,10);
glVertex2f(14.5,11.5);
glVertex2f(16,11.5);
glVertex2f(16,10);
glEnd();
glPopMatrix();
//win  R2
glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(16.5,10);
glVertex2f(16.5,11.5);
glVertex2f(18,11.5);
glVertex2f(18,10);
glEnd();
glPopMatrix();


//DOOR BACK
glPushMatrix();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(8.5,8);
glVertex2f(8.5,10);
glVertex2f(11.5,10);
glVertex2f(11.5,8);
glEnd();
glPopMatrix();
//DOOR
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(9,8);
glColor3f(0.0,1.0,0.0);

glVertex2f(9,9.5);
glVertex2f(11,9.5);
glVertex2f(11,8);
glEnd();
glPopMatrix();

//TOP WINDOW1

glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(6.1,12.4);
glVertex2f(6.1,15.9);
glVertex2f(8.7,15.9);
glVertex2f(8.7,12.4);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(6.3,14.5);
glVertex2f(6.3,15.8);
glVertex2f(8.5,15.8);
glVertex2f(8.5,14.5);
glEnd();
glPopMatrix();



//TOP WINDOW2
glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(9,14.5);
glVertex2f(9,15.8);
glVertex2f(11,15.8);
glVertex2f(11,14.5);
glEnd();
glPopMatrix();

//TOP WINDOW3

glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(11.3,12.4);
glVertex2f(11.3,15.9);
glVertex2f(13.7,15.9);
glVertex2f(13.7,12.4);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(11.5,14.5);
glVertex2f(11.5,15.8);
glVertex2f(13.5,15.8);
glVertex2f(13.5,14.5);
glEnd();
glPopMatrix();

//TOP WINDOW4
glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(6.3,12.5);
glVertex2f(6.3,13.8);
glVertex2f(8.5,13.8);
glVertex2f(8.5,12.5);
glEnd();
glPopMatrix();
//TOP WINDOW5



glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(9,12.5);
glVertex2f(9,13.8);
glVertex2f(11,13.8);
glVertex2f(11,12.5);
glEnd();
glPopMatrix();

//TOP WINDOW6
glPushMatrix();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(11.5,12.5);
glVertex2f(11.5,13.8);
glVertex2f(13.5,13.8);
glVertex2f(13.5,12.5);
glEnd();
glPopMatrix();
}

void output1(char s[])
{

int k;

for(k=0;k<strlen(s);k++)
{
glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
}
}
/*
void text(int text_x, int text_y,const char *m)
{
	glRasterPos3i(text_x,text_y,0);
	for (int i =0 ;i <strlen(m);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,m[i]);
	}
}
*/

void bench()
{
//st
glPushMatrix();
glColor3f(1.0,0.5,0.2);
glPointSize(25);

glBegin(GL_POINTS);
glVertex2f(1,6.5);
glVertex2f(1,6.5);

glVertex2f(3,6.5);
glVertex2f(3,6.5);


glVertex2f(15,6.5);
glVertex2f(15,6.5);

glVertex2f(17,6.5);
glVertex2f(17,6.5);

glEnd();
glPopMatrix();
}
benchtop()
{
glPushMatrix();
glLineWidth(30.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(0.2,6.9);
glVertex2f(4,6.9);

glVertex2f(14,6.9);
glVertex2f(18,6.9);
glEnd();
glPopMatrix();
}
void lamp()
{
//VER LINES lamp
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(1,4.8);
glVertex2f(1,8);
glVertex2f(3,4.8);
glVertex2f(3,8);
glVertex2f(5,4.8);
glVertex2f(5,8);

glVertex2f(15,4.8);
glVertex2f(15,8);
glVertex2f(17,4.8);
glVertex2f(17,8);
glVertex2f(19,4.8);
glVertex2f(19,8);
glEnd();
glPopMatrix();
//bulb
glPushMatrix();
glColor3f(1.0,1.0,0.0);
glBegin(GL_POINTS);
glPointSize(30);
glVertex2f(1,8);
glVertex2f(3,8);
glVertex2f(5,8);

glVertex2f(15,8);
glVertex2f(17,8);
glVertex2f(19,8);

glEnd();
glPopMatrix();


//HOR LINES
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
glVertex2f(0,4.8);
glVertex2f(20,4.8);

glEnd();
glPopMatrix();

}

void slide3(void)
{

glClear(GL_COLOR_BUFFER_BIT);
//Sky
glColor3f(0.0,0.5,1.0);
glBegin(GL_POLYGON);
glVertex2i(0,10);
glColor3f(0.0,0.0,0.0);
glVertex2i(0,20);
glColor3f(1.0,1.0,1.0);
glVertex2i(20,20);
glColor3f(0.0,0.0,0.0);
glVertex2i(20,10);
glEnd();


//hotelname
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,.4);
glVertex2f(7,17.5);
glVertex2f(7,19);
glVertex2f(13,19);
glVertex2f(13,17.5);
glEnd();
glPopMatrix();

//light grey
glColor3f(0.8,0.8,0.8);
glBegin(GL_POLYGON);
glVertex2f(0,7.5);
glVertex2f(0,10);
glVertex2f(20,10);
glVertex2f(20,7.5);
glEnd();



//greem
glColor3f(0.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,6);
glVertex2f(0,7.5);
glVertex2f(20,7.5);
glVertex2i(20,6);
glEnd();

//bench
glPushMatrix();
glTranslatef(0,0,0);
bench();
glPopMatrix();

//benchtop
glPushMatrix();
glTranslatef(0,0,0);
benchtop();
glPopMatrix();
//road
glColor3f(0.5,0.5,0.5);
glBegin(GL_POLYGON);
glVertex2i(0,0);
glVertex2i(0,3);
glVertex2i(20,3);
glVertex2i(20,0);
glEnd();


//road white paint
glPushMatrix();
glTranslatef(0,0,0);
whitepaint1();
glPopMatrix();


//brown border
glColor3f(1.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2i(0,3);
glVertex2f(0,4.8);
glVertex2f(20,4.8);
glVertex2i(20,3);
glEnd();

//hotel
glPushMatrix();
glTranslatef(0,0,0);
hotel();
glPopMatrix();



//comp

glPushMatrix();
glTranslatef(0,0,0);
lamp();
glPopMatrix();






//van

glPushMatrix();
glTranslatef(0-x3,0,0);
van1();
glPopMatrix();

//van tire
glPushMatrix();
glTranslatef(0-x3,0,0);
vtyre1();
glPopMatrix();
glPushMatrix();
glTranslatef(3-x3,0,0);
vtyre1();
glPopMatrix();




glColor3f(0.5,0,0.2);
//glRasterPos2i(100,180);
//glutBitmapCharacter(GLUT_BITMAP_8_BY_13,'A');
char buff[30]="HOTEL EMPIRE";
glPushMatrix();
glTranslatef(7.5,18.2,0);
glScalef(0.005,0.005,1.0);
glRotatef(x,1.0,1.0,0.0);
output1(buff);
glPopMatrix();
/*
glPushMatrix();
glColor3f(0.0,0.0,0.0);
	text(8,18,"HOTEL EMPIRE");
glPopMatrix();
*/
//man
glPushMatrix();
glTranslatef(x3,y3,0);
	man3();
glPopMatrix();

//glColor3f(0,0,0);



//CAR

glPushMatrix();
glTranslatef(0,0,0);
car1();
glPopMatrix();



//TIER
glPushMatrix();
glTranslatef(0,0,0);
tyre1();
glPopMatrix();
glPushMatrix();
glTranslatef(3,0,0);
tyre1();
glPopMatrix();

//cloud
glPushMatrix();
glTranslatef(0,0,0);
cloud1();
glPopMatrix();

glFlush();


}

//3

//

void keyboard(unsigned char key,int x,int y)
{
	if(key=='a' || key=='A'){
		glutDisplayFunc(slide1);
		timer_slide1(0);
	}

	else if(key=='b' || key=='B'){
		glutDisplayFunc(slide2);
		timer_slide2(0);
	}

	else if(key=='c' || key=='C'){
		timer_slide3(0);
		glutDisplayFunc(slide3);
	}
	glutPostRedisplay();
}

int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(200,00);
glutCreateWindow("MINI Project ");
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0,20.0,0.0,20.0,0.0,20.0);
glutDisplayFunc(frontscreen);
glutKeyboardFunc(keyboard);
glutMainLoop();

}
//font
