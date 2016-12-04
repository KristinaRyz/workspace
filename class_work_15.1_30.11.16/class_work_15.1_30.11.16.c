/*
 * class_work_15.1_30.11.16.c
 *
 *  Created on: 30/11/2016
 *      Author: Gran1
 */

#include<stdio.h>
void sortSelection(int ar[], int size);
void printArray(int ar[], int size);
int searchMinInRange(int ar[], int first, int last);

int main(){
	int ar[9] = {7,2,6,3,8,4,9,0,5};
	printArray(ar,9);
	sortSelection(ar,9);
	printArray(ar,9);

	return 0;
}
void printArray(int ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n");

}

void sortSelection(int ar[], int size){
	int i,j,temp;
	for(i=0; i<size-1; i++){
		//	                     first  last
		j = searchMinInRange(ar, i+1,   size-1);
		if(ar[i]>ar[j]){
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
		}

	}
}


//        minInd
//         min
//        first  i    last
//0  1     2     3  4  5      6  7
//[7][2]  [4]   [1][8][9]    [5][6]
int searchMinInRange(int ar[], int first, int last){ // naiti min s intervale
	int i;
	int min=ar[first];
	int minInd = first;
	for(i = first+1; i<=last; i++){
		if(ar[i]< min){
			min = ar[i];
			minInd = i;
		}
	}
	return minInd;
}
