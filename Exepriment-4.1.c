Experiment 4: Loops 
4.1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and  

#include <stdio.h> 
int main() { 
printf("Name-Aditya Bisht\nSAP ID-590028757\nCourse-BCA\nBatch-B6"); 
printf("\n----------------------------------------------\n"); 
int num; 
int positive = 0, negative = 0, zero = 0; 
char choice; 
do { 
printf("Enter a number: "); 
scanf("%d", &num); 
if (num > 0) 
positive++; 
else if (num < 0) 
negative++; 
else 
zero++; 
printf("Do you want to enter another number? (y/n): "); 
scanf(" %c", &choice);   
} while (choice == 'y' || choice == 'Y'); 
printf("\nSummary:\n"); 
printf("Positive numbers: %d\n", positive); 
printf("Negative numbers: %d\n", negative); 
printf("Zeroes: %d\n", zero); 
return 0; 
}
 
