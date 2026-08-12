/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:24:22 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/12 17:44:18 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	s_len;
	char			*sub;

	i = 0;
	s_len = ft_strlen(s);
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i] && start < s_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}

// int	main(void)
// {
// 	printf("sub str from pineapple : %s\n", ft_substr("pineapple", 4, -2));
// }
