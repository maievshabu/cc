//
// Created by redredmaple on 2020/9/27.
//

#include "arr_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

#define MAX_LEN 10

list_s*
init_list(){
    list_s * list = (list_s *)malloc(sizeof(list_s) * MAX_LEN);
    list->data = 0;
    list->next = (list_t *)malloc(sizeof(list_s)); //

    printf("init list\n");
    return list;
}

bool
list_is_empty(list_s list){
    if (list.next == NULL){
        printf("list is empty");
        return TRUE;
    }

    return FALSE;
}

void
list_push(list_sp list, u_type elem){

    //cur node;
    list_sp cur = (list_sp)malloc(sizeof(list_s));
    cur->next = NULL;
    cur->data = elem;

    if (list_is_empty(*list)){
        list->next = cur;
        ++list->data;
        return;
    }

    //insert list;
    list_sp ptr = list;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ++list->data;
    ptr->next = cur;

    printf("push list pos %d\n", list->data);
}

bool
list_search(list_s list,u_type elem, int* pos){
    printf("search list  %d and in pos %d\n", elem, *pos);

    return true;
}

bool
list_remove(list_sp list, int pos){
    int len = list_len(*list);
    if (pos > len ){
        printf("list remove error\r\n");
        return FALSE;
    }

    --list->data;

    list_sp lp = list->next; // 第一个 node
    list_sp np;
    int cur_pos = 0;

    while(lp != NULL || cur_pos < pos){
        ++cur_pos;
        lp = lp->next;
    }

    np = lp->next;
    lp->next = np->next;

    printf("remove list  in pos %d and data %d\n", pos, np->data);
    free(np);

    return true;
}

void
list_print(list_s list){
    if (list_is_empty(list)){
        printf("empty list\r\n");
    }

    //insert list;
    list_sp ptr = list.next; //去掉第一个节点
    int pos = 0;

    while(ptr->next != NULL){
        printf(" print list %d pos and data %d\n", ++pos, ptr->data);
        ptr = ptr->next;
    }
}


void
list_del(list_sp list){
    printf("list del\r\n");

    //@TODO remove all node;
    free(list->next); //remove lib
    free(list); //remove list
}

int
list_len(list_s list){
    printf("list len %d\r\n", list.data);
    return list.data;
}






