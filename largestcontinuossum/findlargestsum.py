def find_sum(arr):
	max_sum = curr_sum = arr[0]
	for element in arr[1:]:
		print("element = ", element)
		curr_sum = curr_sum + element
		print("curr_sum = ", curr_sum)
		max_sum = max(curr_sum, max_sum)
		print("max_sum = ", max_sum)
	return max_sum
arr = [-2, 4, 6, -1, 2,-5, 10, -2, -3]
largest_sum = find_sum(arr)
print("largest sum = ", largest_sum)
