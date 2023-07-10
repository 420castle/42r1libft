/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:14:50 by marcofer          #+#    #+#             */
/*   Updated: 2023/07/10 19:41:41 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
int	main(void)
{
	// int		flag;
	// char	c;
	char	numstr[] = "   +--+-+123 asd";

	// ft_is...
	printf("ft_is... :\n");
	printf("\tft_isalpha('1') = 0 ->%d\n", ft_isalpha('1'));
	printf("\tft_isalpha('e') = 1 ->%d\n", ft_isalpha('e'));
	printf("\tft_isdigit('1') = 1 ->%d\n", ft_isdigit('1'));
	printf("\tft_isdigit('_') = 0 ->%d\n", ft_isdigit('_'));
	printf("\tft_isalnum('1') = 1 ->%d\n", ft_isalnum('1'));
	printf("\tft_isalnum('v') = 1 ->%d\n", ft_isalnum('v'));
	printf("\tft_isalnum('^') = 0 ->%d\n", ft_isalnum('^'));
	printf("\tft_isascii('1') = 1 ->%d\n", ft_isascii('1'));
	printf("\tft_isascii(134) = 0 ->%d\n", ft_isascii(134));

	// ft_atoi
	printf("\nft_atoi:\n");
	printf("\tft_atoi(%s) = %d\n", numstr, ft_atoi(numstr));

	return (0);
}