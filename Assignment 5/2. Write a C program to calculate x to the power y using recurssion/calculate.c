#include <stdio.h> 

// Function Prototype 
int power(int, int); 
int main(void) 
{ 
    int x, y; 

    printf("Enter numbers: "); 
    scanf("%d %d", &x, &y);

    // Function call and output 
    printf("%d ^ %d = %d\n", x, y, power(x, y));
     
    return 0; 
}

// Recursive function definition 

int power(int x, int y)

{ 
    if (y == 0) 
    { 
        return 1; // Any number to power 0 is 1 
    } 
    else if (y == 1) 
    { 
        return x; // Base case  
    } 
    else 
    { 
        // Recursive step: x * x^(y-1) 
        return (x * power(x, y - 1)); 
    } 
} 