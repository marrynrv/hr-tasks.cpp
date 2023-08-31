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
#include <unordered_map>

using namespace std;
int main() {
    int a,b; // for example a = 7 b = 5
   cin>>a>>b;
   a=a+b;  // a = 7 + 5 = 12
   b=a-b; // b = 12 - 5 = 7
   a=a-b;  // a = 12 - 7 = 5
   cout<<a<<" "<<b<<endl;
    return 0;
}