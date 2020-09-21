def findmissing(arr1, arr2):
	arr1.sort()
	arr2.sort()
	for i in range(0, len(arr1)-1):
		if i >= len(arr2):
			arr2[i] = 0		
		if(arr1[i]!=arr2[i]):
			return arr1[i]
	return	None
arr1 = [  30, 10,40, 60, 70, 20, 50]
arr2 = [  70, 60, 30, 20,10, 40]
print("missing = ", findmissing(arr1, arr2))
