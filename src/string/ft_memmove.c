/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:54:15 by SSONG             #+#    #+#             */
/*   Updated: 2021/11/05 00:39:55 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*iter;
	int				flag;

	iter = dst;
	flag = 1;
	if (iter > src)
	{
		iter += n - 1;
		src += n - 1;
		flag = -1;
	}
	while (n > 0)
	{
		*iter = *(unsigned char *)src;
		iter += flag;
		src += flag;
		--n;
	}
	return (dst);
}
