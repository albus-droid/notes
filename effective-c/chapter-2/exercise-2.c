#include <stdio.h>
#include <stdlib.h>

int a = 10, b = 20;

int add() {
   return a + b;
}

int sub() {
   return a - b;
}

int mul() {
   return a * b;
}

int (*operations[3])() = { add, sub, mul};


int main() {
	printf("%d\n",(operations[0])());
	printf("%d\n",(operations[1])());
	printf("%d\n",(operations[2])());
}
