#include "EquivalenceTests.h"
#include "InvoiceTest.h"
#include "UnitTest.h"

int main() {
  UnitTest unitTest;
  unitTest.runTests();

  EquivalenceTests equivalenceTests;
  equivalenceTests.runTests();

  InvoiceTest invoiceTest;
  invoiceTest.runTests();

  return 0;
}