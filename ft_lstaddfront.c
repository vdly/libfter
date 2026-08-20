/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:53:18 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/21 00:20:38 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{

}

void 	test(t_list *lst, t_list *new)
{
	printf("lst %p\n", lst);
	printf("new %p\n", new);
	new->next = lst;
	return ;
}

int	main()
{
}