#include <liblist.h>

size_t    list_count(t_plist *list)
{
  t_plist   *tmp;
  int       i;

  tmp = list;
  i = 0;
  while (tmp)
  {
    i++;
    tmp = tmp->next;
  }
  return (i);
}
