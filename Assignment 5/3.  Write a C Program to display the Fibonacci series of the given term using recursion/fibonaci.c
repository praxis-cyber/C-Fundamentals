#include <stdio.h> 

// Function Prototype 
int fibo(int);

int main(void) 
{ 
    int n, i;

    printf("Fibonacci series: Enter a number: "); 
    scanf("%d", &n);

    printf("Fibonacci series of %d\n", n);

    // Loop to print each term of the series 
    for (i = 0; i < n; i++) 
    { 
         printf("%d ", fibo(i)); 
    } 

    printf("\n"); 

    return 0; 
} 
    // Recursive function definition 

    int fibo(int n) 
{ 
    if (n == 0) 
    { 
        return 0; 
    }  
    else if (n == 1) 
    { 
        return 1; 
    }  
    else 
    { 
        // Recursive step: sum of previous two terms 
        return (fibo(n - 1) + fibo(n - 2)); 
    } 
} 