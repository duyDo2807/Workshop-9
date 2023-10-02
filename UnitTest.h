#include <iostream>

#include "Addition.h"

class UnitTest {
 public:
  void runTests() { testAddition(); }

 private:
  void testAddition() {
    Addition addition;

    if (addition.add(1, 2) != 3) {
      std::cout << "Test 1 failed!" << std::endl;
    }
    if (addition.add(2, 5) != 7) {
      std::cout << "Test 2 failed!" << std::endl;
    }
    if (addition.add(6, 4) != 10) {
      std::cout << "Test 3 failed!" << std::endl;
    }
  }
};