
def count_words(str, x):
	#some code
	count=int(0);
	str1 = str.split(" ")
	for word in str1:
		if word[0] == x:
			count = count + 1;
	return count	

str = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."
x = 'c'
count_of_words = count_words(str, x)
print("count of words = ", count_of_words)


