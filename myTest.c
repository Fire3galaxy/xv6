#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[]) {
  int i;
  for (i = 1; i <= 3; i++)
    printf(1, "info(%d): %d\n", i, info(i));
  exit();
}
