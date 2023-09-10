#include "testy/example1.h"

int private_ok_value = 2;

int privateAccess(int a, int b) {
  return a + b == private_ok_value;
}