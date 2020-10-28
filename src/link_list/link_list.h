//
// Created by redredmaple on 2020/9/27.
//
#include "../lib/common.h"

#ifndef CC_LIST_H
#define CC_LIST_H

typedef int u_type;
typedef struct list list_t;

typedef struct list{
    u_type data;
    list_t *next;
}list_s, *list_sp;

list_s* init_list();

bool list_is_empty(list_s list);

void list_push(list_sp list, u_type elem);

bool list_search(list_s list,u_type elem, int* pos);

bool list_remove(list_sp list, int pos);

void list_print(list_s list);

void list_del(list_sp list);

int list_len(list_s list);

#endif //CC_LIST_H
