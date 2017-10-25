int main(int ac, char **av)
{
	char buff[40];
	int  check;

	check = atoi(av[1]);
	if (check <= 9)
	{
		memcpy(buff, av[2], check * 4);
		if (check == 0x574f4c46)
			execl("/bin/sh", "sh");
	}
	return (0);
}
