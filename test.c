/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net	
 */
#include "stack/stack.h"
#include "link-list/sllist.h"
#include "sequence-list/sqlist.h"
#include "binary-tree/bt.h"
#include "digraph/dg.h"
#include "queue/queue.h"

int main(void){
	puts("stack test:");
	Stack s1;
	stack_init(&s1); 
	stack_push(&s1,10);
	int a = stack_getTop(&s1);	
	stack_pop(&s1);
	printf("%d\n", a);
	putchar('\n');

	puts("link-list test:");
	SLList l1;
	sll_init(&l1);
	sll_insert(l1,11);
	sll_insert(l1,12);
	sll_print(l1);
	putchar('\n');
	sll_destroy(l1);

	puts("sequence-list test:");
	SqList sql1;
	sql_init(&sql1,10);
	printf("%d\n", sql_getLen(&sql1));
	sql_insert(&sql1,0,12);
	printf("%d\n", sql_get(&sql1,0));
	printf("%d\n", sql_getLen(&sql1));
	printf("%d\n", sql_getSize(&sql1));
	sql_destroy(&sql1);
	putchar('\n');


	puts("binary-tree test:");
	printf("input a pre-ordered binary-tree: ");
	fflush(stdout);
	BT bt1;
	bt_init(&bt1);
	bt_create(&bt1);
	bt_preOrderTraverse(bt1,&visit);
	bt_inOrderTraverse(bt1,&visit);
	bt_postOrderTraverse(bt1,&visit);
	bt_destroy(bt1);
	putchar('\n');

	puts("queue test:");
	Queue q1;
	queue_init(&q1);
	printf("%d\n", queue_isEmpty(&q1));
	queue_in(&q1,10);
	queue_in(&q1,11);
	printf("%d\n", queue_isEmpty(&q1));
	printf("%d\n", queue_getHead(&q1));
	queue_out(&q1);
	printf("%d\n", queue_getHead(&q1));
	queue_destroy(&q1);

	puts("digraph test:");
	ALGraph alg;
	alg_init(&alg);
	alg_create(&alg);
	alg_DFSTraverse(&alg,&visitPrint);
	putchar('\n');

	return 0;
}
