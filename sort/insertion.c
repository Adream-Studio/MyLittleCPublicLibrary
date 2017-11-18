/*
	插入排序(递增):
 1. 从a[1]开始到a[n-1]结束，找小于前一个数的a[i]，设为key。
 2. 用key和a[i-1]向前比较，仍然小于则a[i-1]后移至a[i],i--，直至不小于，a[i]被替换为key。
 3. 重复1和2，直到序列被排好。
*/
#include <stdio.h>

void print(int *arr, int n){
	int i;
	for( i = 0 ; i < n ; i++ ){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void insertionSort(int *arr, int n){
	register int i,j;
	register int key;
	for( i = 1 ; i < n ; i++ ){
		if( arr[i] < arr[i-1] ){
			// putchar('\n');
			key = arr[i];
			j = i;
			while( j > 0 && arr[j-1] > key ){
				arr[j] = arr[j-1];
				j--;
				// print(arr,n);
			}
			arr[j] = key;
			// print(arr,n);
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
	showSort(a,99999,&insertionSort);
	//8.3s costs
	return 0;
}
