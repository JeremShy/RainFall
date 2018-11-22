int main(int ac, char **av)
{
	char buffer[132];
	FILE *pass;

	pass = fopen("/home/user/end/.pass", "r");
	memset(buff, '\0', 132);
	if (pass == NULL || argc != 2)
		return (-1);
	fread(buffer, 1, 66, pass);
	buffer[atoi(argv[1])] = '\0'
	fread(buffer + 66, 1, 65, pass);
	fclose(pass);
	if (strcmp(argv[1], buffer) == 0) {
		execl("/bin/sh", "sh", NULL);
	} else {
		puts(buffer + 66);
	}
	return (0);
}
