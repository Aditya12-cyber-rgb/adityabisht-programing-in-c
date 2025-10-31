3.5. According to the gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year. 

#include <stdio.h> 
int isLeapYear(int year) { 
if (year % 400 == 0) 
return 1; 
else if (year % 100 == 0) 
return 0; 
else if (year % 4 == 0) 
return 1; 
else 
return 0; 
} 
int main() { 
printf("Name-Aditya Bisht\nSAPID-590028757\nCourse-BCA\nBatch-B6\n"); 
printf("\n----------------------------------------------------\n"); 
int year, i, days = 0; 
printf("Enter year: "); 
scanf("%d", &year); 
for (i = 1; i < year; i++) { 
if (isLeapYear(i)) 
days += 366; 
else 
days += 365; 
} 
int day = (days + 1) % 7; 
switch(day) { 
case 0: printf("The day is Sunday\n"); break; 
case 1: printf("The day is Monday\n"); break; 
case 2: printf("The day is Tuesday\n"); break; 
case 3: printf("The day is Wednesday\n"); break; 
case 4: printf("The day is Thursday\n"); break; 
case 5: printf("The day is Friday\n"); break; 
case 6: printf("The day is Saturday\n"); break; 
} 
return 0; 
} 
