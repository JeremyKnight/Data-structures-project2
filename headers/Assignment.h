/////////////////////
// Data structuresproject 2
// authors: Jeremy Knight, 
// Scott Griffith
// March 1, 2019
///////////////////////

#ifndef _ASSIGNMENT_H_
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

        int getDueDate() {
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

        bool operator == (Assignment& right) {
            return this->getCourse() == right.getCourse() && this->getDueDate() == right.getDueDate() && this->getName() == right.getName();
        }

        string toString() {
            return name+ " " + course + " " + to_string(dueDate); 
        }

};

#endif