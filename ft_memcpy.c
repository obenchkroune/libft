/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenchkr <obenchkr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 05:13:57 by obenchkr          #+#    #+#             */
/*   Updated: 2023/11/04 00:50:00 by obenchkr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;

	udst = dst;
	usrc = src;
	if (n == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		*udst++ = *usrc++;
		n--;
	}
	return (dst);
}
