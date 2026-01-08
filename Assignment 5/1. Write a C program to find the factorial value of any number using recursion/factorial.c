#include <stdio.h> 
// Function Prototype 
int fact(int); 
int main(void) 
{ 
    int n, f; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
    // Function call 
    f = fact(n); 
    printf("%d! = %d\n", n, f); 
    return 0; 
} 

// Recursive function definition 
    int fact(int n) 
{ 
    if (n == 1) 
    { 
        return 1; 
    }  
    else 
    { 
        // Recursive step: n * (n-1)! 
        return (n * fact(n - 1)); 
    } 
} 