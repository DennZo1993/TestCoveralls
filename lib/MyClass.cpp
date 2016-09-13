#include "MyClass.h"
#include <algorithm>

void MyClass::SomeBigFunction() {
  int y = x;
  int z = 1;

  for (int i = 0; i < y / 2; ++i)
    z += i;

  if (x > 10) {
    z *= 2;
    for (int i = 0; i < z; ++i)
      y += x;
    z += y;
  } else {
    z = x * x;
    x = y - 2;
  }

  x += z;
}
