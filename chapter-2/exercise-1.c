#include <stdio.h>
#include <stdlib.h>

static unsigned int counter = 0;

void increment (void) {
   counter++;
   printf("%d ", counter);
}

int main() {
   for (int i = 0; i < 5; i++) {
	   increment();
   }
   printf("\nCurrent value is : %d", counter);
   return EXIT_SUCCESS;
}
