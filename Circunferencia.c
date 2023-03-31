#include <stdio.h>

int main()
{
   float r, longitud;
   double superficie;
   
   printf( "Introduzca el radio: " );
   scanf( "%f", &r);

   superficie = 3.1416 * r * r;
   longitud = r * 3.1416 * 2;

   printf( "La superficie del circulo es de: %lf\n", superficie );
   printf( "La longitud del circulo es de: %f\n", longitud );
   return 0;
}