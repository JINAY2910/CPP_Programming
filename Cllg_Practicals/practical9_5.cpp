#include <iostream>
#include <map>
#include <queue>
#include <string>
using namespace std;

class LibraryException {
public:
    string message;
    LibraryException(string msg) : message(msg) {}
};

class BookNotFoundException : public LibraryException {
public:
    BookNotFoundException(string msg) : LibraryException(msg) {}
};

class MemberNotFoundException : public LibraryException {
public:
    MemberNotFoundException(string msg) : LibraryException(msg) {}
};

class OverdueBookException : public LibraryException {
public:
    OverdueBookException(string msg) : LibraryException(msg) {}
};

class LibrarySystem {
private:
    map<int, string> books;
    map<int, string> members;
    map<int, bool> overdueStatus;
    queue<pair<int, int>> borrowQueue;
public:
    void addBook(int id, string title) {
        books[id] = title;
    }

    void addMember(int id, string name, bool isOverdue) {
        members[id] = name;
        overdueStatus[id] = isOverdue;
    }

    void requestBorrow(int memberId, int bookId) {
        borrowQueue.push({memberId, bookId});
    }

    void processRequests() {
        while (!borrowQueue.empty()) {
            int memberId = borrowQueue.front().first;
            int bookId = borrowQueue.front().second;
            borrowQueue.pop();
            try {
                if (books.find(bookId) == books.end())
                    throw BookNotFoundException("Book not found: " + to_string(bookId));
                if (members.find(memberId) == members.end())
                    throw MemberNotFoundException("Member not found: " + to_string(memberId));
                if (overdueStatus[memberId])
                    throw OverdueBookException("Member has overdue books: " + to_string(memberId));
                cout << "Book \"" << books[bookId] << "\" issued to " << members[memberId] << endl;
            } catch (LibraryException &e) {
                cout << "Error: " << e.message << endl;
            }
        }
    }
};

int main() {
    LibrarySystem lib;
    lib.addBook(1, "C++ Fundamentals");
    lib.addBook(2, "Data Structures");
    lib.addMember(101, "Jinay", false);
    lib.addMember(102, "Arth", true);
    lib.requestBorrow(101, 1);
    lib.requestBorrow(102, 2);
    lib.requestBorrow(103, 1);
    lib.requestBorrow(101, 3);
    lib.processRequests();
    return 0;
}
