#include "segfault.h"
#include <stddef.h>
#include <stdio.h>

int sigsegv(void) {
  if (!*(volatile int *)NULL) {
    fprintf(stderr, "AVOID POSSIBLE NULL PTR DEREFERENCE!\n");
    return 1;
  }
  return *(volatile int *)NULL;
}
