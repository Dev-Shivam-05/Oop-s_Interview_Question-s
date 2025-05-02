#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
    string book_title;
    string book_author;
    float book_price;
public:
    Book()
    {
        cout << "Book Name :- ";
        getline(cin , book_title);
        cout << "Book Author Name :- ";
        getline(cin , book_author);
        cout << "Book Price :- ";
        cin >> book_price;
    }
    void displayBook()
    {
        cout << "Book Name Is :- " << book_title << endl;
        cout << "Author Name Is :- " << book_author << endl;
        cout << "Book Price Is :- " << book_price << endl;
    }
};

int main()
{
    Book b;

    b.displayBook();
    return 0;
}