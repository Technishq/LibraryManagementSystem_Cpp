#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
public:
    static const int FINE_RATE_PER_DAY;
    static int calculateFine(double daysLate);
};

#endif
