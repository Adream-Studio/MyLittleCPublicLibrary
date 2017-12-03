#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getPrefix(char const *patternStr, int *prefixArr, int length){
	prefixArr[0] = -1;
	int i = 0;
	int j = -1;
	while( i < length-1 ){
		if ( j == -1 || patternStr[i] == patternStr[j] ){
			i++;
            j++;
         	prefixArr[i] = j;
         }else{
            j = prefixArr[j];
        }
	}
}

int kmp(char const *str, char const *patternStr){
	int sLen = strlen(str);
	int pLen = strlen(patternStr);
	int *prefixArr = (int*)malloc(sizeof(int)*pLen);
	getPrefix(patternStr,prefixArr,pLen);

	int i =0, j = 0;
	while ( i < sLen && j < pLen ){  
        if ( j == -1 || str[i] == patternStr[j] ){  
        	i++;  
        	j++;  
        }else{
        	j = prefixArr[j];  
        }  
    }
	free(prefixArr);

    int index;  
    if ( j == pLen ){
    	index = i-j; 
    }else{
        index = -1;
    }
	return index;
}

int main(void){
	char *str1 = "abaacababcac";
	char *str2 = "ababc";
	int index = kmp(str1,str2);
	printf("%d",index);

	return 0;
}
