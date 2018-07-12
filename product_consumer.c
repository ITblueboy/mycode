#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>

pthread_mutex_t mutex;
int data=0;
void* hander2(void* arg)
{
  (void)arg;
    while(1)
  {

  pthread_mutex_lock(&mutex);
    if(data>=0&&data<3)
    {
      data+=1;
    printf("data=%d\n",data);
    sleep(3);
    }

    pthread_mutex_unlock(&mutex);
  }
}

void* hander1(void* arg)
{
  (void)arg;
    while(1)
  {

    pthread_mutex_lock(&mutex);
    if(data>0&&data<4)
  {
    data-=1;
    printf("data=%d\n",data);
    sleep(3);
  }

    pthread_mutex_unlock(&mutex);
  }
}
int main()
{
  pthread_t consumer;
  pthread_t productor;
  pthread_mutex_init(&mutex,NULL);
  int ret1=pthread_create(&consumer,NULL,hander1,NULL);
  int ret2=pthread_create(&productor,NULL,hander2,NULL);
  if(ret1<0)
  {
    perror("create consumer failed");
  }
  if(ret2<0)
  {
    perror("create productor failed");
  }
  
  pthread_join(productor,NULL);
  pthread_mutex_destroy(&mutex);
  return 0;
}
