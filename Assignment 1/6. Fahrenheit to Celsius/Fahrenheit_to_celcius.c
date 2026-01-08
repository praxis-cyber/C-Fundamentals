#include<stdio.h>  
int main()  
{  
    int fahrenheit, celsius;  

    printf("Enter the fahrenheit: ");  
    scanf("%d", & fahrenheit);  

    //formla of fahrenheit to celcius
    celsius = (5*(fahrenheit - 32))/9;  
    
    printf("celsius = %d\n", celsius);  
} 