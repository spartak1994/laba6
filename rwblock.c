#include <pthread.h>
#include <stdio.h>

int main()

{
int a;
int b;
int c;
pthread_rwlock_t rbw;// = PTHREAD_RWLOCK_INITIALIZER;
pthread_rwlock_init(&rbw, NULL); 
a=pthread_rwlock_rdlock(&rbw);
b=pthread_rwlock_tryrdlock(&rbw);
c=pthread_rwlock_unlock(&rbw);
printf("a=%d\nb=%d\nc=%d\n",a,b,c);
return 0;
}

