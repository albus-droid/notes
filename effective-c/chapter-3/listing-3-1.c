#include<limits.h>
#include<stdio.h>

int main() {
   unsigned int ui = UINT_MAX;
   ui++;
   printf("ui = %u\n", ui);
   ui--;
   printf("ui = %u\n", ui);
}
