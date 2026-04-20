//Edited directly on GitHub

#include <iostream>
using namespace std; 

int main()
{
    cout << "Hello from Student A!";

    cout << "Hello from Student B!" << endl;
    cout << "Hello from Tamora Brown! This is my first Git commit." << endl;
    cout << "Git makes collaboration easy!" << endl; 
    cout << "Changes made by Kennedy" << endl;

    cout << "Lab 1 completed on April 13, 2026!" << endl;

    cout << "Feature by Tamora: Branching is awesome!" << endl;

    cout << "Student ID: S00462862 | Name: Tamora Brown" << endl; 

    //Feature by Tamora: This is my assigned function code for grade calculator
    double score;
    cout << "Enter your score: ";
    cin >> score;

    char grade;

    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    cout << "Your grade is: " << grade << endl;

    return 0;
}
