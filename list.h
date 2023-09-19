/* list.h -- ���������͵�ͷ�ļ� */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

/* �ض���������� */

#define TSIZE 45	/* �����Ӱ���������С */
struct film {
	char title[TSIZE];
	int rating;
};

/* һ�����Ͷ��� */

typedef struct film Item;

typedef struct node {
	Item item;
	struct node* next;
}Node;

typedef Node* List;