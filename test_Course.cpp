// Filename: test_Course.cpp
// Summary: Test file for the Course class

#include "course.h"


int main() {
    // creating array of 5 Course objects
    Course c[5];
    int counter = 0;
    int repeats = 0;
    string cd, lnam, loc;
    int num, creds;

    do {
        cout << "Input Course Information: \n\n";
        cout << "Code: ";
        cin >> cd;
        c[counter].set_code(cd);
        cout << "Number: ";
        cin >> num;
        c[counter].set_number(num);
        cout << "Credits: ";
        cin >> creds;
        c[counter].set_num_credits(creds);
        cout << "Instructor Last Name: ";
        cin >> lnam;
        c[counter].set_instructor_last_name(lnam);
        cout << "Class Location: ";
        cin >> loc;
        c[counter].set_class_location(loc);

        if (counter == 0) {
            do {
                cout << "\n How many additional courses would you like to input?(up to 4): ";
                cin >> repeats;
            } while (repeats != 0 && repeats != 1 && repeats != 2 && repeats != 3 && repeats != 4);
        }
        counter++;

    } while(counter <= repeats);

    return 0;
}