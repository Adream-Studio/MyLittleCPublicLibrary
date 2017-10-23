/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net	
 */
#include "sllist.h"

int main(void){
	SLList l1;
	sll_init(&l1);
	sll_insert(&l1,10); 
	sll_destroy(l1);

	return 0;
}