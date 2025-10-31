//2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the
//formula: F = (C * 9/5) + 32. 

#include<stdio.h>
int main() {
	float c;
	printf("Name- Aditya Bisht\nSAP ID - 590028757\nCourse- BCA\nBatch- B6");
    printf("\n-----------------\n");
	printf("Enter value of c : ");
	scanf("%f", &c);
	float F= (c*(9/5)) + 32;
	printf("The temp in fahrenhiet is %f", F);
	return 0;
}


