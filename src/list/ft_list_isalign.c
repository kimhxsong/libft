/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclstisalign.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 08:40:40 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/07/26 01:48:45 by hyeonsok         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dclstisalign(t_dclst *a)
{
	int		count;
	int		curr_data;
	t_node	*curr;

	count = a->count;
	curr = a->head->next;
	while (count-- > 1)
	{
		curr_data = curr->data;
		curr = curr->next;
		if (curr_data > curr->data)
			return (0);
	}
	return (1);
}
