#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *p () {
	char buf[76];
	void *ebp = buf + 76;

	fflush(stdout);
	gets(buf);
	*((long*)(buf + 64)) = (long)(ebp + 4);
	if ((*((long*)(buf + 64)) & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", (void*)(buf + 64));
		exit(1);
	}
	else {
		puts(buf);
		return strdup(buf);
	}
}

int main() {
	p();
}
