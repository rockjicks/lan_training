#include<stdio.h>
int main(int argc, char *argv[])
{
  while(--argc)
    printf("%s%c",*++argv,argc>1?' ':'\0');
  printf("\n");
  return 0;
}
