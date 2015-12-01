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

/*
Problem Statement

Little Bob loves chocolate, and he goes to a store with $N in his pocket. The price of each chocolate is $C. The store offers a discount: for every M wrappers he gives to the store, he gets one chocolate for free. How many chocolates does Bob get to eat?

Input Format: 
The first line contains the number of test cases, T. 
T lines follow, each of which contains three integers, N, C, and M.

Output Format: 
Print the total number of chocolates Bob eats.

Constraints: 
1≤T≤1000 
2≤N≤105 
1≤C≤N 
2≤M≤N

Sample input

3
10 2 5
12 4 4
6 2 2
Sample Output

6
3
5
Explanation 
In the first case, he can buy 5 chocolates with $10 and exchange the 5 wrappers to get one more chocolate. Thus, the total number of chocolates is 6.

In the second case, he can buy 3 chocolates for $12. However, it takes 4 wrappers to get one more chocolate. He can't avail the offer and hence the total number of chocolates remains 3.

In the third case, he can buy 3 chocolates for $6. Now he can exchange 2 of the 3 wrappers and get 1 additional piece of chocolate. Now he can use his 1 unused wrapper and the 1 wrapper of the new piece of chocolate to get one more piece of chocolate. So the total is 5.
*/

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int num=n/c;
        int wrappers=num;
        while(wrappers>=m){
            int newbars=wrappers/m;//how many newbars did we get from wrappers?
            wrappers=newbars+wrappers%m;//how many wrappers do we have remaining + from newbars?
            num+=newbars;
            }
        
        cout<<num<<"\n";
    }
    return 0;
}

