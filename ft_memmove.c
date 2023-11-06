/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenchkr <obenchkr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 05:17:01 by obenchkr          #+#    #+#             */
/*   Updated: 2023/11/04 00:50:30 by obenchkr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;

	if (n == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	udst = dst;
	usrc = src;
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	while (n)
	{
		udst[n - 1] = usrc[n - 1];
		n--;
	}
	return (dst);
}
