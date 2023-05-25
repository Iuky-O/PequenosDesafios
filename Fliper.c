#include <stdio.h>
#include <stdlib.h>

void main(){
	int P, R;
	
	scanf ("%d %d", &P, &R);
	
	if (P == 1 && R == 1){
		printf ("A");
	} else if (P == 1 && R == 0){
		printf ("B");
	} else {
		printf ("C");
	}

    return 0;
 
}
