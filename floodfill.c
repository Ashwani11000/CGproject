#include<stdio.h>
#include<stdlib.h>
 #include <GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<math.h>
#include<string.h>

int sides;
int ar[][2];
static int count=0,flag=0;
int succ=1,succ1=1,ins_succ=1;
int choice,item,key;
float color[4][3]={{1.0,1.0,1.0},{0.8,0.0,0.0,},{0.0,0.0,0.0},{0.0,0.0,0.8}};
static int window;
static int menu_id;
static int submenu_id;
static int value=0;
const double PI=3.14159265358979323846;
double r=100;
  int ww = 1000, wh = 650;
  float bgCol[3] = {0.2, 0.4,0.0};
  float intCol[3] = {1.0,0.0,0.0};
  float fillCol[3] = {0.0,0.0,0.0};

void draw_sides()
{
printf("\nENTER THE NUMBER OF SIDES\n");
             scanf("%d",&sides);
glClearColor(0.2, 0.4,0.0, 1.0);
             //glClear(GL_COLOR_BUFFER_BIT);
             glColor3f(1.0, 0.0, 0.0);
             //drawPolygon(300,300,400,400);
             glBegin(GL_POLYGON);
             for(int i=0;i<sides;i++){
            double angle=i*2*PI/sides;
            glVertex2d(400+r*cos(angle),300+r*sin(angle));
                }
            glEnd();
}

void draw_polygon()
{
int i,j,nsides;
//glClearColor(0.2, 0.4,0.0, 1.0);
            // glClear(GL_COLOR_BUFFER_BIT);
             glColor3f(1.0, 0.0, 0.0);
printf("\nENTER THE NUMBER OF SIDES\n");
             scanf("%d",&nsides);
		printf("ENTER THE CO-ORDINATES\n");
for(i=1;i<=nsides;i++)
for(j=1;j<=2;j++)
scanf("%d",&ar[i][j]);
             //drawPolygon(300,300,400,400);
             glBegin(GL_POLYGON);
             for(int i=1;i<=nsides;i++)
	
glVertex2i(ar[i][1],ar[i][2]);
		
            glEnd();


}
      void setPixel(int pointx, int pointy, float f[3])
      {
             glBegin(GL_POINTS);
                  glColor3fv(f);
                  glVertex2i(pointx,pointy);
             glEnd();
             glFlush();
      }
      void getPixel(int x, int y, float pixels[3])
      {
           glReadPixels(x,y,1.0,1.0,GL_RGB,GL_FLOAT,pixels);
      }
      
