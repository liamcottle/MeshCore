#include "TxtDataHelpers.h"

void StrHelper::strncpy(char* dest, const char* src, size_t buf_sz) {
  while (buf_sz > 1 && *src) {
    *dest++ = *src++;
    buf_sz--;
  }
  *dest = 0;  // truncates if needed
}

void StrHelper::strzcpy(char* dest, const char* src, size_t buf_sz) {
  while (buf_sz > 1 && *src) {
    *dest++ = *src++;
    buf_sz--;
  }
  while (buf_sz > 0) {  // pad remaining with nulls
    *dest++ = 0;
    buf_sz--;
  }
}
