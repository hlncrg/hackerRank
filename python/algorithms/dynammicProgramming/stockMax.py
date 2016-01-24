numCases=int(raw_input())
for indexCases in range(numCases):
    lenArray=int(raw_input())#get input
    array=[int(i) for i in raw_input().split(' ')]
    profit=0#profit
    locMax=array[-1]#the maximum if only had the last day is the value on the last day
    for item in array[::-1]:#go backwards through the array
        if item>locMax:#if the current price is more than the current max
            locMax=item#set it
        elif locMax-item>0:#otherwise, if we add an item to the list
            profit+=locMax-item#and it is greater than the past max, we would have
    print profit#sold it when the max was reached.
