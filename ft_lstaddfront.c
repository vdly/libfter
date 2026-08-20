/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:53:18 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/21 01:06:04 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main()
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("apples");
	t_list	*node2 = ft_lstnew("pineapple");

	ft_lstadd_front(&head, node1);
	printf("first node : %s\n", (char *)head->content);
	ft_lstadd_front(&head, node2);
	printf("first node : %s\n", (char *)head->content);
	printf("second node : %s\n", (char *)head->next->content);
	free (head->next);
	free (head);
	return (0);
}