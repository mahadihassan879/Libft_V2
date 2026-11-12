/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahhassa <mahhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:06:07 by mahhassa          #+#    #+#             */
/*   Updated: 2026/10/31 12:10:25 by mahhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t number_of_element, size_t size_of_each_elemet)
{
	void	*ptr;
	size_t	total;

	if (size_of_each_elemet != 0 && number_of_element
		> SIZE_MAX / size_of_each_elemet)
	{
		return (NULL);
	}
	total = number_of_element * size_of_each_elemet;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total);
	return (ptr);
}
