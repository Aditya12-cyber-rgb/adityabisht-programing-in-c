//3.2.? WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a use 

#include<stdio.h> 
int main(){ 
printf("Name- Aditya Bisht\nSAP-ID
590028757\nCourse-BCA\nBatch-B6"); 
printf("\n-----------------------------------------------------\n"); 
float a, b, c; 
printf("Enter the three sides of the triangle:\n"); 
scanf("%f %f %f", &a, &b, &c); 
if ((a + b > c) && (a + c > b) && (b + c > a)) { 
printf("The triangle is VALID.\n"); 
if (a == b && b == c) { 
printf("The triangle is EQUILATERAL.\n"); 
} 
else if (a == b || b == c || a == c) { 
printf("The triangle is ISOSCELES.\n"); 
} 
else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == 
a*a + b*b)) { 
printf("The triangle is RIGHT-ANGLED.\n"); 
} 
else { 
printf("The triangle is SCALENE.\n"); 
} 
} else { 
printf("The triangle is NOT VALID.\n"); 
} 
return 0; 
} 
