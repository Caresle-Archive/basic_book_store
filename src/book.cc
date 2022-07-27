#include "book.hpp"
#include <string>

using namespace BookStore;

Book::Book(std::string name, std::string author, float price) {
    this->name = name;
    this->author = author;
    this->price = price;
}

std::string Book::getName() {
    return this->name;
}

std::string Book::getAuthor() {
    return this->author;
}

float Book::getPrice() {
    return this->price;
}