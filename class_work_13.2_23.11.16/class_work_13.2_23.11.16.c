#include<stdio.h>
int arrayEvensCount(int ar[], int size);
int main(){
	int ar1[8] = {6,1,3,8,5,2,0,-3};
	int evensCount = arrayEvensCount(ar1,8);
	printf("Evens : %d Odd : %d ",evensCount, 8-evensCount);//ot vsego razmera cikla vi4itaem summu 4etnih cifr = polu4aem 4islo ne4etnih 4isel
	return 0;
}
////naiti skolko raz v cikle vstre4ayutsya 4etnie i ne 4etnie cifri////
int arrayEvensCount(int ar[], int size){
	int i, count = 0;
	for(i=0; i<size;i++){
		if(ar[i]%2==0)//zugi - 4etnie
			count++; // on s4itaet skolko 4etnih
	}
	return count;
}
