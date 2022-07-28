#include "book.hpp"
#include <iostream>
#include <list>

using namespace BookStore;

int main() {
    std::cout << "Basic book store\n";
    Book book1("Hunter x Hunter Vol. 1", "Yoshihiro Togashi", 125.40f);
    Comic comic1("Batman", "Some author name", "Some artist name", 130.5f);
    std::list<Book> products;
    products.push_back(book1);
    products.push_back(comic1);
    ShoppingCart cart(products);

    cart.showProducts();   
}