#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

int main(int argc, char *argv[]) {
    // FIXME: Info is not defined for some reason
    int i = 5; //info(1);
    printf(1, "%d\n", i);
    return 0;
}
