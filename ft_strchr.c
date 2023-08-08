/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:00:03 by marcofer          #+#    #+#             */
/*   Updated: 2023/08/03 16:00:03 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	find;

	find = (unsigned char)c;
	ptr = (char *)s;
	while (!ptr)
	{
		if (*ptr == find)
			return(ptr);
		ptr++;
	}
	if (*ptr == find)
		return(ptr);
	return (NULL);
}