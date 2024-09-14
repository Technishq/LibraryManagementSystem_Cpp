#include "Book.h"

int Book::nextID = 1;
int Book::totalBooks = 0;

Book::Book(string title, string author, int quantity) 
    : id(nextID++), status(AVAILABLE), quantity(quantity) {
    info.title = title;
    info.author = author;
    totalBooks++;
}

int Book::getID() const {
    return id;
}

void Book::increaseQuantity(int amount) {
    quantity += amount;
}

bool Book::isAvailable() const {
    return quantity > 0 && status == AVAILABLE;
}

void Book::borrowBook() {
    if (isAvailable()) {
        quantity--;
        if (quantity == 0) {
            status = UNAVAILABLE;
        }
    }
}

void Book::returnBook() {
    quantity++;
    status = AVAILABLE;
}

void Book::displayInfo() const {
    cout << "Book ID: " << id << "\nTitle: " << info.title
         << "\nAuthor: " << info.author
         << "\nQuantity: " << quantity
         << "\nStatus: " << (status == AVAILABLE ? "Available" : "Not Available") << endl;
}

void displayBookStatus(const Book &book) {
    cout << "Book Status: " << (book.status == AVAILABLE ? "Available" : "Not Available") << endl;
}
