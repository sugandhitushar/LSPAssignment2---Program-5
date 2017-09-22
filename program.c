#include"program.h"

int main(int argc, char *argv[])
{	
	if(fork() == 0)
	{
		printf("Child: Turning this process to daemon process. Sleeping for 5 seconds\n");
		close(STDIN_FILENO);
		close(STDOUT_FILENO);
		close(STDERR_FILENO);
		sleep(5);
		printf("Exiting daemon process.\n");
		
	}
	else
		printf("Parent:: terminating\n");
}

