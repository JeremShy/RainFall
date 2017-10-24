#include <stdio.h>
#include <stdlib.h>

void p(char *buffer) {
	printf(buffer);
}


void n() {
	char buffer[512];
	int check;

	fgets(buffer, 512, stdin);
	p(buffer);
	if (check == 0x01025544) {
		system("/bin/cat /home/user/level5/.pass");
	}
}

int main() {
	n();
}
