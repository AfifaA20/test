#include <stdio.h>

int main(){
	  int c[] = {1,2,3,4,5};
		printf("c [2] value: %d\n", c[2]);
		for(int i=0; i < sizeof(c)/sizeof(c[0]); i++){
		printf("value at i is; %d\n", c[i]);
}
		return(0);
	}
