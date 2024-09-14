#include "Library.h"
#include <iostream>
#include <limits>

Library::Library() {
    cout << "Library system initialized." << endl;
}

Library::~Library() {
    cout << "Library system terminated." << endl;
}

Book* Library::findBookByTitle(string title) {
    for (Book &book : books) {
        if (book.info.title == title) {
            return &book;
        }
    }
    return nullptr;
}

Student* Library::findStudentByID(int id) {
    for (Student &student : students) {
        if (student.info.studentID == id) {
            return &student;
        }
    }
    return nullptr;
}

void Library::addBook() {
    string title, author;
    int quantity;

    cout << "Enter Book Title: ";
    getline(cin, title);
    cout << "Enter Book Author: ";
    getline(cin, author);
    cout << "Enter Quantity: ";
    cin >> quantity;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Book* existingBook = findBookByTitle(title);
    if (existingBook) {
        existingBook->increaseQuantity(quantity);
    } else {
        Book newBook(title, author, quantity);
        books.push_back(newBook);
    }
}

void Library::addStudent() {
    int id;
    string name;
    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (findStudentByID(id)) {
        cout << "Error: Student ID already exists." << endl;
        return;
    }

    cout << "Enter Student Name: ";
    getline(cin, name);

    Student student(id, name);
    students.push_back(student);
}

void Library::deleteStudent() {
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->info.studentID == id) {

           
            if (it->hasBorrowedBook) {
                cout << "Error: Cannot delete student with ID " << id << " as they have borrowed a book." << endl;
                return;
            }
            students.erase(it);
            cout << "Student with ID " << id << " deleted successfully." << endl;
            return;
        }
    }

    cout << "Error: Student ID not found." << endl;
}

void Library::lendBook(int studentID, int bookID) {
    for (Book &book : books) {
        if (book.isAvailable() && book.getID() == bookID) {
            for (Student &student : students) {
                if (student.info.studentID == studentID && !student.hasBorrowedBook) {
                    book.borrowBook();
                    student.borrowBook(book.info.title);
                    cout << "Book borrowed successfully!" << endl;
                    return;
                }
            }
            cout << "Error: Student not found or already has a borrowed book." << endl;
            return;
        }
    }
    cout << "Error: Book not available or book ID not found." << endl;
}

void Library::returnBook(int studentID, int bookID, double daysLate) {
    for (Book &book : books) {
        if (book.getID() == bookID) {
            for (Student &student : students) {
                if (student.info.studentID == studentID && student.hasBorrowedBook) {
                    book.returnBook();
                    student.returnBook();
                    double fine = Transaction::calculateFine(daysLate);
                    student.addFine(fine);
                    cout << "Book returned successfully! Fine: " << fine << endl;
                    return;
                }
            }
        }
    }
    cout << "Error: Student or book not found." << endl;
}

void Library::displayAvailableBooks() {
    cout << "\n--- Available Books ---\n";
    for (Book &book : books) {
        if (book.isAvailable()) {
            book.displayInfo();
        }
    }
}

void Library::displayBorrowedBooks() {
    cout << "\n--- Borrowed Books ---\n";
    for (const Student &student : students) {
        if (student.hasBorrowedBook) {
            cout << student.info.name << " has borrowed: " << student.getBorrowedBookTitle() << endl;
        }
    }
}

void Library::searchBookByTitle(string title) {
    Book* book = findBookByTitle(title);
    if (book) {
        book->displayInfo();
    } else {
        cout << "Book not found." << endl;
    }
}

void Library::displayLibraryInfo() {
    cout << "\n--- Library Books ---\n";
    for (Book &book : books) {
        book.displayInfo();
        cout << endl;
    }

    cout << "\n--- Students ---\n";
    for (Student &student : students) {
        student.displayInfo();
        cout << endl;
    }
}
