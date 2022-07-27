#include <string>
#ifndef BOOK_H
#define BOOK_H

namespace BookStore {
    class Book {
        public:
            Book(std::string name, std::string author, float price);
            std::string getName();
            std::string getAuthor();
            float getPrice();

        protected:
            std::string name;
            std::string author;
            float price;
    };
}

#endif