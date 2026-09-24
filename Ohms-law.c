#include <stdio.h>

int main()	{
  float current,resistance,voltage;

printf(" GEC Sheikpura - ohm's Law\n");

printf("current (I) in Ampere daalo: ");
scanf("%f" ,&current);

printf("Resistance (R) in ohm daalo: ");
scanf("%f" , & resistance);

voltage = current * resistance;

printf(" voltage (v) = %.2f vol\n", voltage);

return O;
}
