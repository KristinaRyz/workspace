#include<stdio.h>
int main(){
	int i, j;
	for(j = 0; j<7; j++){
		for(i =0; i<7; i++){//inner loop
			if(i==0 || i == 6||j ==6 || i==j || j==0 || i+j ==6){
				printf("* ");
			}
						else if (i == 1){
//			else if (i == 5){
				printf("* ");
			}
						else if (i == 2 && j!=1 && j!=5){
//			else if (i == 4 && j!=1 && j!=5){
				printf("* ");
			}else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}
