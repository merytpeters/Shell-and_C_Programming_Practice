#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (isatty(STDIN_FILENO))
	{
		char cwd[1024];
		getcwd(cwd, sizeof(cwd));
		char *username = getlogin();
		char hostname[1024];
		gethostname(hostname, sizeof(hostname));
		printf("%s@%s:%s$ ", username, hostname, cwd);
	}
	else
	{
		printf("Non-interactive Mode: Executee commands from script or batch file\n");
	}
	return (0);
}
