#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost, tip, tax, totalCost;
    int tipPercent, taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent;
    tip = mealCost * 0.01 * tipPercent;
    tax = mealCost * 0.01 * taxPercent;
    totalCost = mealCost + tip + tax;
    cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
    return 0;
}
