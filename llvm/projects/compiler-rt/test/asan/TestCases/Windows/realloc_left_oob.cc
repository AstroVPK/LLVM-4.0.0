// RUN: %clang_cl_asan -O0 %s -Fe%t
// RUN: not %run %t 2>&1 | FileCheck %s

#include <malloc.h>

int main() {
  char *buffer = (char*)realloc(0, 42);
  buffer[-1] = 42;
// CHECK: AddressSanitizer: heap-buffer-overflow on address [[ADDR:0x[0-9a-f]+]]
// CHECK: WRITE of size 1 at [[ADDR]] thread T0
// CHECK-NEXT: {{#0 .* main .*realloc_left_oob.cc}}:[[@LINE-3]]
// CHECK: [[ADDR]] is located 1 bytes to the left of 42-byte region
// CHECK: allocated by thread T0 here:
// CHECK-NEXT: {{#0 .* realloc }}
// CHECK-NEXT: {{#1 .* main .*realloc_left_oob.cc}}:[[@LINE-8]]
  free(buffer);
}
