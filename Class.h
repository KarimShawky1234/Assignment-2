//
//
// Karim Shawky
//
// ID: 900221948	
//

#ifndef class_h
#define class_h
#include <cmath>
using namespace std;

class point
{
private:
   float X, Y;
public:
   void constructor()
       {
	      X = 0.0;
		  Y = 0.0;
	   }
   void SetX(float num)
       {
          X = num;
	   }
   float GetX()
       {
          return X;
       }
   void SetY(float num)
       {
          Y = num;
	   }
   float GetY()
       {
          return Y;
       }	   
   void DisplayPoint()
   {
	   cout << "The current point is (" << X << "," << Y << ")";
   }
   void Distance(float p[])
   {
	   float D;
	   D = sqrt(pow(p[0] - X, 2) + pow(p[1] - Y, 2)); 
	   cout << "The distance between the current point and p is " << D;
   }
   void Center(float *C, int n)
   {
	   float x, y;
	   float sumX = 0.0, sumY = 0.0;
	   for (int i = 0; i < n; i+=2)
	   {
		   sumX += C[i];
	   }
	   x = sumX / (n/2);
	   for (int j = 1; j <= n; j+=2)
	   {
		   sumY += C[j];
	   }
	   y = sumY / (n/2);
	   SetX(x);
	   SetY(y);
   }
   void Belong(float Ax, float Ay, float Bx, float By, float p[], float m)
   {
	   for (int i = 0; i < m; i+=2)
	   {
	      if (sqrt((pow(Ax - p[i], 2)) + (pow(Ay - p[i+1]), 2)) > sqrt((pow(Bx - p[i], 2)) + (pow(By-p[i+1])) ))   
	      {
		      cout << "The point (" << p[i] << "," << p[i+1] << ") belongs to cluster B" << endl << endl;
	      }
	      else
	      {
              cout << "The point (" << p[i] << "," << p[i+1] << ") belongs to cluster A" << endl << endl;	
	      }
	   }
   }
   
};
#endif