#include<stdio.h>

int perfect_sum(int input1, int input2[], int input3){
	int i, j, k, temp, m, elements, sum=0;
	int looped_arr[input1];
	int temp_arr[input1];
	short looped=0;
	
	//initialize all elements in looped_arr to NULL    which indicates that it has not been looped with every other element
	for(i=0; i<input1; i++){
		looped_arr[i] = NULL;
	}
	
	for(j=0; j<(input1*input1); j++){
		//temp will always lie b/w 0 and input1. operate only on temp in this for loop
		temp = j%input1;
	        
		//check if current element is already looped or not, if yes, then go to next element in array	
		for(i=0; i<input1; i++){
			if(input2[temp] == looped_arr[i]){
				looped=1;
				break;				
			}
		}
		if(looped=1){
			looped=0;
			continue;
		}

		//now that we know that the element input2[temp] is not looped, we will now loop it with other remaining elements 
		//which occur after temp-1
		m=temp;
		elements_in_temp_array=2;
		for(k=temp; k<input1; k++){
			//sum = input2[k] + input2[k+m];
			for(i=0; i<elements_in_temp_array; i++){
				temp_arr[i] = input2[k+m];
				m++;
			}
			if(sum == input3){
				for(i=0; i<elements; i++){
									
				}		
			}
		}
		
	}

	return 0;
}

void main(){
   int input1=6, input3=14;
   int input2[] = {7,1,2,4,3,7};
   int perfect_sums, i, temp;
/*   for(i=0; i<36; i++){
	   temp = i%6;
	   printf("%d\n", temp);
   }
*/
   perfect_sums = perfect_sum(input1, input2, input3);
   printf(" number of perfect sums = %d\n", perfect_sums);
}
