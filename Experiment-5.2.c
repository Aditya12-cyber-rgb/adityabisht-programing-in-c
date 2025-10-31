5.2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function. 

#include <stdio.h> 
int g = 20;  
void test() { 
int l = 5; 
printf("Inside test(): local l = %d, global g = %d\n", l, g); 
} 
int main() { 
printf("Name-AdityaBisht\nSAPID-590028757\nCourse-BCA\nBatch-B6"); 
printf("\n---------------------------------------------------\n"); 
test(); 
printf("Accessing global variable g in main() = %d\n", g); 
return 0; 
}
