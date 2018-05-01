#include <string>
#include "student.h"

using namespace std;

void student::setName(string first, string last)
{
 firstName = first;

  lastName = last;
  }

  string student::fullName()
  {
   string name = firstName;

    name.append(" ");
     name.append(lastName);

      return name;
      }
