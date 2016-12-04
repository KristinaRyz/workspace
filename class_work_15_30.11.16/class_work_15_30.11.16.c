/*
 * class_work_15_30.11.16.c
 *
 *  Created on: 30/11/2016
 *      Author: Gran1
 */

#include<stdio.h>

void printArray(int ar[], int size);
int maxToEnd(int ar[], int size);
void sortBubble(int ar[], int size);

void sortBubbleInRange(int ar[], int first, int last);
int maxToEndInRange(int ar[], int first, int last);


int main(){
	int ar1[9] = {7,2,5,8,4,6,1,5,3};
	//	sortBubble(ar1,9);
	//
	printArray(ar1,9);

	sortBubbleInRange(ar1, 2, 6);
	printArray(ar1,9);

	return 0;
}
void sortBubbleInRange(int ar[], int first, int last){
	int res;
	do{
		res = maxToEndInRange(ar,first, last);
	}while(res != 0);
}

int maxToEndInRange(int ar[], int first, int last){
	int i, temp, flag=0;
	for(i = first; i<last; i++){ // chobi ne sravnivat s musorom s elementom za array, doidet do predposlednei, chobi sravnit s poslednei
		if(ar[i]>ar[i+1]){
			temp = ar[i]; //swap
			ar[i]=ar[i+1];
			ar[i+1]=temp;
			flag = 1;
		}
	}
	return flag;
}
////////////////////////////////////////////////////////////////
void sortBubble(int ar[], int size){
	int res;
	do{
		res = maxToEnd(ar,size);
	}while(res != 0);
}

int maxToEnd(int ar[], int size){
	int i, temp, flag = 0;
	for(i = 0; i<size-1; i++){ // chobi ne sravnivat s musorom s elementom za array, doidet do predposlednei, chobi sravnit s poslednei
		if(ar[i]>ar[i+1]){
			temp = ar[i]; //swap
			ar[i]=ar[i+1];
			ar[i+1]=temp;
			flag=1;
		}
	}
	return flag;
}
void printArray(int ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n");

}
