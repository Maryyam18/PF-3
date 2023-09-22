#include<iostream>
using namespace std;
main (){
        string name;
        int wins;
        int draws;
        int losses;
        cout << "Enter the name of the cricket team: ";
        cin >> name;
        cout << "Enter the number of wins: ";
        cin >> wins;
        wins = 3*wins;
        cout << "Enter the number of draws: ";
        cin >> draws;
        draws = 1*draws;
        cout << "Enter the number of losses: ";
        cin >> losses;
        losses = 0*losses;
        int points = wins+draws+losses;
        cout << name<<" has obtained "<<points<<" points in the Asia cup tournament.";
}
        