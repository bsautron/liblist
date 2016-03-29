#include <liblist.h>

void    list_pop_front(t_plist **start)
{
  // need to have a function pointer to free elem
  *start = (*start)->next;
}
