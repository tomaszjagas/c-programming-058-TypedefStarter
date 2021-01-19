#include <stdio.h>

#define intPointer int*
intPointer chalk, cheese; // same as int *chalk, cheese;
typedef char* charPtr;
charPtr Bently, RollsRoyce;
typedef int* iPointer;


int main() {

	iPointer p; // same as int *p;
	iPointer a, * b; // same as int *a and **b;
	iPointer myArray[10]; // same as int *myArray[10];

	return 0;
}