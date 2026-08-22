/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:19:25 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/22 19:55:05 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int main()
// {
// 	// Test 1: No Overlap (Standard copy)
// 	char	src1[] = "Hello World";
// 	char dest1[20] = {0};
// 	ft_memmove(dest1, src1, 12);
// 	printf("Test 1 (No overlap): %s\n", dest1);
// 	// Expected: Hello World

// 	// Test 2: Overlapping - Dest is AFTER Src (Requires Backward Copy)
// 	// This is the most critical test for memmove!
// 	char	str2[] = "ABCDEFGHIJ";
// 	ft_memmove(str2 + 2, str2, 3);
// 	printf("Test 2 (Overlap dest > src): %s\n", str2);
// 	// Expected: ABABCDEF... (If it was memcpy, it might be AAAA...)

// 	// Test 3: Overlapping - Dest is BEFORE Src (Requires Forward Copy)
// 	char	str3[] = "ABCDEFGHIJ";
// 	ft_memmove(str3, str3 + 2, 3);
// 	printf("Test 3 (Overlap dest < src): %s\n", str3);
// 	// Expected: CDEFGHIJ...

// 	// Test 4: Zero length
// 	char	str4[] = "Test";
// 	ft_memmove(str4, str4 + 1, 0);
// 	printf("Test 4 (Zero length): %s\n", str4);
// 	// Expected: Test

// 	// Test 5: Same pointer
// 	char	str5[] = "Same";
// 	ft_memmove(str5, str5, 4);
// 	printf("Test 5 (Same pointer): %s\n", str5);
// 	// Expected: Same

// 	return (0);
// }
