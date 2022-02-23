#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No\t" << "Name\t\t" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 
       << "\t"  // add the tab space
       <<names[r]<< "\t\t"  // add the two tab spaces
       << setiosflags(ios::fixed) << setprecision(2)   // add the fprmating outputs
       <<marks[r] << endl;
 }
}