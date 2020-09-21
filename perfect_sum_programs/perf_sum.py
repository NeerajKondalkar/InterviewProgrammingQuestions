def perfect_sum(arr, s, result) : 
    #here x is array of length len(arr) with all elements initialized as 0
	x = [0]*len(arr)
	j = len(arr) - 1

	while (s > 0) : 
		x[j] = s % 2
		s = s // 2 
		j -= 1
	sum = 0
	for i in range(len(arr)) : 
		if (x[i] == 1) : 
			sum += arr[i]
	if (sum == result) : 
		print("{") 
		for i in range(len(arr)) : 
			if (x[i] == 1) : 
				print(arr[i], ", ") 
		print("}")

def print_subset(arr, K) : 
	x = pow(2, len(arr)) 
	for i in range(1, x): 
		perfect_sum(arr, i, K)


arr = [ ] 
n = int(input("Enter length of array : "))

for i in range(n):
    ele=int(input("Enter element : "))
    arr.append(ele)
s=int(input("Enter sum : "))
print_subset(arr, s)

