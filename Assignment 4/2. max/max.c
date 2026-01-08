#include<stdio.h> 

int maximum(int, int); 

int main() 
{ 
    int num1, num2, max; 

    printf("Enter first number: "); 
    scanf("%d", &num1); 

    printf("Enter second number: "); 
    scanf("%d", &num2); 

    max = maximum(num1, num2); 

    printf("Maximum of %d and %d is %d\n", num1, num2, max); 

    return 0; 
} 

int maximum(int a, int b) 
{ 
    int c; 
    c = a >= b ? a : b; 
    return c; 
} 