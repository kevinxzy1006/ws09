// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
        testContrarySignInteger();
        testZero();
        testBigPostitiveInteger();
        testBigNegativeInteger();
        testSpecialInteger();
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

    // Add other test functions here
    void testContrarySignInteger() {
        Addition addition;
        if(addition.add(-3, 5) != 2) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testZero() {
        Addition addition;
        if(addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testBigPostitiveInteger() {
        Addition addition;
        if(addition.add(10000, 230000) != 240000) {
            std::cout <<"Test 5 failed!" << std::endl;
        }
    }

    void testBigNegativeInteger() {
        Addition addition;
        if(addition.add(-50000, -910000) != -960000) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    void testSpecialInteger() {
        Addition addition;
        if(addition.add(1, -1) != 0) {
            std::cout << "Test 7 failed!" << std::endl;
        }
    }


};