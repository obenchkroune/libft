/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenchkr <obenchkr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:34:18 by obenchkr          #+#    #+#             */
/*   Updated: 2023/11/06 19:35:48 by obenchkr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)s;
	dst = (unsigned char *)d;
	while (n)
	{
		*dst++ = *src++;
		n--;
	}
	return (d);
}
