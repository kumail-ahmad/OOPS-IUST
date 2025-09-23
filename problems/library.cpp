#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, days;
    float fine = 0;
    string issuedBook;
    string book;

    while (true) {
        cout << "\nLibrary System\n";
        cout << "1. Issue a Book\n";
        cout << "2. Return a Book\n";
        cout << "3. Check Membership Status\n";
        cout << "4. Exit\n";
        cout << "5. Show Issued Book\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (!issuedBook.empty()) {
                    cout << "You already have \"" << issuedBook << "\" issued.\n";
                    break;
                }
                cin.ignore();
                cout << "Enter book name to issue: ";
                getline(cin, book);
                issuedBook = book;
                cout << "Book \"" << issuedBook << "\" issued successfully.\n";
                break;

            case 2:
                if (issuedBook.empty()) {
                    cout << "No book to return.\n";
                    break;
                }
                cin.ignore();
                cout << "Enter book name to return: ";
                getline(cin, book);
                if (book == issuedBook) {
                    cout << "Enter number of days late: ";
                    cin >> days;

                    if (days <= 5)
                        fine = days * 1;
                    else if (days <= 10)
                        fine = 5 + (days - 5) * 2;
                    else
                        fine = 15 + (days - 10) * 5;

                    cout << "Book \"" << issuedBook << "\" returned successfully.\n";
                    if (fine > 0)
                        cout << "Late fee: Rs. " << fine << endl;
                    else
                        cout << "No late fee.\n";

                    issuedBook = "";
                } else {
                    cout << "Book not found.\n";
                }
                break;

            case 3:
                cout << "Enter number of days since membership started: ";
                cin >> days;
                if (days > 30)
                    cout << "Membership Expired! Please renew.\n";
                else
                    cout << "Membership Active.\n";
                break;

            case 4:
                return 0;

            case 5:
                if (issuedBook.empty())
                    cout << "No book currently issued.\n";
                else
                    cout << "Currently issued book: \"" << issuedBook << "\"\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    }
}
