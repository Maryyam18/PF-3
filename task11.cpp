#include<iostream>
using namespace std;
main (){
       float population;
       float rate;
       float decades;
       cout << "Enter the current world population: ";
       cin >> population;
       cout << "Enter the monthly birth rate (number of births per month): ";
       cin >> rate;
       decades = population+rate*12*30;
       cout << "The population in three decades will be: "<<decades;
}