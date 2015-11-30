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

Sherlock Holmes suspects his archenemy, Professor Moriarty, is once again plotting something diabolical. Sherlock's companion, Dr. Watson, suggests Moriarty may be responsible for MI6's recent issues with their supercomputer, The Beast.

Shortly after resolving to investigate, Sherlock receives a note from Moriarty boasting about infecting The Beast with a virus; however, he also gives him a clue—a number, N. Sherlock determines the key to removing the virus is to find the largest Decent Number having N digits.

A Decent Number has the following properties:

Its digits can only be 3's and/or 5's.
The number of 3's it contains is divisible by 5.
The number of 5's it contains is divisible by 3.
Moriarty's virus shows a clock counting down to The Beast's destruction, and time is running out fast. Your task is to help Sherlock find the key before The Beast is destroyed!

Constraints
1≤T≤20
1≤N≤100000


Input Format

The first line is an integer, T, denoting the number of test cases.

The T subsequent lines each contain an integer, N, detailing the number of digits in the number.

Output Format

Print the largest Decent Number having N digits; if no such number exists, tell Sherlock by printing -1.

Sample Input

4
1
3
5
11
Sample Output

-1
555
33333
55555533333
Explanation

For N=1, there is no such number.
For N=3, 555 is the only possible number.
For N=5, 33333 is the only possible number.
For N=11, 55555533333 and all permutations of these digits are valid numbers; among them, the given number is the largest one.

*/


/*

We can see the pattern after writing out the solution to the first several numbers:
1  >> -1
2  >> -1
3  >> 3 5's
4  >> -1
5  >> 0 5's, 5 3's
6  >> 6 5's
7  >> -1
8  >> 3 5's, 5 3's
9  >> 9 5's
10 >> 0 5's, 10 3's
11 >> 6 5's, 5 3's
12 >> 12 5's
13 >> 3 5's, 10 3's
14 >> 9 5's, 5 3's
15 >> 15 5's
16 >> 6 5's, 10 3's
17 >> 12 5's, 5 3's
18 >> 18 5's
19 >> 9 5's, 10 3's
20 >> 15 5's, 5 3's

for 3, 6, 9, ... all are 5's
for 5, 8, 11, .. 5 3's and (n-5) 5's
for 7, 10, 13, .. 10 3's and (n-10) 5's

This can be expressed as 5*((2*n)%3) 3's and n-5*((2*n)%3) 5's

Additionally, a solution does not exist if n-5*((2*n)%3) is negative.

*/

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int n_3=5*abs((2*n)%3);
        int n_5=n-n_3;
        if(n_5<0){cout<<-1<<"\n";}
        else{
            for(int i=0;i<n_5;i++){
                cout<<"5";
            }
            for(int i=0;i<n_3;i++){
                cout<<"3";
            }
            cout<<"\n";
            
        }
    }
    return 0;
}


//this is similar to a pop fizz problem.
