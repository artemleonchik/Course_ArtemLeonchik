// Filename:    course.h
// Date:        9/27/22
// Summary:     Header file for Course class
// Author:      Artem Leonchik

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course {
private:
    // member variables
    string code;
    int number;
    int num_credits;
    string instruct_last_name;
    string class_location;

public:
    // default constructor
    Course();
    // overload constructor
    Course(string, int, int, string, string);
    // destructor

    // accessors
    string get_code() { return code; }
    int get_number() { return number; }
    int get_num_credits() { return num_credits; }
    string get_instruct_last_name() { return instruct_last_name; }
    string get_class_location() { return class_location; }

    // mutators
    void set_code(string cd) { code = cd; }
    void set_number(int num) { number = num; }
    void set_num_credits(int creds) {num_credits = creds; }
    void set_instructor_last_name(string lnam) {instruct_last_name = lnam; }
    void set_class_location(string loc) {class_location = loc; }



};


#endif
