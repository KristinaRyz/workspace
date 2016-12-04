#include<stdio.h>
void printArray(int ar[],int size);

int evenToEnd(int ar[], int size);
void arrangeEven(int ar[], int size);
void sortBubble(int ar[],int start, int stop);
int maxToEnd(int ar[],int start, int stop);
int howMuchNotEven(int ar[], int size);


int main(){

	int ar[10]={1,2,8,6,4,5,7,9,10,3};
	printArray(ar,10);


	arrangeEven(ar,10);
	printArray(ar,10);


	int notEven =howMuchNotEven(ar,10);
	sortBubble(ar,0,notEven);
	sortBubble(ar,notEven,10);

	printArray(ar,10);
	return 0;
}


void printArray(int ar[],int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n\n");
}
///////////////////////////////////////////////////////////////////

void arrangeEven(int ar[], int size){
	int res;
	do{
		res = evenToEnd(ar,size);
	}while (res!=0);

}

int howMuchNotEven(int ar[], int size){
	int res=0;
	for (int i = 0; i < size; i++) {
		if(ar[i]%1)
			res++;
	}
	return res;
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


void sortBubble(int ar[],int start, int stop){
	int res;
	do{
		res = maxToEnd(ar,start,stop);
	}while(res != 0);
}
int maxToEnd(int ar[],int start, int stop){
	int i, temp, flag = 0;
	for(i = start; i<stop-1; i++){ // chobi ne sravnivat s musorom s elementom za array, doidet do predposlednei, chobi sravnit s poslednei
		if(ar[i]>ar[i+1]){
			temp = ar[i]; //swap
			ar[i]=ar[i+1];
			ar[i+1]=temp;
			flag=1;
		}
	}
	return flag;
}
