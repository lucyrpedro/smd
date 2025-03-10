#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <smd.h>

// static int count;

int main() {
  smd_dtype_t *t_arr = smd_type_array(SMD_DTYPE_STRING, 4);
  smd_attr_t *attr = smd_attr_new("root", SMD_DTYPE_DTYPE, t_arr, 0);

  size_t count;
  smd_string_stream_t *s = smd_string_stream_create();
  smd_attr_ser_json(s, attr);
  char *buff = smd_string_stream_close(s, &count);
  printf("Attr: %zu: %s\n", count, buff);

  smd_attr_t *attr_deser;
  smd_attr_create_from_json(buff, count, &attr_deser);
  smd_dtype_t *orig_dtype = (smd_dtype_t *)smd_attr_get_value(attr_deser);
  smd_type_print(buff, orig_dtype);
  printf("Retrieved datatype %s\n", buff);

  smd_attr_destroy(attr);
  smd_type_unref(&t_arr);

  printf("OK\n");

  return 0;
}
