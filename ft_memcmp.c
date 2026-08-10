/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 19:13:52 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/08 21:07:34 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*destt;
	unsigned char	*srct;
	size_t			i;

	destt = (unsigned char *)dest;
	srct = (unsigned char *)src;
	i = 0;
	if (!dest || !src)
		return (0);
	while (i < n)
	{
		if (destt[i] != srct[i])
			return (destt[i] - srct[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	dest[15] = "melon";

// 	printf("dest : %s\n", dest);
// 	printf("ft_memcmp : %d\n", ft_memcmp(dest, "melzn", 5));
// }
