#include<iostream>
using namespace std;
main(){
      string name;
      int matriculation_marks;
      int intermediate_marks;
      int ecat_marks;
      float aggregate;
      cout << "Enter the student's name: ";
      cin >> name;
      cout << "Enter matriculation marks (out of 1100): ";
      cin >> matriculation_marks;
      cout << "Enter intermediate marks (out of 550): ";
      cin >> intermediate_marks;
      cout << "Enter ecat marks (out of 400): ";
      cin >> ecat_marks;
      aggregate = (ecat_marks*0.50/400)+(matriculation_marks*0.10/1100)+(intermediate_marks*0.40/550);
      aggregate = aggregate*100;
      cout << "Aggregate score for " << name << " in UET is: " <<aggregate <<"%";
}