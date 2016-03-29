#include <liblist.h>
#include <stdio.h>

void list_remove(t_plist **list, int (*fn)(t_plist *))
{
  t_plist   *tmp;
  t_plist   *prev;

  tmp = *list;
  while (tmp && (*fn)(tmp))
  {
    *list = tmp->next;
    tmp = tmp->next;
  }
  prev = tmp;
  if (tmp)
    tmp = tmp->next;
  while (tmp)
  {
    while (tmp && (*fn)(tmp))
    {
      prev->next = tmp->next;
      tmp = tmp->next;
      if (!tmp)
        prev->next = NULL;
    }
    prev = tmp;
    if (tmp)
      tmp = tmp->next;
  }
}
