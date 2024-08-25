#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *f1(void *arg);
int i,j;
int main(){
	pthread_t thread1;
	pthread_create(&thread1,NULL,f1,NULL);
	pthread_join(thread1,NULL);
	printf("Inside Main\n");
	for(i = 1;i <= 5;i++){
		printf("%d\n",i);
		sleep(1);
	}
	return 0;
}
void *f1(void *arg){
	printf("Inside Thread\n");
	for(j = 101;j <= 105;j++){
		printf("%d\n",j);
		sleep(1);
	}
}