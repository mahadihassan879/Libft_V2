/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahhassa <mahhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:52:52 by mahhassa          #+#    #+#             */
/*   Updated: 2026/10/28 16:41:59 by mahhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *start_search, int charcter, size_t number_of_byte_search)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)start_search;
	i = 0;
	while (i < number_of_byte_search)
	{
		if (p[i] == (unsigned char)charcter)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
