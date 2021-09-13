#include "Library.h"
#include <iostream>

Library::Library()
{
numBooks = 0;
firstBook = nullptr;
lastBook = nullptr;
}

//Copy constructor
Library::Library( Library& other)
{
// implement this function
}

int Library::getnumBooks() const
{
return numBooks;
}

LibraryBook* Library::getFirstBook()
{
return firstBook;
}
LibraryBook* Library::getLastBook()
{
return lastBook;
}

// return a pointer to the n'th book in the linked list
LibraryBook* Library::getBook( const int pos )
{
// implement this function
}

// add a Book to the end of the linked list
void Library::addBook(Book book)
{
// implement this function
}


// Move a book to the front of the linked list
void Library::moveToFront (LibraryBook *entry)
{
// implement this function
}

// print all Books
void Library::printAllBooks() const
{
// implement this function
}

// print all Books of a single Genre
void Library::printBooksOfOneGenre(string genre)
{
// implement this function
}

#include <iostream>
#include "Book.h"

Book. CPP
Book::Book()
{
Year = 0;
}

Book::Book(string title, string author, string publisher, string genre, int year) : Title(title), Author(author), Publisher(publisher), Genre(genre), Year(year)
{}

string Book::getTitle() const
{
return Title;
}
void Book::setTitle(const string title)
{
Title = title;
}

string Book::getAuthor() const
{
return Author;
}
void Book::setAuthor(const string author)
{
Author = author;
}

string Book::getPublisher() const
{  
return Publisher;
}
void Book::setPublisher(const string publisher)
{
Publisher = publisher;
}


string Book::getGenre() const
{  
return Genre;
}
void Book::setGenre(const string genre)
{
Genre = genre;
}

int Book::getYear() const
{
return Year;
}
void Book::setYear(const int year)
{
Year = year;
}

void Book::printBook () const
{
cout << "Book: " << Title << ", " << Author << ", " << Publisher << ", " << Genre << ", " << Year << endl;
}