3) Write a C program to add two numbers and take a number from the user
SOLUTION:

#include<stdio.h>
int main(){
	printf("Name-Aditya Bisht\nSAP_ID-590028757\nCourse-BCA\nBatch-6");
	printf("\n-----------------------------------------------------\n");
	int a;
	int b;
	int SUM;
	printf("Enter the value of number 1");
	scanf("%d",&a);
              printf("Enter the value of number 2");
              scanf("%d",&b);
              SUM=a+b;
              printf("The sum of %d and %d is:%d\n",a, b, SUM);
	return 0;
}
