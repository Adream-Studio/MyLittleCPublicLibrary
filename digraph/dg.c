/* 
	Author	:	Joe Nahm
	Email	:	joenahm@yeah.net
 */
#include "dg.h"

/* private */
int getAmt(char const *info){
	printf("%s : ", info);
	fflush(stdout);

	int temp;
	scanf("%d", &temp);

	return temp;
}

void vertAmtCheck(int *vertAmt, int inVertAmt){
	if( inVertAmt > 0 && inVertAmt <= MAX_VERT_AMT ){
		*vertAmt = inVertAmt;
	}else{
		fprintf(stderr, "WARNING(vertAmtCheck): invalid amount of vertexes : %d !\n", inVertAmt);
		fflush(stderr);
		inVertAmt = getAmt("input the amount of vertexes");
		vertAmtCheck(vertAmt,inVertAmt);
	}
}

void edgeAmtCheck(int *edgeAmt, int inEdgeAmt){
	if( inEdgeAmt > 0 ){
		*edgeAmt = inEdgeAmt;
	}else{
		fprintf(stderr, "WARNING(edgeAmtCheck): invalid amount of edges : %d !\n", inEdgeAmt);
		fflush(stderr);
		inEdgeAmt = getAmt("input the amount of edges");
		edgeAmtCheck(edgeAmt,inEdgeAmt);
	}
}

void vertIndexCheck(int *vertIndex, int vertAmt, int orderNum){
	if( *vertIndex <0 && *vertIndex >= vertAmt ){
		fprintf(stderr, "WARNING(vertIndexCheck): invalid index for vertex : %d !\n", *vertIndex);
		fflush(stderr);
		printf("input the start vertex for edge [%d] : ", orderNum);
		fflush(stdout);
		scanf("%d", vertIndex);
		vertIndexCheck(vertIndex,vertAmt,orderNum);
	}
}

void edgePrint(int vertNum, EdgeNode *edge_node){
	printf("vert [%d] : ", vertNum);
	while( edge_node != NULL ){
		printf(" %d", edge_node->adjVert);

		edge_node = edge_node->next;
	}
	putchar('\n');
}
/* private */

/* public */
void getInputVal(dg_elem_type *buffer){
	fflush(stdin);
	scanf("%c", buffer);
}

void alg_init(ALGraph *alGraph){
	alGraph->vertAmt = 0;
	alGraph->edgeAmt = 0;	
}

void alg_create(ALGraph *alGraph){
	/*
	*	get the amounts of vertexes and edges
	*/
	int vertAmt,edgeAmt;
	vertAmt = getAmt("input the amount of vertexes");
	vertAmtCheck(&(alGraph->vertAmt),vertAmt);
	edgeAmt = getAmt("input the amount of edges");
	edgeAmtCheck(&(alGraph->edgeAmt),edgeAmt);

	/*
	*	get the data to store for each vertex
	*/
	int i;
	for( i = 0 ; i < alGraph->vertAmt ; i++ ){
		printf("input the data for vertex [%d] : ", i);
		fflush(stdout);
		dg_elem_type buffer;
		getInputVal(&buffer);
		alGraph->adjList[i].value = buffer;
		alGraph->adjList[i].firstEdge = NULL;
	}

	/*
	*	create infomation for each edge
	*/
	int j;
	for( j = 0 ; j < alGraph->edgeAmt ; j++ ){
		printf("input the start vertex for edge [%d] : ", j);
		fflush(stdout);
		int startVert;
		scanf("%d", &startVert);
		vertIndexCheck(&startVert,alGraph->vertAmt,j);
		
		printf("input the end vertex for edge [%d] : ", j);
		fflush(stdout);
		int endVert;
		scanf("%d", &endVert);
		vertIndexCheck(&endVert,alGraph->vertAmt,j);
		
		EdgeNode **linkp = &(alGraph->adjList[startVert].firstEdge);
		while( *linkp != NULL ){
			linkp = &((*linkp)->next);
		}
		EdgeNode *newNode = (EdgeNode*)malloc(sizeof(EdgeNode));
		newNode->adjVert = endVert;
		newNode->next = NULL;
		*linkp = newNode;
	}

	/*
	*	print the infomation of each edge
	*/
	for( i = 0 ; i < alGraph->vertAmt ; i++ ){
		edgePrint(i,alGraph->adjList[i].firstEdge);
	}
}
/* public */