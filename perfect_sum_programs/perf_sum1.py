def find_perf_sum(arr, total, i):
	#some code
	if total == 0:
		return 1
	if total < 0:
		return 0
	if i < 0:
		return 0
	if total < arr[i]:
		result = find_perf_sum(arr, total, i-1)
	else:
		result = find_perf_sum(arr, total - arr[i], i-1) + find_perf_sum(arr, total, i-1)         
	return result

arr = [2,4,5,6,7,3]
k = 9
arr.sort()
print("sorted arr =  ", arr)
result = find_perf_sum(arr, k, len(arr) - 1)
print("result = ", result) 
