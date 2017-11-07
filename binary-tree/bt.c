/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net
 */
#include "bt.h"

/* private functions */
int isNull(bt_elem_type value){
	int status;
	if( value.isNull ){
		status = TRUE;
	}else{
		status = FALSE;
	}

	return status;
}

void freeNode(BTNode *node){
	//printf("free the node of value: %d\n", getData(node->value));
	free(node);
}
/* private functions */

/* public functions */
void getInput(bt_elem_type *buffer){
	int temp = getchar();
	if( temp != ' ' ){
		buffer->data = temp - '0';
		buffer->isNull = FALSE;
	}else{
		buffer->isNull = TRUE;
	}
}

int getData(bt_elem_type value){
	return value.data;
}

void visit(BTNode *nodep){
	printf("%s %d\n", bt_isLeaf(*nodep)?"Leaf:":"Branch:", getData(nodep->value));
}

void bt_init(BT *rootpp){
	*rootpp = NULL;
}

void bt_create(BT *treeNode){
	bt_elem_type buffer;
	getInput(&buffer);

	if( isNull(buffer) ){
		*treeNode = NULL;
	}else{
		*treeNode = (BTNode*)malloc(sizeof(BTNode));
		if( *treeNode != NULL ){
			(*treeNode)->value = buffer;

			bt_create(&(*treeNode)->lChild);
			bt_create(&(*treeNode)->rChild);
		}else{
			fprintf(stderr, "ERROR(bt_create): failed to create binary tree node !\n");
			exit(EXIT_FAILURE);
		}	
	}
}

int bt_isLeaf(BTNode node){
	int status;
	if( node.lChild == NULL
		&& node.rChild == NULL ){

		status = TRUE;
	}else{
		status =FALSE;
	}

	return status;
}

void bt_preOrderTraverse(BT treeNode, void (*visit)(BTNode *node)){
	if( treeNode != NULL ){
		(*visit)(treeNode);
		bt_preOrderTraverse(treeNode->lChild,visit);
		bt_preOrderTraverse(treeNode->rChild,visit);
	}
}

void bt_inOrderTraverse(BT treeNode, void (*visit)(BTNode *node)){
	if( treeNode != NULL ){
		bt_inOrderTraverse(treeNode->lChild,visit);
		(*visit)(treeNode);
		bt_inOrderTraverse(treeNode->rChild,visit);
	}
}

void bt_postOrderTraverse(BT treeNode, void(*visit)(BTNode *nodep)){
	if( treeNode != NULL ){
		bt_postOrderTraverse(treeNode->lChild,visit);
		bt_postOrderTraverse(treeNode->rChild,visit);
		(*visit)(treeNode);
	}
}

void bt_destroy(BT tree){
	bt_postOrderTraverse(tree,&freeNode);
}
/* public functions */