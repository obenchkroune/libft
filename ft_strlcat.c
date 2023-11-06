#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (size < dst_len)
		return (size + ft_strlen(src));
	while (i < size - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dst_len);
}
