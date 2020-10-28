#include "link_list.h"

int main()
{
	int pos;
	list_s *list;
	list = init_list();

	list_push(list, 1);
	list_push(list, 2);
	list_push(list, 3);
	list_len(*list);

    bool e = list_is_empty(*list);
	list_print(*list);
	bool flag = list_search(*list, 10, &pos);
	flag = list_remove(list, 1);
    list_len(*list);
    list_del(list);
}