void intro()
{
	glColor3ub(147,105,203);
glBegin(GL_POLYGON);
      	glVertex2i(0,650);
	  	glVertex2i(600,650);
      	glVertex2i(800,250);
        glVertex2i(0,250);
glEnd();

glColor3ub(247,185,183);
glBegin(GL_POLYGON);
      	glVertex2i(600,650);
	  	glVertex2i(1000,650);
      	glVertex2i(1000,250);
        glVertex2i(600,250);
glEnd();

glColor3ub(165,195,50);
glBegin(GL_POLYGON);
      	glVertex2i(600,450);
	  	glVertex2i(1000,450);
      	glVertex2i(1000,0);
        glVertex2i(600,0);
glEnd();

glColor3ub(245,95,50);
glBegin(GL_POLYGON);
      	glVertex2i(0,450);
	  	glVertex2i(800,450);
      	glVertex2i(800,0);
        glVertex2i(0,0);
glEnd();
}
void texti()
{
char string[]="COMPUTER GRAPHICS MINI PROJECT";
void *font=GLUT_BITMAP_TIMES_ROMAN_24;
int k;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(300,600,0);
for(k=0;k<strlen(string);k++)
        glutBitmapCharacter(font,string[k]);

char string1[]="FLOOD-FILL ALGORITHM";
void *font1=GLUT_BITMAP_TIMES_ROMAN_24;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(330,430,0);
for(k=0;k<strlen(string1);k++)
        glutBitmapCharacter(font1,string1[k]);

char string2[]="BY";
void *font2=GLUT_BITMAP_TIMES_ROMAN_24;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(700,250+100,0);
for(k=0;k<strlen(string2);k++)
        glutBitmapCharacter(font2,string2[k]);

char string3[]="ASHWANI VERMA(1JS16CS021)";
void *font3=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(700,220+100,0);
for(k=0;k<strlen(string3);k++)
        glutBitmapCharacter(font3,string3[k]);

char string4[]="CHANDAN ADHIKARI(1JS16CS032)";
void *font4=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(700,220+60,0);
for(k=0;k<strlen(string4);k++)
        glutBitmapCharacter(font4,string4[k]);

char string5[]="Under the guidance of ";
void *font5=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(200,110,0);
for(k=0;k<strlen(string5);k++)
        glutBitmapCharacter(font5,string5[k]);

char string6[]="Ms.RASHMI B N";
void *font6=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(60,80,0);
for(k=0;k<strlen(string6);k++)
        glutBitmapCharacter(font6,string6[k]);

char string7[]="Asst. Professor";
void *font7=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(60,60,0);
for(k=0;k<strlen(string7);k++)
        glutBitmapCharacter(font7,string7[k]);


char string11[]="Mr.SHARANA B GOWDA";
void *font11=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(300,80,0);
for(k=0;k<strlen(string11);k++)
        glutBitmapCharacter(font6,string11[k]);

char string12[]="Asst. Professor";
void *font12=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(300,60,0);
for(k=0;k<strlen(string12);k++)
        glutBitmapCharacter(font7,string12[k]);

char string8[]="Press Enter to start the show";
void *font8=GLUT_BITMAP_HELVETICA_18;
glColor3f(0.0,0.0,0.0);
glRasterPos3f(670,160,0);
for(k=0;k<strlen(string8);k++)
        glutBitmapCharacter(font8,string8[k]);
}


  void display()
       {
             glClear(GL_COLOR_BUFFER_BIT);
             glClearColor(1.0,1.0,1.0, 1.0);
             //drawPolygon(150,250,200,300);
if(value==1)
{
return;
}
else if(value==2)
{
glColor3f(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(100+300,100+300);
glVertex2f(200+300,100+300);
glVertex2f(200+300,200+300);
glVertex2f(100+300,200+300);
glEnd();
}
else if (value==3)
{
glColor3f(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(400,400);
glVertex2f(600,400);
glVertex2f(500,500);
glEnd();}
else if(value ==4)
{

glColor3f(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(100+300,100+300);
glVertex2f(300+300,100+300);
glVertex2f(300+300,200+300);
glVertex2f(100+300,200+300);
glEnd();
}
else if (value==5)
{
draw_polygon();
value=10;
}

else if (value==6)
{
draw_sides();
value=10;
}
glFlush();
}
void mydisplay(void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
 glClear(GL_COLOR_BUFFER_BIT);
 if(flag==0)
   {
intro();
texti();
}
 if(flag==1)
  display(); 
}


void myKeyboardFunc( unsigned char key, int x, int y )

{
  switch(key)
 {
 case 13:if(flag==0) //Ascii of 'enter' key is 13
    flag=1;
  break;
 case 'y':
fillCol[0]=1.0;
fillCol[1]=1.0;
fillCol[2]=0.0;
break;
 case 'g':
fillCol[0]=0.0;
fillCol[1]=1.0;
fillCol[2]=0.0;
break;
 case 'b':
fillCol[0]=0.0;
fillCol[1]=0.0;
fillCol[2]=1.0;
break;
case 27:
exit(0);
break;
       }
    mydisplay();
}

void reshape(GLsizei w,GLsizei h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	gluOrtho2D(0.0,(GLdouble)w,0.0,(GLdouble)h);
}
     
       void floodfill4(int x,int y,float oldcolor[3],float newcolor[3])
       {
            float color[3];
            getPixel(x,y,color);
            if(color[0]==oldcolor[0] && (color[1])==oldcolor[1] && (color[2])==oldcolor[2])
            {
                     setPixel(x,y,newcolor);
                     floodfill4(x+1,y,oldcolor,newcolor);
                     floodfill4(x-1,y,oldcolor,newcolor);
                  floodfill4(x,y+1,oldcolor,newcolor);
                  floodfill4(x,y-1,oldcolor,newcolor);
             }
       }
       void mouse(int btn, int state, int x, int y)
       {
             if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN)
            {
                     int xi = x;
                     int yi = (wh-y);
                     floodfill4(xi,yi,intCol,fillCol);
             }
       }
       void myinit()
       {
            glViewport(0,0,ww,wh);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0,(GLdouble)ww,0.0,(GLdouble)wh);
            glMatrixMode(GL_MODELVIEW);
       }


void menu(int num)
{
if(num==0)
{
glutDestroyWindow(window);
exit(0);
}
else{
value=num;
//printf("You pressed: %d\n",value);
}
glutPostRedisplay();
}



void createMenu(void)
{
submenu_id=glutCreateMenu(menu);
glutAddMenuEntry("Square",2);
glutAddMenuEntry("Triangle",3);
glutAddMenuEntry("Rectangle",4);
glutAddMenuEntry("Enter co_ordinates",5);
glutAddMenuEntry("Enter sides",6);

menu_id=glutCreateMenu(menu);
glutAddMenuEntry("Clear",1);
glutAddSubMenu("Draw",submenu_id);
glutAddMenuEntry("Quit",0);

glutAttachMenu(GLUT_RIGHT_BUTTON);

}


       int main(int argc, char** argv)
       {
             glutInit(&argc,argv);
             glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
             glutInitWindowSize(ww,wh);
		printf("\n  FLOOD FILL ALGORITHM  \n  PRESS g FOR GREEN \n  PRESS y FOR YELLOW  \n  PRESS b FOR BLUE\n");
             glutCreateWindow("Flood-Fill-Recursive");
	     
             glutDisplayFunc(mydisplay);
             myinit();
             createMenu();
	     glutKeyboardFunc(myKeyboardFunc);
             glutMouseFunc(mouse);
             glutMainLoop();
             return 0;
       }
