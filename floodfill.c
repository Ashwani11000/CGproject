
 #include <GL/glut.h>
  int ww = 600, wh = 500;
  
      void drawPolygon(int x1, int y1, int x2, int y2)
       {
             glColor3f(1.0, 0.0, 0.0);
             glBegin(GL_POLYGON);
                     glVertex2i(x1, y1);
                  glVertex2i(x1, y2);
                  glVertex2i(x2, y2);
                     glVertex2i(x2, y1);
             glEnd();
             glFlush();
       }
       void display()
       {
             glClearColor(0.2, 0.4,0.0, 1.0);
             glClear(GL_COLOR_BUFFER_BIT);
             drawPolygon(150,250,200,300);
             glFlush();
       }
       
       void myinit()
       {
            glViewport(0,0,ww,wh);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0,(GLdouble)ww,0.0,(GLdouble)wh);
            glMatrixMode(GL_MODELVIEW);
       }
       int main(int argc, char** argv)
       {
             glutInit(&argc,argv);
             glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
             glutInitWindowSize(ww,wh);
             glutCreateWindow("Flood-Fill-Recursive");
             glutDisplayFunc(display);
             myinit();
             glutMainLoop();
             return 0;
       }
