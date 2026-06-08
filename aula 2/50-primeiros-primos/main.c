#include <stdio.h>
int ehprimo(int num) {
	int i;

	if (num<1) {
		return 0;
	}
	for(i=2; i<num; i++) {
		if (num%i==0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int cont=0, num=2;

	printf("Primeiros 50 numeros:\n");
	while(cont<50) {
		if (ehprimo(num)) {
			printf("\n%d\n", num);
			cont++;
		}
		num++;
	}
	printf("\n");
	return 0;
}