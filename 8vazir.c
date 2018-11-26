#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/*void vazir ( int a[], int col){
	int row,c, i, j;
	if (col==8) {
		for (i=0; i<8; i++){
			for (j=0; j<8; j++){
				if ( a[i]==j) printf (" 1 ");
				else printf(" 0 ");
			}
			printf ("\n");
		}
		printf ("***********************\n");
		return;
	}
	for ( row=0; row<8; row++){
		int conflict=0;
		for (c=0; c<col; c++){
			if ( a[c]==row) conflict =1;
			if ( abs(a[c]-row)==abs(c-col)) conflict=1;
		}
			if (conflict==0) {
			a[col]=row;
			vazir (a, col+1);
		}
		
		
	}
		
	
}*/

int main(){
	int a[8]={0};
	//vazir (a,0);
	printf ("%d", 2);
	
}
