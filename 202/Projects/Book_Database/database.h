#ifndef DATABASE_H
#define DATABASE_H

#include<string>
#include<vector>

class Database {
    public:
        void add();
        void print();
    
        std::string author;
        std::string title;
        std::string date;
};

#endif

