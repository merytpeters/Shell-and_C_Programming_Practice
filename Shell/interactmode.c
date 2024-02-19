#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (isatty(STDIN_FILENO))
	{
		printf("Interactive mode: Enter a command\n");
		char command[100];
		fgets(command, sizeof(command), stdin);
		printf("You entered: %s", command);
	}
	else
	{
		printf("Non-interactive Mode: Executee commands from script or batch file\n");
	}
	return (0);
}
