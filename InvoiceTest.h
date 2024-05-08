// InvoiceTest.h

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        void testAddServiceCost();
        // Add other test methods here
        Invoice invoice();
        Invoice getServiceCost();
        
    }


private:
    void testAddServiceCost() {
        {
            Invoice Invoice("ABCD");    
            Invoice.addServiceCost(10);
            if (Invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice Invoice("ABCD");
            Invoice.addServiceCost(1);
            if (Invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        // Add more test cases here
        {   
            Invoice Invoice("ABCD");
            Invoice.addServiceCost(5);
            if(Invoice.getDollarsOwed() != 5) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

    // Add other test functions here
    void testAddServiceCostCharacteristic() {
        {
            Invoice Invoice("ABCD");
            Invoice.addServiceCost(5);
            if(Invoice.getDollarOwed() == 0 || Invoice.getDollarOwed() <= 0) {
                std::cout << "test 4 failed!" << std::endl;
            }
        }
    }
    }
};