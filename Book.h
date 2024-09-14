#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

enum Availability { AVAILABLE, UNAVAILABLE };

struct BookInfo {
    string title;
    string author;
};

class Book {
private:
    static int nextID;
    int id;
    Availability status;
    int quantity;

public:
    static int totalBooks;
    BookInfo info;

    Book(string title, string author, int quantity = 1);
    int getID() const;
    void increaseQuantity(int amount = 1);
    bool isAvailable() const;
    void borrowBook();
    void returnBook();
    void displayInfo() const;
    friend void displayBookStatus(const Book &book);
};

#endif
