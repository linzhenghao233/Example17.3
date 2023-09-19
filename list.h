/* list.h -- 简单链表类型的头文件 */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

/* 特定程序的声明 */

#define TSIZE 45	/* 储存电影名的数组大小 */
struct film {
	char title[TSIZE];
	int rating;
};

/* 一般类型定义 */

typedef struct film Item;

typedef struct node {
	Item item;
	struct node* next;
}Node;

typedef Node* List;