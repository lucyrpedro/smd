#include <assert.h>
#include <float.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <smd.h>

int main() {

  printf("\n\nTesting UINT32 to DOUBLE!\n");

  uint32_t t;
  double d;

  printf("\nUINT32_MAX = %u\n", UINT32_MAX);

  for (uint32_t i = 0; i < UINT32_MAX; i++){
    d = t = UINT32_MAX - i;
    if (d == UINT32_MAX) {
      printf("\nFAILURE\n");
      printf("\nValue (double) = %lf", d);
      printf("\nReal Value (uint32_t) = %u", t);
      printf("\nConverted Value (uint32_t) = %u", (uint32_t)d);
    } else {
      printf("\n\nSUCCESS\n");
      printf("\nValue (double) = %lf", d);
      printf("\nReal Value (uint32_t) = %u", t);
      printf("\nConverted Value (uint32_t) = %u", (uint32_t)d);
      break;
    }
  }

  uint32_t uint32_max = t;
  double dbl_max = d;

  printf("\n\n\nFinal Results - UINT32 to DOUBLE\n\n");

  printf("********************************************");
  printf("\nUINT32_MAX = %u", UINT32_MAX);
  printf("\nMaximum DOUBLE = %lf", dbl_max);
  printf("\nMaximum UINT32 = %u\n", uint32_max);
  printf("********************************************");

  printf("\n\n");

  // **************************************************************************************

  return 0;
}
