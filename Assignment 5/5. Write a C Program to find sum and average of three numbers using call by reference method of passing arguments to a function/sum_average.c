#include <stdio.h>

// Function Prototype using pointers for call by reference 
void calculate(int a, int b, int c, int *s, float *avg); 

int main(void) 
{ 
    int n1, n2, n3, sum; 
    float average; 

    printf("Enter three numbers: "); 
    scanf("%d %d %d", &n1, &n2, &n3); 

    // Function call: passing addresses of sum and average using '&' 

    calculate(n1, n2, n3, &sum, &average); 

    printf("\nSum = %d", sum); 
    printf("\nAverage = %.2f\n", average); 

    return 0; 
}

// Function definition 
void calculate(int a, int b, int c, int *s, float *avg) 
{ 
    // Modify the value at the memory address directly 
    *s = a + b + c; 
    *avg = (float)(*s) / 3;
} 