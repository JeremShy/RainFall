#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char g[69];
char tilde[] = "~~"; //0x8048703

 int main(int argc, char **argv) {
	 void **b1 = malloc(8);
	 b1[0] = (void*)1;
	 b1[1] = malloc(8);

	 void **b3 = malloc(8);
	 b3[0] = (void*)2;
	 b3[1] = malloc(8);

	 strcpy(b1[1], argv[1]);
	 strcpy(b3[1], argv[2]);

	 fgets(g, 68, fopen("/tmp/a", "r"));
	 puts(tilde);
 }

 0x08048703 - tilde
 0x08049960 - g
 0x0804A008 - b1[0]
 0x0804A018 - b1[1]
 0x0804A028 - b3[0]
 0x0804A038 - b3[1]
