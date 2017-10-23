/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net	
 */
#include "stack.h"

int main(void){
	Stack s1;
	stack_init(&s1); 
	stack_push(&s1,10);
	int a = stack_getTop(&s1);	
	stack_pop(&s1);

	return 0;
}