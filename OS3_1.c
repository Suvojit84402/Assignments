#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
	int retval=fork();
	int status;
	//child process
	if(retval==0)
	{
		printf("Child Process's Process_ID is = %d\nParent ID of Child Process is=%d\n",getpid(),getppid());
		sleep(1);
		exit(10);
	}
	//parent process
	else
	{
		//wait() system call to wait parent process until a child process terminates
		wait(&status);
		printf("Parent Process's Process_ID is = %d\nParent ID of Parent Process is=%d\n",getpid(),getppid());
		//return true if the child terminated normally
		if(WIFEXITED(status))
		{
			printf("Return status of Child Process = %d\n",WEXITSTATUS(status));
		}
	}
	return 0;
}
