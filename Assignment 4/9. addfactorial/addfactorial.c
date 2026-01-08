#include<stdio.h> 
 
int factorial(int); 
 
int main() 
{ 
    int i, n=7; 
    float sum=0.0; 
     
    for(i=1; i<=7; i++)  // Fixed: i<=7 instead of 1<=7 
    { 
        sum = sum + (float)i/factorial(i); 
        printf("%d/%d!+", i, i); 
    } 
 
    printf("\b\b = %f\n", sum); 
    return 0; 
} 

int factorial(int num) 
{ 
    int j, fact=1; 
    for(j=1; j<=num; j++) 
    { 
        fact = fact*j; 
    } 
    return fact; 
} 