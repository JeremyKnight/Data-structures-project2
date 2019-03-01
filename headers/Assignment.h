/////////////////////
// Data structuresproject 2
// authors: Jeremy Knight, 
// Scott Griffith
// March 1, 2019
///////////////////////

#ifdef _ASSIGNMENT_H_
#define  _ASSIGNMENT_H_

#include <iostream>
#include <string>

using namespace std;

class Assignment {
    private:
        string name;
        int dueDate;
        string course;
        //due date

    public:
        Assignment(string n, int d, string c) {
            name = n;
            dueDate = d;
            course = c;
        }

        string getName() {
            return name;
        }

        void setName(string n) {
            name = n;
        }

        int geDueDate() {
            return dueDate;
        }

        void setDueDate(int d) {
            dueDate = d;
        }

        string getCourse() {
            return course;
        }

        void setCourse(string c) {
            course = c;
        }

};

#endif