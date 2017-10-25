void p(char *str, char *buffer) {
	char buf[4096];
	int max = 4096;

	puts(str);
	read(0, buf, 4096);
	*strchr(buf, '\n') = '\0';
	strncpy(buffer, buf, 20);
}

void pp(char *b1) {
	char b2[20];
	char b3[20];
	int len;

	p(" - ", b2);
	p(" - ", b3);

	strcpy(b1, b2);
	len = strlen(b1);
	b1[len] = ' ';
	strcat(b1, b3);
}

void main() {
	char b1[42];
	pp(b1);
	puts(b1);
}
