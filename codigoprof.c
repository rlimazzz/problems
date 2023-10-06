#include <stdio.h>

int main() {
	int n1, n2;
	scanf("%d %d", &n1 , &n2);
	while(n1 < n2) {
		if( n1 % 2 == 0) {
			printf("%d ", n1);
		}
		n1++;
	}
	
	/*
	int n = 0;
	while(n < 200) {
		if(n % 2 == 0){
			printf("%d ", n);
		}
		n++;
	}
	*/
	
	
	
	return 0;
}
