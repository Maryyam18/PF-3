#include<iostream>
using namespace std;
main(){
           double megabytes;
           cout << "Enter the size in megabytes (MB): ";
           cin >> megabytes;
           double kilobytes = megabytes*1024;
           double bytes = kilobytes*1024;
           double bits = bytes*8;
           cout <<megabytes<<" MB is equivalent to "<<bits<<" bits.";
}