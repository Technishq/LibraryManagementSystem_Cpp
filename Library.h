#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "Book.h"
#include "Student.h"
#include "Transaction.h"

class Library {
private:
    vector<Book> books;
    vector<Student> students;

    Book* findBookByTitle(string title);
    Student* findStudentByID(int id);

public:
    Library();
    ~Library();
    void addBook();
    void addStudent();
    void deleteStudent();
    void lendBook(int studentID, int bookID);
    void returnBook(int studentID, int bookID, double daysLate);
    void displayAvailableBooks();
    void displayBorrowedBooks();
    void searchBookByTitle(string title);
    void displayLibraryInfo();
};

#endif
