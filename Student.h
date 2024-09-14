#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct StudentInfo {
    int studentID;
    string name;
};

class Student {
private:
    vector<string> borrowedBooksHistory;
    string borrowedBookTitle;
    double fine;

public:
    StudentInfo info;
    bool hasBorrowedBook;

    Student(int id, string name);
    string getBorrowedBookTitle() const;
    void borrowBook(string bookTitle);
    void returnBook();
    void displayBorrowedHistory();
    void payFine(double amount);
    void addFine(double amount);
    void displayInfo() const;
};

#endif
