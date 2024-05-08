// main.cpp
#include <iostream>

#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"

int main() {
    UnitTest unitTest;
    unitTest.runTests();

    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();

    InvoiceTest InvoiceTest;
    InvoiceTest.runTests();

    return 0;
}