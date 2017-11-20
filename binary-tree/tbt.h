/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net
	Version	:	v0.1

	threaded-binary-tree

	"stack" needed !

	NOTICE:
	Change the definition of 'elem_type' in 'stack_elem_type.h' 
	before using !!

	Define the 'tbt_elem_type' in 'tbt_elem_type.h' before using !!

	And the definition of binary-tree is also in 'bt_elem_type.h'
 */
#ifndef _TBT_H_
#define _TBT_H_

#include <stdio.h>
#include <stdlib.h>
#include "tbt_elem_type.h"
#include "../stack/stack.h"

#define TRUE 1
#define FALSE 0
#define NODE 1
#define THREAD 0

void tbt_init(TBT *rootpp);
void tbt_create(TBT *rootpp); 
void tbt_preOrderTraverse(TBT rootp, void (*visit)(TBTNode *nodep));
void tbt_inOrderTraverse(TBT rootp, void (*visit)(TBTNode *nodep));
void tbt_postOrderTraverse(TBT rootp, void (*visit)(TBTNode *nodep));
void tbt_inOrderThreading(TBT rootp, Stack *nodes);
void tbt_destroy(TBT tree);

void getInput(tbt_elem_type *buffer);
int getData(tbt_elem_type value);
void visit(TBTNode *nodep);

#endif
