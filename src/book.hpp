#include <string>
#include <list>
#ifndef BOOK_H
#define BOOK_H

namespace BookStore {
    class Book {
        public:
            Book(std::string name, std::string author, float price);
            
            std::string getName();
            void setName(std::string name);
            
            std::string getAuthor();
            void setAuthor(std::string author);

            float getPrice();
            void setPrice(float price);

            virtual void print();

        protected:
            std::string name;
            std::string author;
            float price;
    };

    class Comic : public Book {
        public:
            Comic(std::string name, std::string author, std::string artist, float price);
            std::string getArtist();
            void setArtist(std::string artist);
            void print();

        protected:
            std::string artist;
    };

    class ShoppingCart {
        public:
            ShoppingCart(std::list<Book> products);
            
            void addProduct(Book book);
            void deleteProduct(int index);
            void showProducts();

            float calcTotal();

        protected:
            std::list<Book> products;

    };
}

#endif