/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:59:59 by hyeonsok          #+#    #+#             */
/*   Updated: 2021/11/04 22:08:51 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_islower(int c)
{
	return ((unsigned char)c >= 0x61 && (unsigned char)c <= 0x7a);
}
