/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float maths, ip, ave;
  
  printf("enter marks for mathematics: ");
  scanf("%f",&maths);

  printf("enter marks for programming: ");
  scanf("%f",&ip);

  ave = (maths + ip)/2;
  
  printf("average is : %.2f",ave);
  
  return 0;
}

