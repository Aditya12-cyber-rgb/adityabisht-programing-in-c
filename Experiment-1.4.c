4) Write a C program to perform four arithmetic operations on two variables

#include<stdio.h>
int main(){
	printf("Name-Aditya Bisht\nSAP_ID-590028757\nCourse-BCA\nBatch-6");
	printf("\n-----------------------------------------------------\n");
	int a;
	int b;
	int SUM;
	int SUB;
	int MUL;
	int DIV;
	printf("Enter the value of number 1");
	scanf("%d",&a);
              printf("Enter the value of number 2");
              scanf("%d",&b);
              SUM=a+b;
             printf("The sum of %d and %d is:%d\n",a, b, SUM);
             SUB=a-b;
             printf("The sub of %d and %d is:%d\n",a,b, SUB);
             MUL=a*b;
             printf("The mul of %d and %d is: %d\n",a,b, MUL);
             DIV=a/b;
             printf("The div of %d and %d is: %d\n",a, b, DIV);
             return 0
}

