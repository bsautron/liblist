#ifndef LIBLIST_H
# define LIBLIST_H

# include <libft.h>

typedef struct s_plist		t_plist;

# define LIST_NEW(X)			((X *)list_new(sizeof(X)))
# define LIST_PUSH_FRONT(X, N)	list_push_front((t_plist **)(X), (t_plist *)(N))
# define LIST_PUSH_BACK(X, N)	list_push_back((t_plist **)(X), (t_plist *)(N))
# define LIST_MAP(X, F)		list_apply((t_plist *)(X), (t_plist *(*)(t_plist *))(F))
# define LIST_REMOVE(X, F)	list_remove((t_plist **)(X), (int (*)(t_plist *))(F))
# define LIST_POP_FRONT(X)	list_pop_front((t_plist **)(X))
# define LIST_COUNT(X)		list_count((t_plist *)(X))

t_plist			*list_new(size_t size);
void			list_push_front(t_plist **start, t_plist *new);
void			list_push_back(t_plist **start, t_plist *new);
void			list_map(t_plist *lst, t_plist *(*fn)(t_plist *));
void 			list_remove(t_plist **list, int (*fn)(t_plist *));
size_t    list_count(t_plist *list);


void    list_pop_front(t_plist **start);

struct		s_plist
{
	void		*next;
};

#endif
