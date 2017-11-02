/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net	
 */
#include "stack/stack.h"
#include "link-list/sllist.h"
#include "sequence-list/sqlist.h"

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

	SqList sql1;
	sql_init(&sql1,10);
	printf("%d\n", sql_getLen(&sql1));
	sql_insert(&sql1,0,12);
	printf("%d\n", sql_get(&sql1,0));
	printf("%d\n", sql_getLen(&sql1));
	printf("%d\n", sql_getSize(&sql1));
	sql_destroy(&sql1);

	return 0;
}