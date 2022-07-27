#include "book.hpp"
#include <iostream>

using namespace BookStore;

int main() {
    std::cout << "Basic book store\n";
    Book book1("Hunter x Hunter Vol. 1", "Yoshihiro Togashi", 125.40f);
    std::cout << book1.getName() << "\n";
    std::cout << book1.getAuthor() << "\n";
    std::cout << book1.getPrice() << "\n";
}