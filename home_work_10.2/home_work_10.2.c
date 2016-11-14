#include<stdio.h>
int main(){
	int i, j;
	for(j = 0; j<7; j++){
		for(i =0; i<7; i++){//inner loop
			if(i==0 || i == 6||j ==6 || i==j || j==0 || i+j ==6){
				printf("* ");
			}   else if (j == 5&& i!=1 && i!=5){
				printf("* ");
			}else if (j == 4 && i!=2 && i!=4 && i!=1 && i!=5){
				printf("* ");
			}else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}
