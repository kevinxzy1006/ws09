//Invoice.h
#ifndef INVOICE_H
#define INVOICE_H

class Invoice {
    private:
    std::string invoiceId;
    int dollarOwed;

    public:
    Invoice(); //Default constructor
    //Constructor that initializes an invoice with a given invoice ID.
    Invoice(const char* invoiceId);

    //Getter
    std::string getInvoiceId() const;
    int getDollarsOwed() const;
    //Setter
    void setInvoiceId(std::string invoiceId);
    void setDollarOwed(int dollarOwed, int costdollars);

    //Add service cost
    void addServiceCost(int costDollars);


};
#endif //INVOICE_H
