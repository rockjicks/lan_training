#include<stdio.h>
int main(int argc,char **argv)
{
  if(argc>0)
    printf("first:%s\n",*argv);
  return 0;
}