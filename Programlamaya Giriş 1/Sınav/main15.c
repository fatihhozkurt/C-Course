#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,k,a=4;
	
	for(i=1;i<=a;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	
	return 0;
}
