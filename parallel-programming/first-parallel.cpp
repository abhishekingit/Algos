#include<iostream>
#include<stdio.h>
#include<omp.h>
using namespace std;

int main()
{
  omp_set_num_threads(4); 
  int i;
  
  #pragma omp parallel for
      for(i=0;i<100;i++)	
        printf("\n Hello World From %d tid=%d",i,omp_get_thread_num());
  
  
 
  return 1;
}