/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net
 */
#ifndef _DG_ELEM_TYPE_
#define _DG_ELEM_TYPE_

#define MAX_VERT_NUM 100

typedef struct{
	int data;
	int isNull;
} dg_elem_type;

typedef struct EDGENODE{
	int adjvex;
	struct EDGENODE *next;
} EdgeNode;

typedef struct VERTNODE{
	dg_elem_type value;
	EdgeNode *firstEdge;
} VertNode, AdjList[MAX_VERT_NUM];

typedef struct{
	
}

#endif
