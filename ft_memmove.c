/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahhassa <mahhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:11:03 by mahhassa          #+#    #+#             */
/*   Updated: 2026/11/18 19:08:21 by mahhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_forward(unsigned char *d, const unsigned char *s,
		size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

static void	ft_copy_backward(unsigned char *d, const unsigned char *s,
		size_t n)
{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (n != 0 && (dest == NULL || src == NULL))
	{
		return (NULL);
	}
	if (n == 0 || dest == src)
	{
		return (dest);
	}
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		ft_copy_forward(d, s, n);
	}
	else
	{
		ft_copy_backward(d, s, n);
	}
	return (dest);
}
