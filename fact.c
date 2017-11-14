
#include <stdio.h>
#include <stdlib.h>

#include "calcfact.h"

int main(int argc, char **argv)
{
  int num;
  int ramatest;
//  printf("debug: argc [%d]\n", argc);
   //printf("RamaTest");
  if (argc!=2)
  {
	printf("uso: %s <numero>\n", argv[0]);
        exit(-1);
  }
  num=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", num, calcfact(num));

}
