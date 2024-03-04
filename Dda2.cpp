#include<GL/glut.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
float x1,x2,y1,y2;

void SimpleLine();
void DashedLine();
void DottedLine();

float dx,dy,length,x,y,Xin,Yin,k;
void display()
{
  cout<<"\nSimple Line\n";
  SimpleLine();
  cout<<"\nDashed Line\n";
  DashedLine();
  cout<<"\nDotted Line\n";
  DottedLine();
}

void myinit()
{
  glClearColor(1.0,1.0,1.0,1.0);  
  glColor3f(1.0,0.0,0.0);
  glPointSize(40.0);
  gluOrtho2D(0.0,499.0,0.0,499.0);
}                                 

int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(0,0);
  glutCreateWindow("Points");
  glutDisplayFunc(display);
  
  myinit();
  glutMainLoop();
}                          
