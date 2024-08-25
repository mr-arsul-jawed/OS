#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	pid_t c,q,t;
	printf("Inside main\n");
	c = fork();
	if(c < 0){
		printf("Error\n");
	}
	if(c == 0){
		//sleep(5);
		//wait(NULL);
		printf("I am Child with id %d and parent id %d\n",getpid(),getppid());
		//q = fork();
	}
	if(c > 0){
		// sleep(5);
		wait(NULL);
		printf("I am Parent with id %d and child id %d\n",getpid(),c);
        //t = fork();
	}
	printf("After fork()\n");
	return 0;
}
