#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class student
{
private:
string firstName;
string lastName;
public:
void setName(string first, string last);
string fullName();
};

#endif

