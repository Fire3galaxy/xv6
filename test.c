#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]) {
  //clone(0, 1);
  int pid = fork();

  printf(1, "pid: %d, child: %d\n", getpid(), pid);

  exit();
}
