#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void *auth = NULL;
void *service = NULL;


int main()
{
	char buffer[130]= {0};
	while (42)
	{
		printf("%p, %p\n", auth, service);

		if (!fgets(buffer, 128, stdin))
			break ;
		if (!strncmp(buffer, "auth ", 5))
		{
			auth = malloc(4);
			*(void**)auth = NULL;
			if (strlen(buffer + 5) + 1 < 30)
			{
				strcpy((char*)auth, buffer + 5);
			}
		}
		if (!strncmp(buffer, "reset", 5))
			free(auth);
		if (!strncmp(buffer, "service", 6))
			service = strdup(buffer + 7);
		if (!strncmp(buffer, "login", 5))
		{
			if (((char*)auth)[32] != 0)
				system("login");
			else
				fwrite("Password\n", 1, 11, stdout);
		}
	}
	return (0);
}
