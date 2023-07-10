/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:58:51 by marcofer          #+#    #+#             */
/*   Updated: 2023/07/10 19:33:43 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	flag;

	flag = ft_isdigit('d');
	printf("%d\n", flag);
	return (0);
}
*/