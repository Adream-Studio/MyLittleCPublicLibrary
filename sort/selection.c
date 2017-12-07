/*
	选择排序(递增):
 1. 从a[0]到a[n-1]中找到一个最大的，与a[n-1]交换。
 2. 持续缩小n的值，直到n为1。
*/
#include <stdio.h>

void print(int *arr, int n){
	int i;
	for( i = 0 ; i < n ; i++ ){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void selectionSort(int *arr, int n){
	register int i,j;
	register int maxIndex;
	register int temp;
	for( i = n-1 ; i > 0 ; i-- ){
		// putchar('\n');
		maxIndex = 0;
		for( j = 1 ; j <= i ; j++ ){
			if( arr[j] > arr[maxIndex] ){
				maxIndex = j;
				// print(arr,n);
			}
		}

		temp = arr[i];
		arr[i] = arr[maxIndex];
		arr[maxIndex] = temp;
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
	showSort(a,99999,selectionSort);
	return 0;
}
