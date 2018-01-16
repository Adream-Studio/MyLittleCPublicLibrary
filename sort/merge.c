/*
	归并排序(递增):
*/
#include <stdio.h>

void print(int *arr, int n){
	int i;
	for( i = 0 ; i < n ; i++ ){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void merge(int *arr, int p, int q, int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int tempArr1[n1],tempArr2[n2];

	int i;
	for( i = 0 ; i < n1 ; i++ ){
		tempArr1[i] = arr[p+i];
	}
	for( i = 0 ; i < n2 ; i++ ){
		tempArr2[i] = arr[q+i+1];
	}

	int j = 0,k = 0;
	for( i = p ; i <= r ; i++ ){
		if( (j<n1 && k<n2 && tempArr1[j] < tempArr2[k])
		|| (k==n2 && j!=n1) ){

			arr[i] = tempArr1[j];
			j++;
		}else if( (j<n1 && k<n2 && tempArr1[j] >= tempArr2[k])
		|| (j==n1 && k!=n2) ){

			arr[i] = tempArr2[k];
			k++;
		}
	}
	/*
		when tempArr1 and tempArr2 are both not null, insert the smaller one of tempArr?[?] to the arr;
		when one of them is null, insert all of another one to the arr.
	*/
}

void mergeSort(int *arr, int p, int r){
	if( p < r ){
		int q = (p+r)/2;
		mergeSort(arr,p,q);
		mergeSort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}

void showSort(int *arr, int n, void (*sort)(int *arr, int left, int right)){
	register int i;	
	for( i = n-1 ; i >= 0 ; i-- ){
		arr[n-1-i] = i;
	}
	// print(arr,n);
	sort(arr,0,n-1);
	// print(arr,n);
	putchar('O');
}

int main(int argc, char const *argv[]){
	int a[99999];
	showSort(a,99999,mergeSort);
	return 0;
}
