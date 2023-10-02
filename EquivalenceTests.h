#include <iostream>

#include "Addition.h"

class EquivalenceTests {
 public:
  void runTests() {
    testPositiveIntegers();
    testNegativeIntegers();
    testMixIntegers();
    testZeroes();
    testSpecial();
  }

 private:
  void testPositiveIntegers() {
    Addition addition;
    if (addition.add(5, 10) != 15) {
      std::cout << "Test 1 failed!" << std::endl;
    }
  }

  void testNegativeIntegers() {
    Addition addition;
    if (addition.add(-4, -5) != -9) {
      std::cout << "Test 2 failed!" << std::endl;
    }
  }

  void testMixIntegers() {
    Addition addition;
    if (addition.add(-3, 6) != 3) {
      std::cout << "Test 3 failed!" << std::endl;
    }
  }

  void testZeroes() {
    Addition addition;
    if (addition.add(0, 0) != 0) {
      std::cout << "Test 4 failed!" << std::endl;
    }
  }

  void testSpecial() {
    Addition addition;
    if (addition.add(-1, 1) != 0) {
      std::cout << "Test 5 failed" << std::endl;
    }
  }
};