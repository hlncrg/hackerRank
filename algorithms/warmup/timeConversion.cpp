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

Given a time in AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock and 12:00:00 on a 24-hour clock.

Input Format

A time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM), where 01≤hh≤12.

Output Format

Convert and print the given time in 24-hour format, where 00≤hh≤23.

Sample Input

07:05:45PM
Sample Output

19:05:45
Explanation

7 PM is after noon, so you need to add 12 hours to it during conversion. 12 + 7 = 19. Minutes and seconds do not change in 12-24 hour time conversions, so the answer is 19:05:45.


*/

int main(){
    string time;
    cin >> time;
    if(time[8]=='A'){//if 12:00:00AM  >> 00:00:00
        if(time[0]=='1' && time[1]=='2'){time[0]='0';time[1]='0';}
    }
    else{//if PM
        if(!(time[0]=='1' && time[1]=='2')){//if not 12:00:00PM
            time[0]+=1;//add 12 to hour
            time[1]+=2;
        }
    }
    for(int i=0;i<8;i++){//print
        cout<<time[i];
    }
    return 0;
}
