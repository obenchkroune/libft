/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenchkr <obenchkr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:23:09 by obenchkr          #+#    #+#             */
/*   Updated: 2023/11/03 21:52:20 by obenchkr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	char	*result;
	int		buf_size;

	while (*str && ft_strchr(set, *str))
		str++;
	if (*str == '\0')
		return (ft_calloc(sizeof(char), 1));
	buf_size = ft_strlen(str);
	while (*str && ft_strchr(set, str[buf_size - 1]))
		buf_size--;
	result = (char *)ft_calloc(sizeof(char), buf_size + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, str, buf_size + 1);
	return (result);
}
