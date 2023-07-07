/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:14:50 by marcofer          #+#    #+#             */
/*   Updated: 2023/07/07 21:59:52 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
int	main(void)
{
	int		flag;
	char	c;
	char	numstr[] = "   -123"

	c = '1';
	flag = ft_isdigit(c);
	printf("ft_isdigit(%d) = %d\n", c, flag);

	return (0);
}