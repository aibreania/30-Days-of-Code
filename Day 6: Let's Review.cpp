#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
string input;
string s;
string r;

string *v;

cin >> t;

v = new string[t];

for(int i = 0; i < t; i++){

    cin >> input;

    *(v + i) = input;

    s = *(v + i);
    r = s;
    reverse(r.begin(), r.end());

    bool funny = true;

    for(int j = 0; j < s.length() - 1; j++){

        int a = static_cast<int>(s[j + 1]);

        int b = static_cast<int>(s[j]);

        int c = static_cast<int>(r[j + 1]);

        int d = static_cast<int>(r[j]);

        int m = abs(a - b);
        int n = abs(c - d);

        if(m != n){

            funny = false;
            break;
        }

    }
        if(funny == false)
            cout << "Not Funny" << endl;
        else
            cout << "Funny" << endl;

}    
    return 0;
}
