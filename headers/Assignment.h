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
// The Assignment class stores data about an upcoming homework assignment.
// Specifically it stores the name of the assignment, the day it is due, and the course from which it was assigned.
class Assignment {
    private:
        string name;
        int dueDate;
        string course;

    public:
        // Create a Assignment object.
        // n -- the name of the assignment
        // d -- the due date of the assignment
        //   -- the due date is the number of days since 0 (now) until the assignment is due
        // c -- the course the assignment belongs to
        Assignment(string n, int d, string c); 
        // returns the name of the assignment
        string getName();
        // set the name of the assignment
        // n -- the new name of the assignment
        void setName(string n);
        // returns the due date for the assignment
        int getDueDate();
        // set the due date for the assignment
        // d -- the time since now (in days) til the assignment is due
        void setDueDate(int d);
        // returns the course under which the assignment was given.
        string getCourse();
        // Set the course under which the assignment was given.
        // c -- the name of the course, a string.
        void setCourse(string c);
        // Returns true if right has the same name, due date, and course as `this`.
        // otherwise returns false
        // right -- the assignment to compare equality to.
        bool operator == (Assignment& right);
        // Get a textual representation of the assignment.
        string toString();
};

#endif