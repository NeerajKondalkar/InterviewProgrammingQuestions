#include<stdio.h>

char new_str[100] = "";

void remove_occur_of_key(char org_str[], char key){
	int i=0, j=0;
	int length=0;
	//char new_str[100] = "";
	printf("calculating length of string..");
	while(org_str[i]!='\0'){
	//	printf("org_str=%d\n", i);
	//	printf("length=%d\n", length);
		length++;
		i++;
	}
	printf("length of org_string = %d\n", length);
	printf("starting to read string and print exlcuding the character\n");
	for(i=0; i<length; i++){
		printf("org_str[%d] = %c\n", i, org_str[i]);
		if(org_str[i]!='\0'){
			printf("org_str[%d] != NULL\n", i);
			if(org_str[i] != key){
				printf("org_str[%d] != key\n", i);
				printf("j=%d\n", j);
				printf("inserting %c to new_str[%d]\n", org_str[i], j);
				new_str[j] = org_str[i];
				new_str[j+1] = '\0';
				j++;
				printf("new_str = %s\n", new_str);
			}
			//if org_str[i] == key, then continue
		}
	}
	printf("\n\nDONE !\norg_str = %s\n", org_str);
	printf("new string: ");
	j=0;
	/*while(new_str[j]!='\0'){
		printf("%c", new_str[j]);
		j++;
	}
	*/
	//printf("\nlength of new_string = %d\n", j);
	//return 0;
	//return new_str; 
}

int main(){
	char key;
	char org_string[100] = "A sentence which you have to complete yourself\0";
	//int temp=1;
	//char *new_str;
	key = 'o';
	printf("Original string: %s\nkey: %c\n", org_string, key);
	remove_occur_of_key(org_string, key);
	printf("%s\n", new_str);
	return 0;
}
