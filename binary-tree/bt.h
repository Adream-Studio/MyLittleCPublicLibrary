/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net
	Version	:	v0.1

	binary-tree

	NOTICE:
	Define the 'bt_elem_type' in 'bt_elem_type.h' before use !!

	And the definition of binary-tree is also in 'bt_elem_type.h'
 */
#ifndef _BT_H_
#define _BT_H_

#include <stdio.h>
#include <stdlib.h>
#include "bt_elem_type.h"

#define TRUE 1
#define FALSE 0

void bt_init(BT *rootpp);
void bt_create(BT *rootpp); 
int bt_isLeaf(BTNode node);
void bt_preOrderTraverse(BT rootp, void (*visit)(BTNode *nodep));
void bt_inOrderTraverse(BT rootp, void (*visit)(BTNode *nodep));
void bt_postOrderTraverse(BT rootp, void (*visit)(BTNode *nodep));
void bt_destroy(BT tree);

void getInput(bt_elem_type *buffer);
int getData(bt_elem_type value);
void visit(BTNode *nodep);

#endif