#include<stdio.h> 
 
float convertToFahrenheit(float); 
 
int main() 
{ 
    float celsius, fahrenheit; 
     
    printf("Enter temperature in Celsius: "); 
    scanf("%f", &celsius); 
     
    fahrenheit = convertToFahrenheit(celsius); 
     
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, 
fahrenheit); 
     
    return 0; 
} 

float convertToFahrenheit(float c) 
{ 
    float f; 
    f = (c * 9.0 / 5.0) + 32.0; 
    return f; 
} 