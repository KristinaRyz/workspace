/*
 * class_work_12.2_20.11.16.c
 *
 *  Created on: 20/11/2016
 *      Author: Gran1
 */
#include <stdio.h>
int arraySum(int ar[], int size);

void printArrayReverse (int ar[], int size);

void printArray(int ar[],int size);


int main(){//  0 1 2 3 4
	int ar[9]={3,1,7,4,5};
	int arSum = arraySum(ar, 9);
	printf("%d ", arSum);


	/*int i;
	for(i=0; i<9; i++)
	printf("%d ", ar[i]);*/

	printArray(ar, 9); // massiv i razmer massiva
	printArrayReverse (ar,9);


	int ar1[]={5,1,3,7,5,3,2};

	int bytes = sizeof(ar1)/sizeof(ar1[0]);//operator sizeof  (vichislenie size massiva)
		printf("%d \n ", bytes);//vmesto bytes mojno napisat size

		printArray(ar1,7);

int ar3[4]={4,1,6,2};
int res=arraySum(ar3,4);
printf("res= %d\n",res);
	return 0;
}

int arraySum(int ar[], int size){ // sum vseh yacheek massiva
	int i, sum = 0;
	for(i=0;i < size-1; i++){ // ili napisat size vmesto size-1
		sum = sum +ar[i];
	}
	return sum;
}


void printArrayReverse (int ar[], int size){
	int i;
	for(i = size-1; i>=0; i--){
		printf("%d   ", ar[i]);
	}
	printf(" \n ");
}

void printArray(int ar[],int size){
	int index;
	for(index = 0; index< size; index++){
		printf("%d   ",ar[index]);
	}
printf("\n");
}

