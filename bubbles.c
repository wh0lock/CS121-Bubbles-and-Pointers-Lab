// bubbles and pointers
// gives array of numbers and sorts them with bubble sort algorithm
// Emily Adams

#include <stdio.h>
const int MAX = 9;

void printValues(int* values){
	int i = 0;
	printf("[");
	for (i=0; i<MAX; i++){
		printf(" %d ", values[i]);
	} // end for
	printf("]\n");
} // end printValues

void swap(int* x, int* y){
        int swapVar;
        swapVar = *x;
        *x = *y;
        *y = swapVar;
} // end swap

void sort(int* values){
	int i;
	int j;
	for (i = 0; i < MAX - 1; i++){
		for (j = 0; j < MAX - 1; j++){
			if (values[j] > values[j+1]){
				swap(&values[j], &values[j+1]);
				printValues(values);
			} // end if
		} // end for
	} // end for
} // end sort
			
int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);
} // end main
