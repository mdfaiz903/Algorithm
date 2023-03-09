arr =[2,8,11,15,19,22,27,30,35,45]
target = 35
s=0
e=len(arr)-1
# print(e)
for i in arr:
    mid = (s+e)//2
    # print(arr[mid])
    if(arr[mid]==target):
        print("target found at index : ",mid)
        break
    elif(mid<target):
        right = mid+1
        s=right
    elif(mid>target):
        left = mid-1
        e = left        