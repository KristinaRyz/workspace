#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	 void loto(int min, int max);
 int main() {
	loto(0, 36);

	 return 0;
 }
	 void loto(int min, int max){
	 	int ar[37] = {0};
	 	int i,j;
	 	for(i = 0; i<1000; i++){
	 		int j= min + rand()%(max - min + 1);
	 	ar[j]++;
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
	 			max++;
	 		}
	 	}
	 }

