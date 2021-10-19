#include<stdio.h>

int is_capicua(int* p1, int *p2, int cant);

int main(void){
	int numero[]={1,1};
	int*p1=numero;
	int*p2=&numero[1];
	int result = is_capicua(p1, p2, 0);
	printf("%d\n", result);
	printf("Hola mundo hago un cambio sencillo de prueba");
	return 0;
}

int is_capicua(int* p1, int *p2, int cant){
	cant--;
	if (cant >0){
		if(*(p1+cant)==*(p2-cant)){		
			cant--;
			return (is_capicua(p1, p2, (cant)));
		}
		else{
			return 0;
		}
	}
	else{
		if(*p1==*p2){
			return 1;
		}
		else{
			return 0;
		}
	}
}
