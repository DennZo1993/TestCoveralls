#pragma once

class MyClass {
public:
  MyClass() : x(0) {}
  MyClass(int a) : x(a) {}

  void setX(int a) { x =a; }
  int getX() const { return x; }

  void SomeBigFunction();

private:
  int x;
};
