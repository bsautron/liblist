/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 19:17:40 by bsautron          #+#    #+#             */
/*   Updated: 2016/04/03 19:18:31 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <liblist.h>
#include <stdio.h>

void	list_remove(t_plist **list, int (*fn)(t_plist *))
{
	t_plisti	*tmp;
	t_plist		*prev;

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
