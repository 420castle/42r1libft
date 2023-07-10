/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:35:31 by marcofer          #+#    #+#             */
/*   Updated: 2023/07/10 19:34:57 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_isdigit.c"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	mult;

	num = 0;
	mult = 1;
	while (*nptr == ' ' || *nptr == '\t')
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			mult *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) == 1)
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (num * mult);
}
