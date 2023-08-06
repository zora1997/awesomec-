#include <iostream>
using namespace std;

struct BBook {
    string addr;
    int age;
};

struct Book {
    unsigned int id;
    string name;
    vector<BBook> extra;
};

int main() {
    vector<Book> books;
    Book book1;
    book1.id = 123;
    book1.name = "123";
    BBook bbook1;
    bbook1.addr = "123123";
    bbook1.age = 123123;
    book1.extra.push_back(bbook1);
    books.push_back(book1);

    Book book2;
    book2.id = 456;
    book2.name = "456";
    BBook bbook2;
    bbook2.addr = "456456";
    bbook2.age = 456456;
    book2.extra.push_back(bbook2);
    books.push_back(book2);

    vector<Book> res;
    for (size_t i = 0; i < books.size(); i++)
    {
        Book &book = books[i];
        cout << i << book.id << endl;
        cout << i << book.name << endl;
        vector<BBook> tmp;
        for (size_t j = 0; j < book.extra.size(); j++)
        {
            cout << j << book.extra[j].addr << endl;
            cout << j << book.extra[j].age << endl;
            if (book.extra[j].addr == "123123")
            {
                cout << book.extra[j].addr << " not in tmp" << endl;
                continue;
            }
            tmp.push_back(book.extra[j]);
        }

        for (size_t k = 0; k < tmp.size(); k++)
        {
            cout << "tmp[" << k << "].addr: " << tmp[k].addr << endl;
            cout << "tmp[" << k << "].age: " << tmp[k].age << endl;
        }

        book.extra.assign(tmp.begin(), tmp.end());

        for (size_t l = 0; l < book.extra.size(); l++)
        {
            cout << "book.extra[" << l << "].addr: " << book.extra[l].addr << endl;
            cout << "book.extra[" << l << "].age: " << book.extra[l].age << endl;
        }

        res.push_back(book);
    }

    return 0;
}