#include <iostream>
#include <string>
#include <cstring>
#include "person.h"

Person:: Person(const std::string & str, const char * ch){
    this->lname = str;
    strcpy(this->fname, ch);
}

void Person:: Show() const{
    using namespace std;
    cout << this->fname << " " << this->lname;
}

void Person::FormalShow() const{
    using namespace std;
    cout << this->lname << ", " << this->fname;
}