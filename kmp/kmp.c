#include <stdio.h>
#include <stdlib.h>

void getPrefix(char const *str, int *arr, int length){
	arr[0] = -1;

	int i;
	for( i = 1 ; i < length ; i++ ){
		int preVal = 0;
		int j = 0;
		while( j < i 
			&& j != (i-j)
			&& str[j]==str[i-j] ){

			preVal++;
			j++;
		}

		arr[i] = preVal;
	}
}

int main(void){
	char *str1 = "abaacababcac";
	char *str2 = "ababc";
	int arr[6];

	//-1 0 0 0 0 0

	getPrefix(str2,arr,5);
	int i;
	for( i = 0 ; i < 5 ; i++ ){
		printf(" %d", arr[i]);
	}

	return 0;
}
