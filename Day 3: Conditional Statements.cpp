#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int N;
    cin >> N;
    if((N%2)==1)
{
    cout <<"Weird";
    }
    else if(N>=2){
    if(N>20){
        cout<<"Not Weird";
    }
    else if(N>=6){
        cout<<"Weird";
    }
    else if(N>=2){
        cout<<"Not Weird";
    }
}
    return 0;
}