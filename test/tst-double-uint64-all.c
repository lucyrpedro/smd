#include <assert.h>
#include <float.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <smd.h>

int main() {

  printf("\n\nTesting UINT64 to DOUBLE!\n");

  uint64_t t;
  double d;

  printf("\nUINT64_MAX = %lu\n", UINT64_MAX);

  printf("\nFAILURE\n");

  for (uint64_t i = 0; i < UINT64_MAX; i++){
    d = t = UINT64_MAX - i;
    if (d == UINT64_MAX) {
      // printf("\nFAILURE");
      // printf("\nValue (double) = %lf", d);
      // printf("\nReal Value (uint64_t) = %lu", t);
      printf("\nConverted Value (uint64_t) = %lu", (uint64_t)d);
    } else {
      printf("\n\nSUCCESS\n");
      printf("\nValue (double) = %lf", d);
      printf("\nReal Value (uint64_t) = %lu", t);
      printf("\nConverted Value (uint64_t) = %lu", (uint64_t)d);
      break;
    }
  }

  uint64_t uint64_max = t;
  double dbl_max = d;

  printf("\n\n\nFinal Results - UINT64 to DOUBLE\n\n");

  printf("********************************************");
  printf("\nUINT64_MAX = %lu", UINT64_MAX);
  printf("\nMaximum DOUBLE = %lf", dbl_max);
  printf("\nMaximum UINT64 = %lu\n", uint64_max);
  printf("********************************************");

  printf("\n\n");

  // **************************************************************************************

  return 0;
}
