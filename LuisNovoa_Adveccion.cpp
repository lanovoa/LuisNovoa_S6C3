#include <iostream>
#include <cstdlib>
#include <math.h>

using std::cout;
using std::endl;

int main()
  {
  double nx = 80;
  double nt = 3.0;
  double dx = 2.0/80;
  double dt  = 0.5*(dx/1.0);
  double tf = nt*dt;
  double u_pasado[nx] = {};
  double u_presente[nx] = {};
  int i, j, k;
  for(i=1; i<nx; i++) 
    {
    if(0.75<(i*dx)<1.25)
      {
      u_pasado[i-1] = 1.0
      }
   for(j=2; j<(nx-1); j++)
      {
      u_presente[j] = dt*(-1.0/dx)*(u_pasado[j]-u_pasado[j-1])+u_pasado[j-1]
      }
   for(k=2; k<(nx-1); k++)
      {
      u_pasado[k-1] = u_presente[k]
      }
    }
  return 0;
  }
