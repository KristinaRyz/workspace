/*
 * home_work_12.c
 *
 *  Created on: 21.11.2016
 *      Author: Кристина Рыжикова
 */
#include<stdio.h>
void printArrayEvens(int ar[],int size);
void printArrayReverseOdds(int ar[],int size);
int arrayEvenIndexSum(int ar[],int size);

int main(){
	//          0 1 2 3 4 5 6
	int ar[] = {9,2,1,6,4,7,0};

	printArrayEvens(ar,7);
	printArrayReverseOdds(ar,7);

	int sumEven = arrayEvenIndexSum(ar,7);
	printf("sumEven = %d \n", sumEven);


	return 0;
}

void printArrayEvens(int ar[],int size){
	int i;
	for(i=0; i<size; i++){
		if(ar[i]%2==0)
			printf("%d  ",ar[i]);
	}
	printf("\n\n");
}

void printArrayReverseOdds(int ar[],int size){
	int i;
	for(i=size-1; i>=0; i--){
		if(ar[i]%2!=0)
			printf("%d  ",ar[i]);
	}
	printf("\n\n");
}

int arrayEvenIndexSum(int ar[],int size){
	int i,even=0;
	for(i=0; i<size; i+=2){
		even += ar[i];
	}

	return even;
}
