t = int(input())

arr = []
x = 1

for i in range(0,10**5+1):
	arr.append(x)
	x = x*2

for i in range(t):
	n = int(input())

	print(arr[n-1]%(10**9 + 7))# cook your dish here
