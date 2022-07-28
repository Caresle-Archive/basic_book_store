#include "book.hpp"
#include <string>
#include <list>
#include <iostream>

using namespace BookStore;

Book::Book(std::string name, std::string author, float price) {
    this->name = name;
    this->author = author;
    this->price = price;
}

std::string Book::getName() {
    return this->name;
}

void Book::setName(std::string name) {
    this->name = name;
}

std::string Book::getAuthor() {
    return this->author;
}

void Book::setAuthor(std::string author) {
    this->author = author;
}

float Book::getPrice() {
    return this->price;
}

void Book::setPrice(float price) {
    this->price = price;
}

void Book::print() {
    std::cout << "Name: " << this->name << "\n";
    std::cout << "Author: " << this->author << "\n";
    std::cout << "Price: " << this->price << "\n";
}

// Comic declarations

Comic::Comic(std::string name, std::string author, std::string artist, float price)
: Book(name, author, price) {
    this->artist = artist;
}

std::string Comic::getArtist() {
    return this->artist;
}

void Comic::setArtist(std::string artist) {
    this->artist = artist;
}

void Comic::print() {
    Comic::Book::print();
    std::cout << "Artist:" << this->artist << "\n";
}

// Shopping cart
ShoppingCart::ShoppingCart(std::list<Book> products) {
    this->products = products;
}

void ShoppingCart::addProduct(Book book) {
    this->products.push_back(book);
}

void ShoppingCart::deleteProduct(int index) {
    std::list<Book>::iterator it = this->products.begin();
    for (int i = 0; i < index; i++) {
        it++;
    }
    this->products.erase(it);
}

void ShoppingCart::showProducts() {
    std::list<Book> const &list = this->products;
    for(auto const &i : list) {
        Book b = i;
        std::cout << "====\n";
        b.print();
        std::cout << "====\n";
    }
}

float calcTotal() {
    return 1.0f;
}