#include "types.h"
#include "user.h"

int
main (int argc, char* argv[])
{
    printf(1, "checkpoint1\n");
   // int val = 1234 / ( argc - 1);
    printf(1, "checkpoint2\n");
  //  printf(1, "%d\n", val); // fd=1 means standard output.
    printf(1, "checkpoint3\n");


    exit2(0);
    return 0;
}