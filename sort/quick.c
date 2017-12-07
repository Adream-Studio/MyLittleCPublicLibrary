/*
	快速排序(递增):
*/
#include <stdio.h>

void print(int *arr, int n){
	int i;
	for( i = 0 ; i < n ; i++ ){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void quickSort(int *arr, int left, int right){
	if( left < right ){
		register int key = arr[left];
		register int low = left;
		register int high = right;
		while( low < high ){
			while( low < high && arr[high] >= key ){
				high--;
			}
			arr[low] = arr[high];
			while( low < high && arr[low] <= key ){
				low++;
			}
			arr[high] = arr[low];
		}
		arr[low] = key;

		quickSort(arr,left,low-1);
		quickSort(arr,low+1,right);
	}
}



void showSort(int *arr, int n, void (*sort)(int *arr, int left, int right)){
	register int i;	
	for( i = n-1 ; i >= 0 ; i-- ){
		arr[n-1-i] = i;
	}
	// print(arr,n);
	sort(arr,0,n-1);
	//print(arr,n);
	putchar('O');
}

int main(int argc, char const *argv[]){
	int a[99999];
	showSort(a,99999,quickSort);
	return 0;
}
