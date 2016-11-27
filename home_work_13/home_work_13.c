#include<stdio.h>
int searchIndOfMin(int ar[],int size);
void changeValues(int ar[], int size);
void printArray(int ar[], int size);
void mergeArrays(int ar1[], int size1,int ar2[], int size2);
int main(){
	int ar[8] = {2,5,7,4,56,-12,5,-3};
	int i = searchIndOfMin(ar,8);
	printf("IndexMin = %d ego znachenie = %d \n", i, ar[i]);

	printf("\n\n");
	int positivCount = arrayPositiveCount(ar,8);
	printf("Positive : %d Negative : %d ",positivCount, 8-positivCount);

	printf("\n\n");
	changeValues(ar,8);
	printArray(ar,8);

//	int ar1[5] = {9,8,4,5,6};
//	int ar2[3] = {89,4,2};
//
//	mergeArrays(ar1,5,ar2,3);
//	printArray(ar1,5);
//	printArray(ar2,3);

	return 0;
}
//////////////////////////////////////////////////
int searchIndOfMin(int ar[],int size){
	int i, min=ar[0],minInt = 0;
	for(i=1;i<size;i++){
		if(ar[i]<min){
			min=ar[i];
			minInt = i;
		}
	}
	return minInt;
}
/////////////////////////////////////////////////
int arrayPositiveCount(int ar[], int size){
	int i, count = 0;
	for(i=0; i<size;i++){
		if(ar[i]>0)
			count++;
	}
	return count;
}

/////////////////////////////////////////////////
void changeValues(int ar[], int size){
	int i;
	for(i=0; i<size; i++)
		if(ar[i]%2 == 0)
			ar[i] = 0;
		else
			ar[i] = 1;
}
void printArray(int ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n");

}
////////////////////////////////////////////////




