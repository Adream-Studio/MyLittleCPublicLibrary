/*
	冒泡排序(递增):
 1. 依次比较两个数，从a[0]和a[1]到a[n-2]和a[n-1]。	
 2. 如果前者大于后者，则交换。
 3. 持续执行1和2直到序列被排好。
*/
#include <stdio.h>

void print(int *arr, int n){
	int i;
	for( i = 0 ; i < n ; i++ ){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void bubbleSort(int *arr, int n){
	register int i,j;
	register int temp;
	for( i = n ; i > 0 ; i-- ){
		// putchar('\n');
		for( j = 0 ; j < n-1 ; j++ ){
			if( arr[j] > arr[j+1] ){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				// print(arr,n);
			}
		}
	}
}

void showSort(int *arr, int n, void (*sort)(int *arr, int n)){
	register int i;	
	for( i = n-1 ; i >= 0 ; i-- ){
		arr[n-1-i] = i;
	}
	// print(arr,n);
	sort(arr,n);
	// print(arr,n);
	putchar('O');
}

int main(int argc, char const *argv[]){
	int a[99999];
	showSort(a,99999,bubbleSort);
	return 0;
}
