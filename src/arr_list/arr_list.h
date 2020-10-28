//
// Created by redredmaple on 2020/9/27.
//
#include "../lib/common.h"

#ifndef CC_LINK_LIST_H_
#define CC_LINK_LIST_H_

typedef int ElemType;

typedef struct{
    ElemType elem;
    int len;
}link_list_t;

typedef link_list_t* link_list_tp;

link_list_tp init_list();

bool list_is_empty(link_list_t list);

void list_push(link_list_tp list, ElemType elem);

bool list_search(link_list_t list,ElemType elem, int* pos);

bool list_remove(link_list_tp list, int pos);

void list_print(link_list_t list);

void list_del(link_list_tp list);

int list_len(link_list_t list);

#endif //CC_LINK_LIST_H_
