/*
 * home_work_14.c
 *
 *  Created on: 30.11.2016
 *      Author: Кристина Рыжикова
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fillArrayRand(int ar[], int size, int min, int max);
void printArray(int ar[], int size);
void fillArrayEvens(int ar[], int size, int min, int max);
int searchMax(int ar[], int size);
void loto(int min, int max);

int main(){
	int ar[10]={0};

	fillArrayRand(ar,10,10,30);
	printArray(ar,10);
	printf("\n\n");

	fillArrayEvens(ar,10,10,30);

	printf("\n\n");

	loto(1,36);


	return 0;
}

void fillArrayRand(int ar[], int size, int min, int max){
	int i;
	for(i=0; i<size; i++){
		ar[i] = min+rand()%(max-min+1);
	}

}
void printArray(int ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n");

}

void fillArrayEvens(int ar[], int size, int min, int max){
	int i=0, j;
	while(i<size){
		j = min+rand()%(max-min+1);
		if(j%2==0){
			ar[i]=j;
			printf("%d  ",ar[i]);
			i++;
		}
	}
}

void loto(int min, int max){
	int ar[37] = {0};
	int i;
	for(i = 0; i<1000; i++){
		int j= min + rand()%(max - min + 1);
	ar[j]++;
	}
	for(i = 0 ; i < size; i++) {
	       for(j = 0 ; j < size -1 ; j++) {
	           if(ar[j] > ar[j+1]);
	       }
	    }
	i=searchMax(ar,10);
	printf("%d -> %d \n", i, ar[i]);
}

int searchMax(int ar[], int size){
	int i;
	int max = ar[0];
	int maxInd = 0;
	for(i=1; i<size; i++){
		if(ar[i] > max){
			max = ar[i];
			maxInd=i;
		}
	}
}
