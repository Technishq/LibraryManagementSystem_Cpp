#include "Student.h"

Student::Student(int id, string name) {
    info.studentID = id;
    info.name = name;
    hasBorrowedBook = false;
    fine = 0;
}

string Student::getBorrowedBookTitle() const {
    return borrowedBookTitle;
}

void Student::borrowBook(string bookTitle) {
    borrowedBookTitle = bookTitle;
    hasBorrowedBook = true;
    borrowedBooksHistory.push_back(bookTitle);
}

void Student::returnBook() {
    borrowedBookTitle = "";
    hasBorrowedBook = false;
}

void Student::displayBorrowedHistory() {
    cout << "Borrowing History for " << info.name << ":\n";
    for (const string &book : borrowedBooksHistory) {
        cout << book << endl;
    }
}

void Student::payFine(double amount) {
    if (amount >= fine) {
        fine = 0;
    } else {
        fine -= amount;
    }
}

void Student::addFine(double amount) {
    fine += amount;
}

void Student::displayInfo() const {
    cout << "Student ID: " << info.studentID << "\nName: " << info.name
         << "\nBorrowed Book: " << (hasBorrowedBook ? borrowedBookTitle : "No Book Borrowed")
         << "\nFine: " << fine << endl;
}
