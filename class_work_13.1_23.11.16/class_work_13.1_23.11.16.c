#include<stdio.h>
int searInt(int ar[],int size, int value);
void fillArray(int ar[],int size, int from);
void printArray(int ar[], int size);
int searchMax(int ar[],int size);

int main(){//     0 1 2 3   4 5 6 7 index
	int ar1[8] = {6,1,4,-2,-3,3,8,9};
	int i = searInt(ar1,8,-3);
	if(i == -1)
		printf("The value not found \n");
	else//           ar1[i] - soderjimoe ya4eiki masiva ar po indexu i, i = index
		printf("value : %d found in %d index\n", ar1[i],i);

	printf("\n\n");
	int ar2[10] = {0}; //v kajdoi yz4eike 0
	fillArray(ar2,10,25); //zapolnyai s 25 i dalwe
	printArray(ar2,10);

	printf("\n\n");
	i = searchMax(ar1,8);
	printf("max:%d in index:%d \n",ar1[i],i);

	return 0;
}//zapolni///////////////////////////
void fillArray(int ar[],int size, int from){
	int i;
	for(i=0; i<size; i++,from++){
		ar[i] = from;

	}
}
////////naiti max peremenyuy i nape4atat nomer indexa etoi peremennoi/////////////////////////////
int searchMax(int ar[],int size){//max =  zna4enie peremenoi; maxInt = index ya4eiki gde est max zna4enie peremenoi
	int i, max=ar[0],maxInt = 0;
	for(i=1;i<size;i++){
		if(ar[i]>max){
			max=ar[i];
			maxInt = i;
		}
	}
	return maxInt;
}

/////////////////////////////////////
void printArray(int ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d  ",ar[i]);
	}
	printf("\n");

}
////////naiti cifry 4to est v cikle/////////////////////////////////////////////
int searInt(int ar[],int size, int value){
	int i;
	for(i=0;i<size;i++){
		if(ar[i]== value)
			return i;
	}
	return -1;
}
