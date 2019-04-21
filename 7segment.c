#include<GL/glut.h>
#include<stdio.h>
#include<string.h>

float wh = 1020, ww = 1080;
int initflag = 0;
int tenflag = 0;

void writeDistance(char *text, int x, int y)
{	

    glRasterPos2i(x,y);
    int len = strlen(text);
    for(int i = 0; i < len; i++)
    { 
        glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18 , text[i]);
    }
    glFlush();

}

void about_us()
{	
	glColor3f(1.0, 0.30, 0.0);
	writeDistance("VIVEKANANDA COLLEGE OF ENGINEERING AND TECHNOLOGY PUTTUR", 300, 550);
	glColor3f(0.0, 0.0, 1.0);
	writeDistance("( DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING )", 350, 520);
	writeDistance("COMPUTER GRAPHICS LABORATORY WITH MINI PROJECT (15CSL68) ", 320, 480);

	glColor3f(1.0, 0.0, 0.0);
	writeDistance("SEVEN SEGMENT DISPLAY SIMULATION", 450, 400);

	glColor3f(1.0, 0.50, 0.50);
	writeDistance("PRESS ' ENTER-KEY ' TO CONTINUE", 900,150);
	
	glColor3f(1.0, 0.30, 0.50);
	writeDistance("SUBMITTED BY", 100,210);
	glColor3f(1.0, 0.2, 0.0);
	writeDistance("NAME 1 (USN)", 100,180);
	writeDistance("NAME 2 (USN)", 100,150);
}


void myInit()
{	
	
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0, ww, 0, wh);
		glMatrixMode(GL_MODELVIEW);
		
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f );
		 
		glLineWidth(20);
		
		
}

void init_display() 
{
	if(initflag == 1){

		 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			
			
			
			
			glBegin(GL_POLYGON);
				glColor3f(0.5, 0.5, 0.5);
				glVertex2f(ww-(ww/1.22), wh-(wh/1.138));
				glVertex2f(ww-(ww/4.1), wh-(wh/1.138));
				glVertex2f(ww-(ww/4.1), wh-(wh/1.138)+(wh/1.5));
				glVertex2f(ww-(ww/1.22), wh-(wh/1.138)+(wh/1.5));
			glEnd();

			
			glBegin(GL_LINES);
				glColor3f(1.0, 1.0, 0.0);
				glVertex2f(ww-(ww/1.22), wh-(wh/1.138));
				glVertex2f(ww-(ww/4.1), wh-(wh/1.138));
				glVertex2f(ww-(ww/4.1), wh-(wh/1.138));
				glVertex2f(ww-(ww/4.1), wh-(wh/1.138)+(wh/1.5));
				glVertex2f(ww-(ww/4.1), wh-(wh/1.138)+(wh/1.5));
				glVertex2f(ww-(ww/1.22), wh-(wh/1.138)+(wh/1.5));
				glVertex2f(ww-(ww/1.22), wh-(wh/1.138)+(wh/1.5));
				glVertex2f(ww-(ww/1.22), wh-(wh/1.138));
			glEnd();
			
			glColor3f(0.8, 1.0, 1.0);
			
			glBegin(GL_LINES);
				
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
			glEnd(); 
			
			glBegin(GL_LINES);

				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/10.2)); //e

			glEnd(); 
	
		 glLoadIdentity();
		 glFlush();
		
		}else{
	
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		about_us();
		glFlush();
	}	        
}




void myReshape(GLsizei w, GLsizei h)
{

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, 0, h);
	glMatrixMode(GL_MODELVIEW);
	glViewport(0, 0, w, h);
	ww = w;
	wh = h;
}

void displayDig(int dig){
	
	
		
	

	if(tenflag==1 && dig == 48){
			tenflag=0;

			glBegin(GL_LINES);

				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/2.0), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.1), wh-(wh/1.138)+(wh/10.2)); //e

			glEnd(); 
			glFlush();
			
	}else{
			tenflag=0;
			//displayDig(dig);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			myInit();
			init_display();
			glColor3f(1.0, 0.0, 0.0);
		
	switch(dig){
	
		case 48: //0
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
			glEnd(); 
				glFlush();
			break;

		case 49: //1
			tenflag=1;
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
			glEnd();  
				glFlush();
			break;
			
		case 50: //2
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
			glEnd(); 
				glFlush();
			break;
			
		case 51://3
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
			glEnd(); 
				glFlush();
			break;
			
		case 52://4
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
			glEnd(); 
				glFlush();
			break;
		
		case 53://5
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
			glEnd(); 
				glFlush();
			break;
			
		case 54: //6
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
			glEnd(); 
				glFlush();
			break;
			
		case 55: //7
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
			glEnd(); 
				glFlush();
			break;
			
		case 56: //8
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
			glEnd(); 
				glFlush();
			break;
		
		case 57: //9
			
			glBegin(GL_LINES);
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
				glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
				glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
			glEnd(); 
				glFlush();
			break;
			
		default: return;
	}
	}

}
				
void begin(unsigned char key, int x, int y)
{
	//printf("%d",key);

	if((int)key == 13){
		initflag=1;
		init_display();
		myInit();

	}else if(initflag==1){
	
		displayDig(key);
	}
}

//main function 
int main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitWindowSize(ww, wh);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("7-segment display");
	myInit();
	glutReshapeFunc(myReshape);
	glutKeyboardFunc(begin);
	glutDisplayFunc(init_display);
	glutMainLoop();
	return 0;

}



/*
glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//a
glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/10.2));//b
glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //c
glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/1.5)-(wh/3)); //d
glVertex2f(ww-(ww/1.22)+(ww/10.8), wh-(wh/1.138)+(wh/10.2)); //e
glVertex2f(ww-(ww/1.22)+(ww/3.6), wh-(wh/1.138)+(wh/10.2)); //f
*/
				

