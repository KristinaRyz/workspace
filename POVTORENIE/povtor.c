#include<stdio.h>
void printArray(int ar[],int size);
void printArrayReverse (int ar[], int size);
int arraySum(int ar[], int size);

int main(){
	int ar[9]={3,1,7,4,5};
	printArray(ar, 9);
	printArrayReverse (ar,9);

	int arSum = arraySum(ar,9);
	printf("\n arSum = %d \n", arSum);
	return 0;
}
void printArray(int ar[],int size){
	int index;
	for(index = 0; index < size; index++){
		printf("%d   ",ar[index]);
	}
printf("\n");
}

void printArrayReverse (int ar[], int size){
	int i;
	for(i = size-1; i>=0; i--){
		printf("%d   ", ar[i]);
	}
	printf(" \n ");
}

int arraySum(int ar[], int size){ // sum vseh yacheek massiva
	int i, sum = 0;
	for(i=0;i < size-1; i++){ // ili napisat size vmesto size-1
		sum = sum +ar[i];
	}
	return sum;
}
