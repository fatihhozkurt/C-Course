#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char bilgi[40];
	printf("Bilgiyi giriniz: "),
	gets(bilgi); printf("\n\n");
	puts(bilgi);
	
	return 0;
}
