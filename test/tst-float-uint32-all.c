#include <assert.h>
#include <float.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <smd.h>

int main() {

  printf("\n\nTesting UINT32 to FLOAT!\n");

  uint32_t t;
  float f;

  printf("\nUINT32_MAX = %u\n", UINT32_MAX);

  for (uint32_t i = 0; i < UINT32_MAX; i++){
    f = t = UINT32_MAX - i;
    if (f == UINT32_MAX) {
      printf("\nFAILURE\n");
      printf("\nValue (float) = %f", (double)f);
      printf("\nReal Value (uint32_t) = %u", t);
      printf("\nConverted Value (uint32_t) = %u\n", (uint32_t)f);
    } else {
      printf("\nSUCCESS\n");
      printf("\nValue (float) = %f", (double)f);
      printf("\nReal Value (uint32_t) = %u", t);
      printf("\nConverted Value (uint32_t) = %u\n", (uint32_t)f);
      break;
    }
  }

  uint32_t uint32_max = t;
  float flt_max = f;

  printf("\n\nFinal Results - UINT32 to FLOAT\n\n");

  printf("********************************************");
  printf("\nUINT32_MAX = %u", UINT32_MAX);
  printf("\nMaximum FLOAT = %f", (double)flt_max);
  printf("\nMaximum UINT32 = %u\n", uint32_max);
  printf("********************************************");

  printf("\n\n");

  // **************************************************************************************

  return 0;
}
