#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

void *fun1();
void *fun2();
sem_t s;
int shared = 1; //shared variable

int main(){
	pthread_t thread1, thread2;
	sem_init(&s,0,1);
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("Main final value of shared : %d\n",shared);
	return 0;
}
void *fun1(){
	int x;
	sem_wait(&s);
	x = shared;
	printf("Thread1 read the value as : %d\n",x);
	x++;
	printf("Thread1 local updation : %d\n",x);
	sleep(1);
	shared = x;
	sem_post(&s);
	printf("Thread1 final value of shared : %d\n",shared);
}
void *fun2(){
	int y;
	sem_wait(&s);
	y = shared;
	printf("Thread2 read the value as : %d\n",y);
	y--;
	printf("Thread2 local updation : %d\n",y);
	sleep(1);
	shared = y;
	sem_post(&s);
	printf("Thread2 final value of shared : %d\n",shared);
}