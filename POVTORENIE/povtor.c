#include<stdio.h>
void printArray(int ar[], int size);
void mergeArrays(int ar1[],int size1,int ar2[],int size2);

int main(){
	int size1, size2;
	int ar1[5] = {9,8,4,5,6};
	int ar2[3] = {89,4,2};
	printArray(ar1,5);
	printArray(ar2,3);
	mergeArrays(ar1,5,ar2,3);
	return 0;

}


void printArray(int ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n");

}

void mergeArrays(int ar1[],int size1,int ar2[],int size2){
	int size3 = size1+size2;
	int ar3[size3];
	for(int i = 0; i< size3; i++){
		if(i<size1){
			ar3[i] = ar1[i];
		}else{
			ar3[i] = ar2[i-size1];
		}
		printf("%d  ",ar3[i]);
	}


}

