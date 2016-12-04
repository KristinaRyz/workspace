#include<stdio.h>
void printArray(int ar[],int size);
void sortBubble(int ar[], int size);
int minToEnd(int ar[], int size);
int evenToEnd(int ar[], int size);
void sortBubble1(int ar[], int size);

int main(){

	int ar[10]={1,2,8,6,4,5,7,9,10,3};
	printArray(ar,10);

//	sortBubble(ar,10);
//	printArray(ar,10);

	sortBubble1(ar,10);
	printArray(ar,10);

	return 0;
}
void sortBubble(int ar[], int size){
	int res;
	do{
		res = minToEnd(ar,10);
	}while (res!=0);
}


int minToEnd(int ar[], int size){
	int i, temp, flag = 0;
	for(i=0; i<size-1; i++){
		if(ar[i]<ar[i+1]){
			temp = ar[i];
			ar[i] = ar[i+1];
			ar[i+1] = temp;
			flag = 1;
		}
	}
	return flag;
}

void printArray(int ar[],int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n\n");
}
///////////////////////////////////////////////////////////////////

void sortBubble1(int ar[], int size){
	int res;
	do{
		res = evenToEnd(ar,10);
	}while (res!=0);
}

int evenToEnd(int ar[], int size){
	int i, temp, flag = 0;
	for(i=0; i<size-1; i++){
		if(ar[i+1]%2!=0 && ar[i]%2==0){
			temp = ar[i];
			ar[i] = ar[i+1];
			ar[i+1] = temp;
			flag = 1;
		}
	}
	return flag;
}
