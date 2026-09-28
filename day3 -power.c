// Day 3 - Power Calculation
// Created by Nisha - GEC Sheikhpura - EE First Year
#include <stdio.h>

int main() {
    float voltage, current, power;
    
    printf("Enter Voltage: ");
    scanf("%f", &voltage);
    
    printf("Enter Current: ");
    scanf("%f", &current);
    
    power = voltage * current;
    
    printf("Power = %.2f Watt\n", power);
    return 0;
}
