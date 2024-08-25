#include<stdlib.h>
#include<semaphore.h>
#include<unistd.h>
#include<stdio.h>
#include<pthread.h>

void *fun(void *arg);
int a = 1;

int main(){
	void *result;
	pthread_t thread1;
	pthread_create(&thread1,NULL,fun,&a);
	pthread_join(thread1,&result);
	printf("Thread terminated : %s\n",(char *) result);
}
void *fun(void *arg){
	int *b = (int *) arg;
	printf("Old Value : %d\n",a);
	*b = *b + 1;
	printf("New Value : %d\n",a);
	pthread_exit("Done");
}