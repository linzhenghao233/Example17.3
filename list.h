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

/* ����ԭ�� */

/* ��������ʼ��һ������ */
/* ǰ��������plistָ��һ������ */
/* ���������������ʼ��Ϊ�� */
void InitializeList(List* plist);

/* ������ȷ�������Ƿ�Ϊ�ն��壬plistָ��һ���ѳ�ʼ�������� */
/* �����������������Ϊ�գ��ú�������true�����򷵻�false*/
bool ListIsFull(const List* plist);

/* ������ȷ�������е�������plistָ��һ���ѳ�ʼ�������� */
/* �����������ú������������е����� */
unsigned int ListItemCount(const List* plist);

