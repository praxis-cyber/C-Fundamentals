#include<stdio.h> 
 
int main() 
{ 
    int x, y, z=5; 
 
    for (x=1; x<=z; x++) 
    { 
        for(y=1; y<=z-x; y++) 
        { 
            printf(" "); 
        } 
        for(y=1; y<=x; y++) 
        { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
} 