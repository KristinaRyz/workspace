#include<stdio.h>
void stars_1();
void stars_2();
void stars_3();
void stars_4();
int main(){
//	stars_1();
	printf("\n\n");
	stars_2();
	printf("\n\n");
	stars_3();
	printf("\n\n");
	stars_4();
	printf("\n\n");
	return 0;
}
void stars_1(){
	int i,j;
	for(j = 0; j<7; j++){
		for(i =0; i<7; i++){//inner loop
			if(i==0 || i == 6||j ==6 || i==j || j==0 || j+i==6)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
void stars_2(){
	int i, j;
	for(j = 0; j<7; j++){
		for(i =0; i<7; i++){//inner loop
			if(i==0 || i == 6||j ==6 || i==j || j==0 || i+j ==6 || j<i && j+i<6)
				printf("* ");
			else
				 printf("  ");
	}
		printf("\n");
	}
}
void stars_3(){
	int i, j;
	for(j = 0; j<7; j++){
		for(i =0; i<7; i++){//inner loop
			if(i==0 || i == 6||j ==6 || i==j || j==0 || i+j ==6){
				printf("* ");
			}else
				printf("  ");
		}
		printf("\n");
	}

}
void stars_4(){
	int i, j;
	for(j = 0; j<7; j++){
		for(i =0; i<7; i++){//inner loop
			if(i==0 || i == 6||j ==6 || i==j || j==0 || j <= i){
				printf("* ");
			}else
				printf("  ");
		}
		printf("\n");
	}
}
