/*
 * 클러스터 리스트 헤더
 * 작성자: Kyuling Lee
 * kyuling@me.com
 */

#ifndef _CLUSTERLIST_H_
#define _CLUSTERLIST_H_

#include "common.h"

#define CLUSTERS_PER_ELEMENT	1023

typedef struct CLUSTER_LIST_ELEMENT
{
	SECTOR				clusters[CLUSTERS_PER_ELEMENT];

	struct CLUSTER_LIST_ELEMENT* next;
} CLUSTER_LIST_ELEMENT;

typedef struct
{
	UINT32				count;
	UINT32				pushOffset;
	UINT32				popOffset;

	CLUSTER_LIST_ELEMENT* first;
	CLUSTER_LIST_ELEMENT* last;
} CLUSTER_LIST;

int	init_cluster_list(CLUSTER_LIST*);
int	push_cluster(CLUSTER_LIST*, SECTOR);
int pop_cluster(CLUSTER_LIST*, SECTOR*);
void	release_cluster_list(CLUSTER_LIST*);

#endif

