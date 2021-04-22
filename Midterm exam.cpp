#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include<iostream>
using namespace std;
double angle = 0.0f;
GLfloat arm_first_angle = 0.79, arm_second_angle = 2.36;

double cha(int angle)
{
	//printf("%s\n",(double(angle) / 57.2));
	return (angle / 57.2);
}

void first_display()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glPushMatrix();
	glTranslatef(0, 20, 0);
	glRotatef(-90, -1, 0, 0);								//�Q���G�q����(0, 2, 0)�Y���I�A�ޥX�@���u��]-1, 0, 0�^, �Υk�ⴤ��o���u.

		//����
	{
		glColor3f(0, 0, 0.0);
		GLUquadricObj* quadricPtr;							//�s�ؤ@�Ӫ���(���w�q)
		quadricPtr = gluNewQuadric();						//�s�ؤ@�ӤG��������
		gluQuadricDrawStyle(quadricPtr, GLU_FILL);			//���w�G�������һݪ��k�u����
		gluQuadricNormals(quadricPtr, GLU_NONE);
		gluQuadricTexture(quadricPtr, GL_FALSE);
		gluCylinder(quadricPtr, 17, 20, 40, 20, 20);
		glTranslatef(0, 0, 0);
	}

	//�Y
	{
		glPushMatrix();
		glColor3f(0.0, 0.0, 0.0);
		GLUquadricObj* quadricPtr8;
		quadricPtr8 = gluNewQuadric();
		gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
		gluQuadricNormals(quadricPtr8, GLU_NONE);
		gluQuadricTexture(quadricPtr8, GL_FALSE);
		gluSphere(quadricPtr8, 17, 50, 15);
		glPopMatrix();
	}

	//�U�b��
	{
		glPushMatrix();
		glColor3f(0, 0, 0);
		glTranslatef(0, 0, 40);
		GLUquadricObj* quadricPtr8;
		quadricPtr8 = gluNewQuadric();
		gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
		gluQuadricNormals(quadricPtr8, GLU_NONE);
		gluQuadricTexture(quadricPtr8, GL_FALSE);
		gluSphere(quadricPtr8, 20, 50, 15);
		glPopMatrix();

	}

	//���}
	{

		//���}
		{
			glPushMatrix();
			glTranslatef(-10, 0, 50);
			glRotatef(angle * 0.5, 0, 1, 0);
			glRotatef(-15, 0, 1, 0);							//�Q���G�q����(0, 2, 0)�Y���I�A�ޥX�@���u��]-1, 0, 0�^, �Υk�ⴤ��o���u.
			GLUquadricObj* quadricPtr;							//�s�ؤ@�Ӫ���(���w�q)
			quadricPtr = gluNewQuadric();						//�s�ؤ@�ӤG��������
			gluQuadricDrawStyle(quadricPtr, GLU_FILL);			//���w�G�������һݪ��k�u����
			gluQuadricNormals(quadricPtr, GLU_NONE);
			gluQuadricTexture(quadricPtr, GL_FALSE);
			gluCylinder(quadricPtr, 8, 6, 15, 10, 10);
			glTranslatef(0, 0, 0);
			glPopMatrix();
		}

		//���}�x
		{
			glPushMatrix();
			glColor3f(0.0, 0.0, 0.0);
			glTranslatef(-10, 0, 50);
			glRotatef(angle * 0.5, 0, 1, 0);
			glTranslatef(-4, 0, 15);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 5.5, 50, 15);
			glPopMatrix();
		}

	}

	//�k�}
	{
		glPushMatrix();
		//�k�}
		{
			glPushMatrix();
			glTranslatef(10, 0, 50);
			glRotatef(angle * -0.5, 0, 1, 0);
			glRotatef(15, 0, 1, 0);								//�Q���G�q����(0, 2, 0)�Y���I�A�ޥX�@���u��]-1, 0, 0�^, �Υk�ⴤ��o���u.
			GLUquadricObj* quadricPtr;							//�s�ؤ@�Ӫ���(���w�q)
			quadricPtr = gluNewQuadric();						//�s�ؤ@�ӤG��������
			gluQuadricDrawStyle(quadricPtr, GLU_FILL);			//���w�G�������һݪ��k�u����
			gluQuadricNormals(quadricPtr, GLU_NONE);
			gluQuadricTexture(quadricPtr, GL_FALSE);
			gluCylinder(quadricPtr, 8, 6, 15, 10, 10);
			glTranslatef(0, 0, 0);
			glPopMatrix();
		}

		//���}�x
		{
			glPushMatrix();
			glColor3f(0.0, 0.0, 0.0);
			glTranslatef(10, 0, 50);
			glRotatef(angle * -0.5, 0, 1, 0);
			glTranslatef(4, 0, 15);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 5.5, 50, 15);
			glPopMatrix();
		}
		glPopMatrix();
	}
	//�k��
	{
		//�k��
		glPushMatrix();
		{
			glPushMatrix();
			glTranslatef(15, 0, 10);
			glRotatef(angle, 0, 1, 0);
			glRotatef(120, 0, 1, 0);							//�Q���G�q����(0, 2, 0)�Y���I�A�ޥX�@���u��]-1, 0, 0�^, �Υk�ⴤ��o���u.
			GLUquadricObj* quadricPtr;							//�s�ؤ@�Ӫ���(���w�q)
			quadricPtr = gluNewQuadric();						//�s�ؤ@�ӤG��������
			gluQuadricDrawStyle(quadricPtr, GLU_FILL);			//���w�G�������һݪ��k�u����
			gluQuadricNormals(quadricPtr, GLU_NONE);
			gluQuadricTexture(quadricPtr, GL_FALSE);
			gluCylinder(quadricPtr, 5, 3, 20, 20, 20);
			glPopMatrix();
		}
		//�k��x
		{
			glPushMatrix();
			glTranslatef(15, 0, 10);
			glRotatef(angle, 0, 1, 0);
			glTranslatef(cos(cha(60)) * 38, 0, -13 * sin(cha(60)));
			glRotatef(60, 0, -1, 0);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 4, 50, 15);
			glPopMatrix();
		}
		glPopMatrix();
	}

	//����
	{
		glPushMatrix();
		//����
		{
			glPushMatrix();
			glTranslatef(-15, 0, 10);
			glRotatef(-angle, 0, 1, 0);
			glRotatef(120, 0, -1, 0);							//�Q���G�q����(0, 2, 0)�Y���I�A�ޥX�@���u��]-1, 0, 0�^, �Υk�ⴤ��o���u.
			GLUquadricObj* quadricPtr;							//�s�ؤ@�Ӫ���(���w�q)
			quadricPtr = gluNewQuadric();						//�s�ؤ@�ӤG��������
			gluQuadricDrawStyle(quadricPtr, GLU_FILL);			//���w�G�������һݪ��k�u����
			gluQuadricNormals(quadricPtr, GLU_NONE);
			gluQuadricTexture(quadricPtr, GL_FALSE);
			gluCylinder(quadricPtr, 5, 3, 20, 20, 20);
			glPopMatrix();
		}

		//����x
		{
			glPushMatrix();
			glTranslatef(-15, 0, 10);
			glRotatef(-angle, 0, 1, 0);
			glTranslatef(cos(cha(120)) * 38, 0, -13 * sin(cha(120)));
			glRotatef(120, 0, -1, 0);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 4, 50, 15);
			glPopMatrix();
		}
		glPopMatrix();

	}

	//���զ�
	{
		{
			glColor3f(0, 0, 0);
			glPushMatrix();
			glTranslatef(-13, 0, -13);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 5, 50, 15);
			glPopMatrix();
		}
		{
			glColor3f(1, 1, 1);
			glPushMatrix();
			glTranslatef(-13, 0, -13);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 3, 50, 15);
			glPopMatrix();
		}
	}

	//�k�զ�
	{
		{
			glColor3f(0, 0, 0);
			glPushMatrix();
			glTranslatef(13, 0, -13);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 5, 50, 15);
			glPopMatrix();
		}
		{
			glColor3f(1, 1, 1);
			glPushMatrix();
			glTranslatef(13, 0, -13);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 3, 50, 15);
			glPopMatrix();
		}
	}

	//�k��
	{
		glPushMatrix();
		{
			glColor3f(1, 1, 1);
			glPushMatrix();
			glTranslatef(5.5, 0, -4.5);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 3, 50, 15);
			glPopMatrix();
		}
		{
			glColor3f(0, 0, 0);
			glPushMatrix();
			glRotatef(fabs(angle) * 0.8, 0, 0, 1);
			glTranslatef(6.9, 0, -4.7);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 1, 50, 15);
			glPopMatrix();
		}
		glPopMatrix();
	}

	//����
	{
		{
			glColor3f(1, 1, 1);
			glPushMatrix();
			glTranslatef(-5.5, 0, -4.5);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 3, 50, 15);
			glPopMatrix();
		}
		{
			glColor3f(0, 0, 0);
			glPushMatrix();
			glRotatef(-1 * fabs(angle) * 0.8, 0, 0, 1);
			glTranslatef(-6.9, 0, -4.7);
			GLUquadricObj* quadricPtr8;
			quadricPtr8 = gluNewQuadric();
			gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
			gluQuadricNormals(quadricPtr8, GLU_NONE);
			gluQuadricTexture(quadricPtr8, GL_FALSE);
			gluSphere(quadricPtr8, 1, 50, 15);
			glPopMatrix();
		}
	}

	//���|��
	{
		glColor3f(1, 0, 0);
		glPushMatrix();
		glTranslatef(-15, 0, 3);
		GLUquadricObj* quadricPtr8;
		quadricPtr8 = gluNewQuadric();
		gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
		gluQuadricNormals(quadricPtr8, GLU_NONE);
		gluQuadricTexture(quadricPtr8, GL_FALSE);
		gluSphere(quadricPtr8, 5, 50, 15);
		glPopMatrix();
	}

	//�k�|��
	{
		glColor3f(1, 0, 0);
		glPushMatrix();
		glTranslatef(15, 0, 3);
		GLUquadricObj* quadricPtr8;
		quadricPtr8 = gluNewQuadric();
		gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
		gluQuadricNormals(quadricPtr8, GLU_NONE);
		gluQuadricTexture(quadricPtr8, GL_FALSE);
		gluSphere(quadricPtr8, 5, 50, 15);
		glPopMatrix();
	}

	//�L��(�j)
	{
		glPushMatrix();
		glColor3f(1, 1, 1);
		glTranslatef(0, 0, 8);
		GLUquadricObj* quadricPtr8;
		quadricPtr8 = gluNewQuadric();
		gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
		gluQuadricNormals(quadricPtr8, GLU_NONE);
		gluQuadricTexture(quadricPtr8, GL_FALSE);
		gluSphere(quadricPtr8, 10, 50, 15);
		glPopMatrix();
	}

	//��l
	{
		glColor3f(0.31, 0.31, 0.31);
		glPushMatrix();
		glTranslatef(0, 0, 2);
		GLUquadricObj* quadricPtr8;
		quadricPtr8 = gluNewQuadric();
		gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
		gluQuadricNormals(quadricPtr8, GLU_NONE);
		gluQuadricTexture(quadricPtr8, GL_FALSE);
		gluSphere(quadricPtr8, 2, 50, 15);
		glPopMatrix();
	}

	//�L��(�p)
	{
		glColor3f(0, 0, 0);
		glPushMatrix();
		glTranslatef(0, 0, 10);
		GLUquadricObj* quadricPtr8;
		quadricPtr8 = gluNewQuadric();
		gluQuadricDrawStyle(quadricPtr8, GLU_FILL);
		gluQuadricNormals(quadricPtr8, GLU_NONE);
		gluQuadricTexture(quadricPtr8, GL_FALSE);
		glScalef(2, 0.5, 0.5);
		gluSphere(quadricPtr8, 3, 50, 15);
		glPopMatrix();
	}

	//�Ǹ�
	{
		glColor3f(1.0, 0.0, 0.0);
		{
			glBegin(GL_LINE_STRIP);
			glVertex3f(45.0, 0, 45.0);
			glVertex3f(40.0, 0, 45.0);
			glVertex3f(40.0, 0, 40.0);
			glVertex3f(45.0, 0, 40.0);
			glVertex3f(45.0, 0, 45.0);
			glVertex3f(45.0, 0, 50.0);
			glVertex3f(40.0, 0, 50.0);
			glEnd();
			glBegin(GL_LINE_STRIP);
			glVertex3f(55.0, 0, 40);
			glVertex3f(50.0, 0, 40);
			glVertex3f(50.0, 0, 50);
			glVertex3f(55.0, 0, 50);
			glVertex3f(55.0, 0, 45);
			glVertex3f(50.0, 0, 45);
			glEnd();
			glBegin(GL_LINE_STRIP);
			glVertex3f(65, 0, 40);
			glVertex3f(60, 0, 40);
			glVertex3f(60, 0, 50);
			glVertex3f(65, 0, 50);
			glVertex3f(65, 0, 40);
			glEnd();
		}
	}
	glPopMatrix();
	
	glFlush();
}

