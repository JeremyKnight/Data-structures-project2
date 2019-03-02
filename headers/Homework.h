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

class Homework {
    private:
        vector<Assignment> assignments;
    public:
        Homework() {
            assignments = vector<Assignment>();
        }

        void addAssignment(Assignment a) {
            assignments.push_back(a);
        }

        void removeAssignment(int n) {
            if(n< assignments.size()) {
                assignments.erase(assignments.begin() + n);
            } else {
                cout << "no assignmnet found" << endl;
            }
        }

        void removeAssignment(Assignment a) {
            for(int i=0; i<assignments.size(); i++) {
                Assignment b = assignments.at(i);
                if(b == a) {
                    removeAssignment(i);
                }
            }
        }

        void print() {
            for(int i = 0; i< assignments.size(); i++) {
                cout << assignments.at(i).toString() << endl;
            }
        }



};

#endif