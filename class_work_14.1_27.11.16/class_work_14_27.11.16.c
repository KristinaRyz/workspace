/*
 * class_work_14_27.11.16.c
 *
 *  Created on: 27/11/2016
 *      Author: Gran1
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int searchMax(int ar[], int size);
void reverseArray(int ar[], int size);
void printArray(int ar[], int size);
void loto(int min, int max);
int main(){
	int ar[8] = {0,3,1,7,8,4,2,9};
	printArray(ar,8);
	reverseArray(ar,8);
	printArray(ar,8);
	printf("\n\n");
	//////////////////////////////////////////////
//	int t = time(0);// kol-vo sekund s 1 jan 1970
//	printf("t=%d \n", t);

//	srand(t);
//	int min = 10, max = 100;
//	int a= min + rand()%(max - min + 1); // slu4ainoe chislo ot min do max

	//int a = rand();
//	printf("%d \n", a);

	loto(1, 36);
	return 0;
}
void loto(int min, int max){
	int ar[37] = {0};
	int i;
	for(i = 0; i<1000000; i++){
		int j= min + rand()%(max - min + 1);
	ar[j]++;
	}
//for(i = 0; i< 37; i ++){
//	printf("%d -> %d \n", i, ar[i]);

i = searchMax(ar,37);
	printf("%d -> %d times\n",i,ar[i]);
}

int searchMax(int ar[], int size){
	int i, max = ar[0], maxInd = 0;
	for(i=1; i<size; i++){
		if(ar[i] > max){
			max = ar[i];
			maxInd=i;
		}
	}
}
/////////////////////////////////////////
void reverseArray(int ar[], int size){
	int i,j,temp;
	for(i=0,j=size-1;i<j;i++, j--){
		temp = ar[j];
		ar[j]=ar[i];
		ar[i] = temp;

	}

}
void printArray(int ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n");

}


//	int left = 0;
//	int right = size - 1;
//	for(i = 0; i< size/2; i++)
//
//		left++;
//		right--;


