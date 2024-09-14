
# 📚 Library Management System

![Library Banner](https://www.pixel-studios.com/blog/wp-content/uploads/2018/12/012-1200x600.jpg)

## 📖 Introduction
Welcome to the **Library Management System**, a simple yet powerful application built using C++. This system allows you to manage books, students, and transactions seamlessly. It supports adding, lending, returning, and tracking of books, alongside student management with fine calculations for late returns.

This terminal-based application mimics a real-world library, offering features like **auto-incrementing book IDs**, **student borrowing history**, and **fine calculation**.

---

## ✨ Features

- **Book Management**:
  - Add new books with a title, author, and quantity.
  - Auto-incrementing book ID for easy tracking.
  - Increase book quantity for existing books.
  - Borrow and return books with status updates.

- **Student Management**:
  - Add new students with a unique ID and name.
  - Borrowing history for each student.
  - **Automatic fine calculation** for late returns.
  - Prevent student deletion if they have borrowed a book.

- **Transaction Handling**:
  - Calculate fines based on the number of late days.
  - Maintain borrowing and return history.

- **Search and Display**:
  - Search books by title.
  - Display all available books and borrowed books.
  - View all students with details of their borrowed books and outstanding fines.

---

## 🛠️ Technologies Used

- **C++**
- **Object-Oriented Programming (OOP)**
- **Terminal-Based User Interface**

---

## 🧑‍💻 Getting Started

### 1. **Clone the Repository**

```bash
git clone https://github.com/Technishq/LibraryManagementSystem_Cpp
cd library-management-system
```

### 2. **Compile the Code**

Ensure you have a C++ compiler (e.g., `g++`) installed.

```bash
g++ -std=c++17 main.cpp Book.cpp Student.cpp Transaction.cpp Library.cpp -o library_system
```

### 3. **Run the Application**

```bash
./library_system
```

---

## 🎮 How to Use

After running the application, you will see the main menu:

```bash
--- Library Management System ---
1. Add New Book
2. Add New Student
3. Lend Book
4. Return Book
5. Delete Student
6. View Available Books
7. View Borrowed Books
8. Search Book by Title
9. Display All Info
10. Exit
```

### Key Functionalities:

- **Add New Book**: Input title, author, and quantity of the book.
- **Add New Student**: Add students using a unique ID and name.
- **Lend Book**: Lend a book to a student if available.
- **Return Book**: Return a borrowed book and calculate fines.
- **Delete Student**: Only deletes a student if they have no borrowed books.
- **View Available Books**: Lists all books currently available.
- **View Borrowed Books**: Lists all books that are borrowed by students.
- **Search Book by Title**: Search for a book by title and display its details.
- **Display All Info**: Shows all books, students, and their statuses.

### Example:

```bash
Enter your choice: 1
Enter Book Title: The Great Gatsby
Enter Book Author: F. Scott Fitzgerald
Enter Quantity: 5
Book created: The Great Gatsby (ID: 1)
```

---

## 🚀 Features in Action

### 1. **Add a Book**

```bash
Enter Book Title: The Great Gatsby
Enter Book Author: F. Scott Fitzgerald
Enter Quantity: 5
```

📚 *New Book Added!*

### 2. **Add a Student**

```bash
Enter Student ID: 101
Enter Student Name: John Doe
```

🧑‍🎓 *New Student Added!*

### 3. **Lend a Book**

```bash
Enter Student ID: 101
Enter Book ID: 1
```

📖 *John Doe borrowed The Great Gatsby!*

### 4. **Return a Book**

```bash
Enter Student ID: 101
Enter Book ID: 1
Enter Days Late: 3
```

💰 *Book returned successfully! Fine for late return: 30 units.*

---

## 🛡️ Error Handling

- **Book Not Available**: Error message when trying to borrow a book that is out of stock.
- **Student Not Found**: Error message when a non-existing student tries to borrow or return a book.
- **Student Borrow Restriction**: Prevents a student from borrowing multiple books without returning the previous one.
- **Delete Student Restriction**: Prevents deletion of students who have borrowed books.

---

## 🤝 Contributing

Contributions are welcome! If you'd like to improve or add new features to this project, feel free to fork the repository, make your changes, and submit a pull request.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

---

## 📷 Screenshots

Add screenshots or GIFs of your application here to make the README visually appealing.

---

## 📜 License

Distributed under the MIT License. See `LICENSE` for more information.

---

## 💬 Contact

If you have any questions, feel free to reach out!

- **Email**: er.tanishqs@gmail.com
- **GitHub**: [Technishq](https://github.com/technishq)

---

### 🌟 Star this Repository

If you found this project helpful, don't forget to give it a ⭐!

---

### Things to Update:

1.
2.
3.
