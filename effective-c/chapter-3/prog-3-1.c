// This program checks if sum of two values is greater than UINT_MAX
#include<stdio.h>
#include<limits.h>

int main() {
   unsigned int ui = 23333;
   unsigned int sum = 4294967295;

   if (ui > UINT_MAX - sum)
      printf("It's larger");
   else {
      sum += ui;
      printf("It's smaller");
   }
} 
