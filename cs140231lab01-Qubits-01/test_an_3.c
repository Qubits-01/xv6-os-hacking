#include "types.h"
#include "user.h"

int main()
{
    char name[] = "testAAA";
    int syscall_result = appendname(name);

    printf(1, "Syscall result: %d\n", syscall_result);
    printf(1, "\n");

    exit();
}
