#include<iostream>
using namespace std;
main()
{
     cout << "Enter your name: ";
     string name;
     cin >> name;
     cout << "Enter your roll number: ";
     int roll_number;
     cin >> roll_number;
     cout << "Enter your aggregate: ";
     float aggregate;
     cin >> aggregate;
     cout << "Enter your section: ";
     char section;
     cin >> section;
     cout << "Student information:" <<endl;
     cout << "name: " << name <<endl;
     cout << "roll number: " << roll_number <<endl;
     cout << "aggregate: " << aggregate <<endl;
     cout << "section: " << section;     
}