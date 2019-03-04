#include <iostream>
#include <cassert>
#include "Assignment.h"
#include "Homework.h"
// Test assignment functions not tested by `main`.
void assignmentUnitTest() {
    Assignment a = Assignment("", 0, "");
    cout << a.toString() << endl;
    assert(a.toString() == "project name: , course: , due date: 0");

    a.setCourse("Writing 1");
    a.setName("Rhetorical Analysis Rough Draft");
    a.setDueDate(10);
    
    cout << a.toString() << endl;
    assert(a.toString() == "project name: Rhetorical Analysis Rough Draft, course: Writing 1, due date: 10");
}

int main() {
    vector<Assignment> assigns = vector<Assignment>();

    Assignment a = Assignment("project 1", 5, "place");
    assigns.push_back(a);
    Assignment b = Assignment("project 2",  10, "place");
    assigns.push_back(b);
    Assignment c = Assignment("project 3", 6, "place");
    assigns.push_back(c);
    Assignment d = Assignment("project 4", 3, "place");
    assigns.push_back(d);

    Homework hw = Homework(assigns);
    hw.print();
    cout << " " << endl;

    Assignment e = Assignment("project 5", 2, "place");
    hw.addAssignment(e);
    hw.print();

    cout << "latest assignment: " << hw.getLatestAssignment().toString() << endl;

    hw.removeAssignment(b);
    hw.print();
    assignmentUnitTest();
}