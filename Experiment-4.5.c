4.5. Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit. 

#include <stdio.h> 
int main() { 
printf("Name-Aditya Bisht\nSAP Id-590028757\nCourse-BCA\nBatch-B6"); 
printf("\n------------------------------------------\n"); 
int a, b, c, d; 
int limit = 10000;  // You can increase this for more numbers 
int n1, n2; 
 
    printf("Ramanujan Numbers up to %d are:\n", limit); 
    printf("-----------------------------------\n"); 
 
    for (a = 1; a * a * a < limit; a++) { 
        for (b = a + 1; b * b * b < limit; b++) { 
            n1 = a * a * a + b * b * b; 
            for (c = a + 1; c * c * c < limit; c++) { 
                for (d = c + 1; d * d * d < limit; d++) { 
                    n2 = c * c * c + d * d * d; 
                    if (n1 == n2 && n1 <= limit) { 
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n1, a, b, c, d); 
                    } 
                } 
            } 
        } 
    } 
 
    return 0; 
}
