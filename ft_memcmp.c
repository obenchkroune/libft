/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenchkr <obenchkr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:13:28 by obenchkr          #+#    #+#             */
/*   Updated: 2023/11/06 20:15:48 by obenchkr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n)
	{
		if (*src1++ != *src2++)
			return (*src1 - *src2);
		n--;
	}
	return (0);
}
