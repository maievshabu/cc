//
// Created by redredmaple on 2020/9/27.
//
#include "../lib/common.h"

#ifndef CC_LIST_H
#define CC_LIST_H

typedef int u_type;

struct link_node_s{
    u_type data;
    link_node_s *next;
};

struct link_list_s{
    link_node_s node;
    int len;
};

typedef link_list_s link_list_t;

link_list_t* init_list();

bool list_is_empty(link_list_t list);

void list_push(link_list_t* list, u_type elem);

bool list_search(link_list_t* list,u_type elem, int* pos);

bool list_remove(link_list_t* list, int pos);

void list_print(link_list_t list);

void list_del(link_list_t* list);

int list_len(link_list_t list);

#endif //CC_LIST_H
