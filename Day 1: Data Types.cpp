#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
// Declare second integer, double, and String variables.
    int ii;
    double dd=0.0;
    string ss;
    // Read and save an integer, double, and String to your variables.
    cin >> ii >> dd;
    getline(cin, ss);
    getline(cin, ss); //After importing string header, is it working?. before getline(cin,s2), we need to read dummy string as getline(cin,dummystr) because we are using cin to read the first two inputs and getline for third, these functions does not mix properly.
    // Print the sum of both integer variables on a new line.
    cout << i + ii << endl;
    // Print the sum of the double variables on a new line.
    cout << std::fixed << setprecision(1) << d + dd << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + ss << endl;
    
 return 0;
}
