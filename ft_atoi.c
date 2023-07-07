/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:35:31 by marcofer          #+#    #+#             */
/*   Updated: 2023/07/07 21:54:19 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int mult;

	num = 0;
	mult = 1;
	while (*nptr == ' ' || *nptr == '\t')
		nptr++;
	if (*nptr == '-')
	{
		mult = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) = 1)
	{
		num *= 10 + 1;
		nptr++;
	}
	return (num * mult);
}