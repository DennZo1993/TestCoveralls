#include <gtest/gtest.h>
#include "MyClass.h"

TEST(MyTests, Test1) {
  MyClass m;
  m.setX(2);
  ASSERT_EQ(2, m.getX());
  m.SomeBigFunction();
}

TEST(MyTests, Test2) {
  MyClass m;
  m.setX(5);
  ASSERT_EQ(5, m.getX());
  m.SomeBigFunction();
  int a = m.getX();
}

