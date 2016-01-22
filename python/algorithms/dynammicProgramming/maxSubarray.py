'''
Given an array A={a1,a2,…,aN} of N elements, find the maximum possible sum of a

Contiguous subarray
Non-contiguous (not necessarily contiguous) subarray.
Empty subarrays/subsequences should not be considered.

Input Format

First line of the input has an integer T. T cases follow. 
Each test case begins with an integer N. In the next line, N integers follow representing the elements of array A.

Constraints:

1≤T≤10
1≤N≤105
−104≤ai≤104
The subarray and subsequences you consider should have at least one element.

Output Format

Two, space separated, integers denoting the maximum contiguous and non-contiguous subarray. At least one integer should be selected and put into the subarrays (this may be required in cases where all elements are negative).

Sample Input

2 
4 
1 2 3 4
6
2 -1 2 3 4 -5
Sample Output

10 10
10 11
Explanation

In the first case: 
The max sum for both contiguous and non-contiguous elements is the sum of ALL the elements (as they are all positive).

In the second case: 
[2 -1 2 3 4] --> This forms the contiguous sub-array with the maximum sum. 
For the max sum of a not-necessarily-contiguous group of elements, simply add all the positive elements.
'''
numCases=int(raw_input())
array=[]#get input
for caseIndex in range(numCases):
    num=raw_input()
    array.append([int(i) for i in raw_input().split(' ')])

for caseIndex in range(numCases):
    tot=0
    maxValue=0
    for i in array[caseIndex]:
        if tot+i>maxValue:
            maxValue=tot+i
        if tot+i<0:#if the sum is less than zero
            tot=0#set the sum to the beginning
        else:#otherwise add that number
            tot=tot+i
    if sum([i if i>0 else 0 for i in array[caseIndex]])==0 and sum([i for i in array[caseIndex]])<0:
        maxValue2=maxValue=max(array[caseIndex])
    else:
        maxValue2=sum([i if i>0 else 0 for i in array[caseIndex]])
    print maxValue,maxValue2
