#include<stdio.h> 

int add(int, int); 
int subtract(int, int); 
int multiply(int, int); 
float divide(int, int); 

int main() 
{ 

    int num1, num2, choice, result; 
    float fresult; 

    printf("Enter first number: "); 
    scanf("%d", &num1); 
    printf("Enter second number: "); 
    scanf("%d", &num2); 
     
    printf("\nMenu:\n"); 
    printf("1. Addition\n"); 
    printf("2. Subtraction\n"); 
    printf("3. Multiplication\n"); 
    printf("4. Division\n"); 
    printf("Enter your choice: "); 
    scanf("%d", &choice); 
     
    if(choice == 1) 
    { 
        result = add(num1, num2); 
        printf("Result: %d\n", result); 
    } 
    else if(choice == 2) 
    { 
        result = subtract(num1, num2); 
        printf("Result: %d\n", result); 
    } 
    else if(choice == 3) 
    { 
        result = multiply(num1, num2); 
        printf("Result: %d\n", result); 
    } 
    else if(choice == 4) 
    { 
        fresult = divide(num1, num2); 
        printf("Result: %.2f\n", fresult); 
    } 
    else 
    { 
        printf("Invalid choice\n"); 
    } 
     
    return 0; 
} 
 
int add(int a, int b) 
{ 
    return a + b; 
} 
int subtract(int a, int b) 
{ 
    return a - b; 
} 
int multiply(int a, int b) 
{ 
    return a * b; 
} 
float divide(int a, int b) 
{ 
    return (float)a / b; 
} 