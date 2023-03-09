#include <iostream>
#include <string>
#include <algorithm>

struct Library;

struct Book {

    Book() {
        name = "";
        id = 0;
        total_quantity = 0;
        borrowed = 0;
    }

    std::string name;
    int id;
    int total_quantity;
    int borrowed;
};

struct Person {

    Person() {
        name = " ";
        id = 0;
        size = 0;
    }

    std::string name;
    int id;
    std::string borrowed_books[100]{};
    int size;
};

// Helper functions
bool compare_by_id(const Book &lhs, const Book &rhs) {
    return lhs.id <= rhs.id;
}

bool compare_by_name(const Book &lhs, const Book &rhs) {
    return lhs.name <= rhs.name;
}

void left_shift(std::string b[], int idx, int size) {
    for (int i{idx}; i < size; ++i) {
        b[i] = b[i + 1];
    }
}

bool book_exits(Book books[], int book_size, const std::string &book) {
    for (int i{}; i != book_size; ++i) {
        if (books[i].name == book) {
            return true;
        }
    }
    return false;
}

// symbolic constants
const int kMaxBooks{100};
const int kMaxPeople{100};

struct Library {

    Library() {
        books_size = 0;
        people_size = 0;
    }

    void run() {
        while (true) {
            int choice{Library::library_menu()};

            if (choice == 10) break;

            if (choice == 1) {
                add_book();
            } else if (choice == 2) {
                search_book_by_prefix();
            } else if (choice == 3) {
                print_who_borrowed_book_by_name();
            } else if (choice == 4) {
                print_library_by_id();
            } else if (choice == 5) {
                print_library_by_name();
            } else if (choice == 6) {
                add_user();
            } else if (choice == 7) {
                user_borrow_book();
            } else if (choice == 8) {
                user_return_book();
            } else if (choice == 9) {
                print_users();
            }
        }
    }

    static int library_menu() {
        int choice{-1};
        while (choice == -1) {
            std::cout << "\nLibrary Menu:\n"
                      << "1) Add book\n"
                      << "2) search book by prefix\n"
                      << "3) print who borrowed book by name\n"
                      << "4) print library by id\n"
                      << "5) print library by name\n"
                      << "6) add user\n"
                      << "7) user borrow book\n"
                      << "8) user return book\n"
                      << "9) print users\n"
                      << "10) Exit\n\n"
                      << "Enter your menu choice [1 - 10]: ";

            std::cin >> choice;

            if (!(choice >= 1 && choice <= 10)) {
                std::cout << "Invalid choice. Please try again\n";
                choice = -1;
            }
        }
        return choice;
    }

    void add_book() {
        if (books_size == kMaxBooks) {
            std::cout << "Sorry, cannot add anymore books in the database\n";
        } else {
            Book book{};
            std::cout << "Enter book info: id, name, total_quantity: ";
            std::cin >> book.id >> book.name >> book.total_quantity;

            books[books_size++] = book;
        }
    }

    void search_book_by_prefix() {
        std::cout << "Enter book name prefix: ";
        std::string prefix;
        std::cin >> prefix;

        int count{};
        for (int i{}; i != books_size; ++i) {
            std::string current_book{books[i].name};
            bool is_prefix{true};
            if (current_book.size() >= prefix.size()) {
                for (int j{}; j != int(prefix.size()); ++j) {
                    if (current_book[j] != prefix[j]) {
                        is_prefix = false;
                        break;
                    }
                }
                if (is_prefix) {
                    std::cout << current_book << '\n';
                    ++count;
                }
            }
        }

        if (!count) {
            std::cout << "No books with such prefix\n";
        }
    }

    void print_who_borrowed_book_by_name() {
        std::cout << "Enter book name: ";
        std::string book_name;
        std::cin >> book_name;

        bool found_book{false};
        for (int user{}; user != people_size; ++user) {
            for (int book{}; book != people[user].size; ++book) {
                if (book_name == people[user].borrowed_books[book]) {
                    found_book = true;
                    std::cout << people[user].name << '\n';
                    break;
                }
            }
        }
        if (!found_book) {
            std::cout << "Invalid book name\n";
        }
    }

    void print_library_by_id() {
        std::sort(books, books + books_size, compare_by_id);
        for (int i{}; i != books_size; ++i) {
            Book book{books[i]};
            std::cout << "id = " << book.id << ' '
                      << "name = " << book.name << ' '
                      << "total_quantity = " << book.total_quantity << ' '
                      << "total_borrowed = " << book.borrowed << '\n';
        }
    }

    void print_library_by_name() {
        std::sort(books, books + books_size, compare_by_name);
        for (int i{}; i != books_size; ++i) {
            Book book{books[i]};
            std::cout << "id = " << book.id << ' '
                      << "name = " << book.name << ' '
                      << "total_quantity = " << book.total_quantity << ' '
                      << "total_borrowed = " << book.borrowed << '\n';
        }
    }


    void add_user() {
        std::cout << "Enter user name and national id: ";
        Person person{};
        std::cin >> person.name >> person.id;

        people[people_size++] = person;
    }

    void user_borrow_book() {
        std::cout << "Enter user name and book name: ";
        std::string user_name, book_name;
        std::cin >> user_name >> book_name;

        if (!book_exits(books, books_size, book_name)) {
            std::cout << "Invalid book name\n";
        } else {
            for (int user{}; user != people_size; ++user) {
                if (people[user].name == user_name) {
                    for (int book{}; book != books_size; ++book) {
                        if (books[book].name == book_name) {
                            if (books[book].borrowed <= books[book].total_quantity) {
                                people[user].borrowed_books[people[user].size++] = book_name;
                                books[book].borrowed++;
                                return;
                            }
                        }
                    }
                }
            }
        }
    }

    void user_return_book() {
        std::cout << "Enter user name and book name: ";
        std::string user_name, book_name;
        std::cin >> user_name >> book_name;

        if (!book_exits(books, books_size, book_name)) {
            std::cout << "Invalid book name\n";
        } else {
            for (int user{}; user != people_size; ++user) {
                if (user_name == people[user].name) {
                    for (int book{}; book != people[user].size; ++book) {
                        if (book_name == people[user].borrowed_books[book]) {
                            left_shift(people[user].borrowed_books, book, people[user].size);
                            people[user].size--;

                            for (int i{}; i != books_size; ++i) {
                                if (books[i].name == book_name) {
                                    books[i].borrowed--;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    void print_users() {
        for (int user{}; user != people_size; ++user) {
            std::cout << "user " << people[user].name << ' '
                      << "id " << people[user].id << ' '
                      << "borrowed books ids: ";
            for (int book{}; book != books_size; ++book) {
                std::cout << people[user].borrowed_books[book] << ' ';
            }
            std::cout << '\n';
        }
    }

    Book books[kMaxBooks]{};
    Person people[kMaxPeople]{};
    int books_size;
    int people_size;
};

int main() {

    Library lib{};

    lib.run();

    return 0;
}