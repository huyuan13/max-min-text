#include<stdio.h>
#include"max.h"
#include"min.h"

int a;
int b;

//int main (int argc,char* argv[])
int main ()
{
  
  printf("give me the value of a,b\n");
  scanf("%d%d",&a,&b);

  int maxNum = max();
  int minNum = min();
  printf("max value is %d\nmin value is %d\n",maxNum,minNum);

  return 0;







}
