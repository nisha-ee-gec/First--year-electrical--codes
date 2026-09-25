//GEC SHEIKPURA-First year electrical 
// Day2 - series and parallel Resistance
// created by :Nisha

#include <stdio.h>

int main() {
  float r1, r2;
float r_series, r_parallel;

printf("GEC sheikpura -Day 2\n");

// User se value lena
printf("pehla resistance R1(ohm me) daalo: ");
scanf("%f" ,&r1);

printf("Dusra resistence R2(ohm me) daalo: ");
scanf("%f" ,&r2);

// calculation
r_ series = r1 + r2;
r_parallel =(r1 * r2) / (r1 + r2);

// Result print
printf("\n---Result---n");
printf("series me total resistance = %. 2f ohm\n",r_series);
printf("parallel me total resistance = %.2f ohm\n",r_parallel);

return O;

}
