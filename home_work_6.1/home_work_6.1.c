#include <stdio.h>
void fan(int mode);
int main(){
fan(3);
	return 0;
}
void fan(int mode){
	if(mode<0||mode>3){
		printf("ERROE:wrong mode \n");
	return;
	}
	if(mode == 1){
		printf("Speed 1 \n");
	}
	else if (mode == 2){
		printf("Speed 2 \n");
	}

	else if (mode == 3){
			printf("Speed 3 \n");
		}

}
