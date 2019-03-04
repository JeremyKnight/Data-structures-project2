#include "Homework.h"

Homework::Homework() {
    assignments = vector<Assignment>();
}

Homework::Homework(vector<Assignment> as) {
    assignments = as;
}

void Homework::addAssignment(Assignment a) {
    assignments.push_back(a);
}

void Homework::removeAssignment(int n) {
    if (n < assignments.size())
    {
        assignments.erase(assignments.begin() + n);
    }
    else
    {
        cout << "no assignmnet found" << endl;
    }
}

void Homework::removeAssignment(Assignment a) {
    for (int i = 0; i < assignments.size(); i++) {
        Assignment b = assignments.at(i);
        if (b == a) {
            removeAssignment(i);
        }
    }
}

void Homework::print() {
    for (int i = 0; i < assignments.size(); i++) {
        cout << assignments.at(i).toString() << endl;
    }
}

Assignment Homework::getLatestAssignment() {
    int x = 2000000;
    Assignment *a = NULL;
    for (int i = 0; i < assignments.size(); i++) {
        if (assignments.at(i).getDueDate() < x) {
            x = assignments.at(i).getDueDate();
            a = &assignments.at(i);
        }
    }
    return *a;
}
