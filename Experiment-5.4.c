5.4. Declare a static local variable inside a function. Observe how its value persists across function calls. 

#include <stdio.h> 
void counter() { 
static int count = 0;   
count++; 
printf("Count = %d\n", count); 
} 
int main() { 
printf("Name-AdityaBisht\nSAPID-590028757\nCourse-BCA\nBatch-B6"); 
printf("\n--------------------------------------------\n"); 
counter(); 
counter(); 
counter(); 
return 0; 
}
