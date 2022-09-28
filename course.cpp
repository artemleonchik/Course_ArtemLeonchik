// Filename: course.cpp
// Summary: Implementation file for Course class

#include "course.h"

// default constructor
Course::Course() {
    code = "--";
    number = 0;
    num_credits = 0;
    instruct_last_name = "--";
    class_location = "--";
}

// overloaded constructor
Course::Course(string cd, int num, int creds, string lnam, string loc) {
    code = cd;
    number = num;
    num_credits = creds;
    instruct_last_name = lnam;
    class_location = loc;

}

