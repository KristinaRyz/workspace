#include<stdio.h>
int main(){
	int i, j;
	for(j = 0; j<7; j++){
		for(i =0; i<7; i++){//inner loop
			if(i==0 || i == 6||j ==6 || i==j || j==0 || j == i+1 ||j == i+2||j == i+3||j == i+4){
				printf("* ");
			}else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}

