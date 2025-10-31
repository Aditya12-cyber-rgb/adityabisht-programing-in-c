Experiment 5: Variable and Scope of Variable 
5.1. Declare a global variable outside all functions and use it inside various functions to understand its accessibility. 

#include <stdio.h> 
int g = 10;   
void display() { 
printf("Inside display(), global variable g = %d\n", g); 
} 
int main() { 
printf("Name-Aditya bisht\nSap id-590028757\nCourseBCA\nBatch-B6"); 
printf("\n------------------------------------------------------------\n"); 
printf("Inside main(), global variable g = %d\n", g); 
display();  // Accessing global variable inside another 
function 
g = g + 5; 
printf("After modification, global variable g = %d\n", g); 
return 0; 
} 
