#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]){
    double ci= atof(argv[1]);
   int t= atoi(argv[2]);
   double tdi= atof(argv[3]);
   int n=12;
   int f=ci*pow(1+tdi/n, n*t);
   printf("El capital final es");
   printf("%f",f);
    return 0;
}