////////////////
//
////////////////

#ifndef _HOMEWORK_H_
#define _HOMEWORK_H_

#include <iostream>
#include <vector>
#include <string>

#include "Assignment.h"
using namespace std;
// The Homework class stores a collection of upcoming assignments.
class Homework {
    private:
        vector<Assignment> assignments;
        // Remove an assignment to the homowork object's collection of assignments.
        // int n -- the index of the assignment to remove
        void removeAssignment(int n);

    public:
        // Construct a homework object with an empty collection of assignments.
        Homework();
        // Construct a homework object with a vector of initial homeowrk assignments.
        // as -- the vector of initial homework assignments
        Homework(vector<Assignment> as);
        // Add an assignment to the homework object's collection of assignments.
        // a -- the assignment to add
        void addAssignment(Assignment a);
        // Remove an assignment to the homework object's collectionof assignments.
        // a -- the assignment to remove
        void removeAssignment(Assignment a);
        // Prints a description of every assignment in the object's collection of assignments.
        void print();
        // Returns the assignment closest to being due.
        Assignment getLatestAssignment();
};

#endif