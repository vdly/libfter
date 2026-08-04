/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:17:59 by jodehii           #+#    #+#             */
/*   Updated: 2026/07/27 16:22:40 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_alnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_alnum('a') = %d\n", ft_alnum('a'));
// 	printf("ft_alnum('7') = %d\n", ft_alnum('7'));
// 	printf("ft_alnum('!') = %d\n", ft_alnum('!'));
// 	return (0);
// }
