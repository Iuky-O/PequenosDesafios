//Zerinho ou um (88)
//programa que mostra quem entre 3 amigos ganha no 0 ou 1. podendo ter empate com '*'
#include <stdio.h>
#include <stdlib.h>

int main(){    	
	int A, B, C;
	
	scanf ("%d %d %d", &A, &B, &C);
	
	//ana vence
	if (A != B && A != C){
		printf ("A");
		
	//beto vence	
	} else if (B != A && B != C){
		printf ("B");
		
	//clara vence	
	}else if (C != A && C != B){
		printf ("C");
	} else { //nenhum vence
		printf ("*");
	}

	return 0;

}
