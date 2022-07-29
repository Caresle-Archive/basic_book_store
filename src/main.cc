#include "book.hpp"
#include <iostream>
#include <list>

using namespace BookStore;
// Options code
enum Options {
    SHOW_PRODUCTS = 1,
    SHOW_CART = 2,
    ADD_PRODUCT = 3,
    DELETE_PRODUCT = 4,
    SHOW_TOTAL = 5,
    EXIT_STORE = 6
};

void printMenu() {
    std::cout << "\nMenu:\n";
    std::cout << "1) Show products\n";
    std::cout << "2) Show cart products\n";
    std::cout << "3) Add product to cart\n";
    std::cout << "4) Delete product to cart\n";
    std::cout << "5) Show total\n";
    std::cout << "6) Exit\n";
}

void printProductsList(std::list<Book> products) {
    int i = 0;
    for (auto product : products) {
        std::cout << "id: " << i << "\n";
        product.print();
        i++;
    }
} 

int main() {
    std::cout << "Basic book store\n";
    
    Book book1("Hunter x Hunter Vol. 1", "Yoshihiro Togashi", 125.40f);
    Comic comic1("Batman", "Some author name", "Some artist name", 130.5f);
    
    std::list<Book> products;
    products.push_back(comic1);
    products.push_back(book1);
    
    auto element = products.begin();
    
    ShoppingCart cart;
    int option = 0;

    while (option != EXIT_STORE) {
        printMenu();
        std::cin >> option;
        switch (option) {
            case SHOW_PRODUCTS:
                std::cout << "The products available are:\n";
                printProductsList(products);
                break;

            case SHOW_CART:
                std::cout << "The products in the cart are: \n";
                cart.showProducts();
                break;

            case ADD_PRODUCT:
                int i;
                std::cout << "Number of the product to add:\n";
                std::cin >> i;
                if (i > products.size()) {
                    std::cout << "Product doesn't exists\n";
                    break;
                }
                std::advance(element, i);
                cart.addProduct(*element);
                break;

            case DELETE_PRODUCT:
                if (cart.getNumberProducts() <= 0) {
                    std::cout << "The cart is empty\n";
                    break;
                }
                int j;
                std::cout << "Number of the product to delete:\n";
                std::cin >> j;
                cart.deleteProduct(j);
                break;

            case SHOW_TOTAL:
                std::cout << "Your total is: " << cart.calcTotal() << "\n";
                break;

            default:
                break;
        }
    }

}