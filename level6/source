#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void m() {
	puts("Nope");
}

int main(int argc, char **argv) {
	void *buffer = malloc(64); //esp + 0x1c
	void *ptr = malloc(4); //esp + 0x18

	ptr = &m;
	strcpy(((char*)buffer), argv[1]);
	((void(*)(void))ptr)();
}
