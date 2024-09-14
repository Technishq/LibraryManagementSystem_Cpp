#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library library;  // Instantiate the library object
    int choice, studentID, bookID;
    double daysLate;
    string searchTitle;

    while (true) {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add New Book\n2. Add New Student\n3. Lend Book\n4. Return Book\n"
             << "5. Delete Student\n6. View Available Books\n7. View Borrowed Books\n"
             << "8. Search Book by Title\n9. Display All Info\n10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.addStudent();
                break;
            case 3:
                cout << "Enter Student ID: ";
                cin >> studentID;
                cout << "Enter Book ID: ";
                cin >> bookID;
                library.lendBook(studentID, bookID);
                break;
            case 4:
                cout << "Enter Student ID: ";
                cin >> studentID;
                cout << "Enter Book ID: ";
                cin >> bookID;
                cout << "Enter Days Late: ";
                cin >> daysLate;
                library.returnBook(studentID, bookID, daysLate);
                break;
            case 5:
                library.deleteStudent();
                break;
            case 6:
                library.displayAvailableBooks();
                break;
            case 7:
                library.displayBorrowedBooks();
                break;
            case 8:
                cout << "Enter Book Title: ";
                getline(cin, searchTitle);
                library.searchBookByTitle(searchTitle);
                break;
            case 9:
                library.displayLibraryInfo();
                break;
            case 10:
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
