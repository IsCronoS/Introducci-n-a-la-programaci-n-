#include <stdio.h>

int main()
{
   float metros;
   double Ts, Vms, Vkh;
   int minutos, segundos, centesimas;
   printf("Dame la distancia que recorriste expresada en metros\n");
   scanf ("%f", &metros);
   
   printf( "Dame los minutos, segundos y centesimas (en ese orden respectivamente) en los que recorriste : %f", metros );
   printf(" metros\n");
   scanf( "%d, %d, %d", &minutos, &segundos, &centesimas);

   Ts = (minutos*60)+segundos+(centesimas/100);
   Vms = metros/Ts;
   Vkh = (Vms*3600)/1000;

   printf( "Tu velocidad fue de: %lf ", Vkh );
   printf( "kilometros por hora.");
   return 0;
}