//4. Write a C program Using recursion solve the Tower of Hanoi problem. 

#include <stdio.h> 

// Function Prototype 
void tower(int, char, char, char); 

int main(void) 
{ 
    int n; 
    
    printf("Enter the number of disks: "); 
    scanf("%d", &n); 

    printf("The sequence of moves involved in the Tower of Hanoi are :\n"); 

    // Function call: n disks, Source='A', Destination='C', Auxiliary='B' 

    tower(n, 'A', 'C', 'B'); 

    return 0; 
} 

// Recursive function definition 

void tower(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 1) 
    { 
        // Base case: move the only disk from source to destination 

        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod); 
    
        return; 
    } 

    // Step 1: Move n-1 disks from source to auxiliary rod 

    tower(n - 1, from_rod, aux_rod, to_rod); 

    // Step 2: Move the nth disk from source to destination rod 

    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod); 

    // Step 3: Move the n-1 disks from auxiliary rod to destination rod 

    tower(n - 1, aux_rod, to_rod, from_rod); 
} 