//
//
// Karim Shawky
//
// ID: 900221948	
//

#include <iostream>
#include <cstdlib>
#include "class.h"
using namespace std;

int main()
{
	srand(time(NULL));
	int n = 200, m = 20;
	float *A = new float [n*2];
	float *B = new float [n*2];
	float *p = new float [m*2];
	float Ax, Ay, Bx, By;
	
	for (int i = 0; i < n*2; i++)
	{
		A[i] = (rand() % 19) + 71;
	}
	for (int j = 0; j < n*2; j++)
	{
		B[j] = (rand() % 19) + 21;
	}
	
	point CenterA, CenterB, Point;
	
	for (int k = 0; k < m*2; k++)
	{
		p[k] = (rand() % 94) + 6;
		p[k + 1] = (rand() % 94) + 6;
	}
	CenterA.Center(A,n);
	Ax = CenterA.GetX();
	Ay = CenterA.GetY();
	cout << "The coordinates of the center of cluster A are (" << Ax << "," << Ay << ")" << endl << endl;
	CenterB.Center(B,n);
	Bx = CenterB.GetX();
	By = CenterB.GetY();
	cout << "The coordinates of the center of cluster B are (" << Bx << "," << By << ")" << endl << endl;
	Point.Belong(Ax, Ay, Bx, By, p, m*2);
	return 0;
}
	
