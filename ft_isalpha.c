/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:03:11 by marcofer          #+#    #+#             */
/*   Updated: 2023/06/27 20:16:35 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if (c > 64 && c < 91)
		return (1);
	if (c > 96 && c < 122)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int	flag;

	flag = ft_isalpha('A');
	printf("%d\n", flag);
	return (0);
}
