#include <stdio.h>
#include <math.h>

double square_root(double);

int main () {

   double x =  square_root(4.5);

    printf("%f \n", x);
    
   return(0);
}

double square_root(double x){

    double result = sqrt(x);

    return result;
}
