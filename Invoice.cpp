//Invoice.cpp
#include <iostream>
#include "Invoice.h"

//Constructor
Invoice::Invoice() {}; //Default
Invoice::Invoice(const char invoiceId[5]) {} //with parameter

//Getter
std::string Invoice::getInvoiceId() const {
    return invoiceId;
}
int Invoice::getDollarsOwed() const {
    return dollarOwed;
}

//Setter
void Invoice::setInvoiceId(std::string invoiceId) {
    this->invoiceId = invoiceId;
}
void Invoice::setDollarOwed(int dollarOwed, int costDollar) {
    costDollar = dollarOwed;
}

//Add service cost
void Invoice::addServiceCost(int costDollars) {
    if(costDollars <= 0 && costDollars == 0) {
        std::cout << "Please enter a positive number." << std::endl;
    }

}