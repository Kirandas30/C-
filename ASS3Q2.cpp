#include <iostream>
#include <string>
using namespace std;

class Book {
    string author, title, publisher;
    float price;


public:
    Book(string auth, string titl, string publ, float pr) {
        author = auth;
        title = titl;
        publisher = publ;
        price = pr;
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
    }

    bool searchBook(string t, string a) {
        return (title == t && author == a);
    }

    // void sellBook(int quantity) {
    //     if (stock >= quantity) {
    //         stock -= quantity;
    //         cout << "Book sold. Total cost: " << price * quantity << endl;
    //     } else {
    //         cout << "Not enough stock available." << endl;
    //     }
    // }
};

int main() {
    Book books[] = {
        Book("J.K. Rowling", "Harry Potter", "Bloomsbury", 500.0),
        Book("Dan Brown", "The Da Vinci Code", "Corgi Books", 600.0),
        Book("George Orwell", "1984", "Penguin", 400.0)
    };
    int numBooks = sizeof(books) / sizeof(books[0]);

    string title, author;
    cout << "Enter the title of the book: ";
    getline(cin, title);
    cout << "Enter the author of the book: ";
    getline(cin, author);

    bool found = false;
    for (int i = 0; i < numBooks; ++i) {
        if (books[i].searchBook(title, author)) {
            found = true;
            cout << "Book is available!" << endl;
            books[i].displayDetails();

            // int quantity;
            // cout << "Enter quantity to buy: ";
            // cin >> quantity;
            // books[i].sellBook(quantity);
            // break;
        }
    }

    if (!found) {
        cout << "Sorry, the book is not available." << endl;
    }

    return 0;
}
