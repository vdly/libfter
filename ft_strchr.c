/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:36:09 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/07 20:08:06 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;
	int		i;

	temp = (char *)s;
	i = 0;
	if (!temp)
		return (NULL);
	while (temp[i])
	{
		if (temp[i] == c)
			return (temp + i);
		i++;
	}
	if (temp[i] == '\0')
		return (temp + i);
	return (0);
}

// int	main(void)
// {
// 	char	s[11] = "watermelon";

// 	printf("l pointer : %p\n", &s[7]);
// 	printf("strchr : %p\n", ft_strchr(s, 'l'));
// }