void init_render()
{
	glMatrixMode(GL_PROJECTION);			//�n��GL_PROJECTION�Ҧ��~�i�H�����
	glLoadIdentity();
	glOrtho(-80, 80, -80, 80, -80, 80);
	glMatrixMode(GL_MODELVIEW);
}

void mouseFunc(int button, int state, int x, int y)
{

}

void keyboardFunc(unsigned char key, int x, int y)
{
	printf("%d\n", key);
	glutPostRedisplay();

}
int k = 1;
void idle()
{


	if (k)
	{
		angle += 0.1;
	}
	else
	{
		angle -= 0.1;
	}
	if (angle > 25)
	{
		angle = 24;
		k = 0;
	}
	if (angle < -70)
	{
		angle = -69;
		k = 1;
	}
	glutPostRedisplay();

}

void ChangeSize(GLsizei weigth, GLsizei heigth)
{
	GLfloat aspectRatio;
	if (heigth == 0)
	{
		heigth = 1;
	}

	glViewport(0, 0, weigth, heigth);	//�N�i���d��]�������j�p

	glMatrixMode(GL_PROJECTION);		//���]�y�Шt�ά���v�Ҧ�
	glLoadIdentity();

	aspectRatio = (GLfloat)weigth / (GLfloat)heigth;	//�إ߰ŵ��ϰ�

	if (weigth <= heigth)
	{
		glOrtho(-80, 80, -80 / aspectRatio, 80 / aspectRatio, 80, -80);
	}
	else
	{
		glOrtho(-80.0 * aspectRatio, 80.0 * aspectRatio, -80, 80, 80, -80);
	}
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("midtest");
	glutDisplayFunc(first_display);
	init_render();
	glutMouseFunc(mouseFunc);
	glutKeyboardFunc(keyboardFunc);
	glutReshapeFunc(ChangeSize);
	glutIdleFunc(idle);

	glutMainLoop();
}