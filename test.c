/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net	
 */
#include "stack/stack.h"
#include "link-list/sllist.h"

int main(void){
	Stack s1;
	stack_init(&s1); 
	stack_push(&s1,10);
	SLList l1;
	sll_init(&l1);
	sll_insert(&l1,11);
	int a = stack_getTop(&s1);	
	printf("%d\n", a);
	printf("%d\n", l1->value);
	sll_destroy(l1);
	stack_pop(&s1);

	return 0;
}