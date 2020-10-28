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
}arr_list_t;

arr_list_t* init_list();

bool list_is_empty(arr_list_t list);

void list_push(arr_list_t* list, ElemType elem);

bool list_search(arr_list_t list,ElemType elem, int* pos);

bool list_remove(arr_list_t* list, int pos);

void list_print(arr_list_t list);

void list_del(arr_list_t* list);

int list_len(arr_list_t list);

#endif //CC_LINK_LIST_H_
