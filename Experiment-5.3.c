5.3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks. 

#include <stdio.h> 
int main() { 
printf("Name-AdityaBisht\nSAPID-590028757\nCourse-BCA\nBatch-6"); 
printf("\n-----------------------------------------------------\n"); 
int x = 10; 
printf("Outside block, x = %d\n", x); 
{ 
} 
int y = 20; 
printf("Inside block, x = %d and y = %d\n", x, y); 
return 0; 
}
