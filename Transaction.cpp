#include "Transaction.h"
#include <cmath>

const int Transaction::FINE_RATE_PER_DAY = 10;

int Transaction::calculateFine(double daysLate) {
    return static_cast<int>(ceil(daysLate * FINE_RATE_PER_DAY));
}
