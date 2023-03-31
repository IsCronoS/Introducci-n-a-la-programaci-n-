#include <stdio.h>
int main()
{
   int c1,c2,c3,c4;
   float promedio;
   
   printf( "ingresa tus cuatro calificaciones: " );
   scanf( "%d, %d, %d, %d", &c1,&c2,&c3,&c4);
   promedio = (c1+c2+c3+c4)/4.0;
   printf( "Tu promedio es de : %f\n", promedio );
   if (promedio > 6.0)
   printf("Por lo tanto aprobaste c:");
   if (promedio < 6.0)
   printf("Por lo tanto reprobaste :c");
    return 0;