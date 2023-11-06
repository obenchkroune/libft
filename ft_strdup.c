/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenchkr <obenchkr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:30:57 by obenchkr          #+#    #+#             */
/*   Updated: 2023/11/06 20:32:49 by obenchkr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strdup(const char *s)
{
	char	*result;
	size_t	buf_size;

	buf_size = ft_strlen(s) + 1;
	result = malloc(buf_size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s, buf_size);
	return (result);
}
