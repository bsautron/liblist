#include <liblist.h>

void		list_map(t_plist *lst, t_plist *(*fn)(t_plist *))
{
	while (lst)
	{
		lst = (*fn)(lst);
		lst = lst->next;
	}
}
