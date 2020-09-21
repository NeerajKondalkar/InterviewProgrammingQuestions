
def count_palindromes(str, x):
	#some code
	count=int(0);
	para = str.split(" ")
	for word in para:
		palindrome = False
		length_of_word = len(word)		
		for i in range(0, length_of_word/2):		
			if word[i] != word[length_of_word - 1]:
				palindrome = False				
				break
			else:
				palindrome = True
				length_of_word = length_of_word - 1
		if palindrome == True:	
			print word	
			count = count + 1
	return count	

str = "Lorem Ipsum is LEVEL simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has mapkiphsdfdshpikpam survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with MADAM desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."
x = 'c'
count_of_palindromes = count_palindromes(str, x)
print("count of palindromes = ", count_of_palindromes)


