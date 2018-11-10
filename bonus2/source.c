#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int language = 0;

void greetuser(char buff[76])
{
	char gb[72];

	if (language == 0)
		strcpy(gb, "Hello ");
	else if (language == 1)
		strcpy(gb, "Hyvää päivää ");
	else if (language == 2)
		strcpy(gb, "Goedemiddag ");

	strcat(gb, buff);
	puts(buff);
}

int main(int ac, char **av) {
	char buff[76];
	char *env;

	if (ac != 3)
		return (1);

	memset(buff, '\0', 76);
	strncpy(buff, av[1], 40);
	strncpy(buff + 40, av[2], 32);

	env = getenv("LANG");
	if (env != NULL)
	{
		if (memcmp(env, "fi", 2) == 0)
			language = 1;
		else if (memcmp(env, "nl", 2) == 0)
			language = 2;
	}

	greetuser(buff); //Attention, ici buff est passé char par char et non en tant qu'adresse.
}
