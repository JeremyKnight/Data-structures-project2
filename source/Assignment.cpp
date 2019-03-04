#include "Assignment.h"

Assignment::Assignment(string n, int d, string c) {
    name = n;
    dueDate = d;
    course = c;
}

string Assignment::getName() {
    return name;
}

void Assignment::setName(string n) {
    name = n;
}

int Assignment::getDueDate() {
    return dueDate;
}

void Assignment::setDueDate(int d) {
    dueDate = d;
}

string Assignment::getCourse() {
    return course;
}

void Assignment::setCourse(string c) {
    course = c;
}

bool Assignment::operator==(Assignment &right) {
    return this->getCourse() == right.getCourse() && this->getDueDate() == right.getDueDate() && this->getName() == right.getName();
}

string Assignment::toString() {
    return "project name: " + name + ", course: " + course + ", due date: " + to_string(dueDate);
}