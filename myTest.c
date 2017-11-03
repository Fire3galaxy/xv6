#include "syscall.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int i = info(1);
    printf(1, "%i\n", i);
    return 0;
}
