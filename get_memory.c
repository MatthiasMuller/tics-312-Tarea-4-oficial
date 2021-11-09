// se ingresa una memoria virtual y debe retornar la fisica
#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
  int flag_getmemory;
  char *s;
  uint num;
  int fact = 1;
  int virtualAddress = 0;

  num = 0;
  if (argc == 3)
  {
    fact = -1;
    if (argv[2] != 0)
    {
      s = argv[2];
      num = atoi(s);
      virtualAddress = (num * fact);
    }
  }
  else
  {
    if (argc == 2)
    {
      s = argv[1];
      num = atoi(s);
      virtualAddress = num;
    }
  }
  flag_getmemory = getmemory((uint *) virtualAddress);
  if (flag_getmemory == -1)
  {
    printf(1,"No asignado: %d \n", virtualAddress);
    printf(1,"No asignado %x\n", virtualAddress);
  }

  exit();
}
