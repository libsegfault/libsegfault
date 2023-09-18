#include <stddef.h>
#include "segfault.h"

int sigsegv(void) {
    return *(volatile int *) NULL;
}
