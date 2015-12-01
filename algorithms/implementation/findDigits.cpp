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

Given an integer, N, traverse its digits (d1,d2,...,dn) and determine how many digits evenly divide N (i.e.: count the number of times N divided by each digit di has a remainder of 0). Print the number of evenly divisible digits.

Note: Each digit is considered to be unique, so each occurrence of the same evenly divisible digit should be counted (i.e.: for N=111, the answer is 3).

Input Format

The first line is an integer, T, indicating the number of test cases. 
The T subsequent lines each contain an integer, N.

Constraints 
1≤T≤15 
0<N<1010
Output Format

For every test case, count and print (on a new line) the number of digits in N that are able to evenly divide N.

Sample Input

2
12
1012
Sample Output

2
3
Explanation

The number 12 is broken into two digits, 1 and 2. When 12 is divided by either of those digits, the calculation's remainder is 0; thus, the number of evenly-divisible digits in 12 is 2.

The number 1012 is broken into four digits, 1, 0, 1, and 2. 1012 is evenly divisible by its digits 1, 1, and 2, but it is not divisible by 0 as division by zero is undefined; thus, our count of evenly divisible digits is 3.

This challenge was part of Pragyan 12.

*/

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int alln=n;
        int count=0;
        while(alln!=0){
            int intn=(alln/10)*10;//remove last digit
            int digit=alln-intn;//difference is the last digit
            if(digit!=0 && n%digit==0){//is it divisible?
                count++;
            }
            alln/=10;//decrease it
        }
        cout<<count<<"\n";
    }
    return 0;
}

