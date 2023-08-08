/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:14:50 by marcofer          #+#    #+#             */
/*   Updated: 2023/08/03 13:59:11 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// int		flag;
	// char	c;
	char	numstr[] = "   +--+-+123 asd";

	// ft_is...
		printf("\nft_is... :\n");
		printf("\tisalpha('1') = %d\tft_isalpha('1') = %d -> %s\n", isalpha('1')	,ft_isalpha('1')	,(ft_isalpha('1') == ((isalpha('1') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisalpha('e') = %d\tft_isalpha('e') = %d -> %s\n" ,isalpha('e')	,ft_isalpha('e')	,(ft_isalpha('e') == ((isalpha('e') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\n");
		printf("\tisdigit('1') = %d\tft_isdigit('1') = %d -> %s\n" ,isdigit('1')	,ft_isdigit('1')	,(ft_isdigit('1') == ((isdigit('1') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisdigit('_') = %d\tft_isdigit('_') = %d -> %s\n" ,isdigit('_')	,ft_isdigit('_')	,(ft_isdigit('_') == ((isdigit('_') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\n");
		printf("\tisalnum('1') = %d\tft_isalnum('1') = %d -> %s\n" ,isalnum('1')	,ft_isalnum('1')	,(ft_isalnum('1') == ((isalnum('1') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisalnum('v') = %d\tft_isalnum('v') = %d -> %s\n" ,isalnum('v')	,ft_isalnum('v')	,(ft_isalnum('v') == ((isalnum('v') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisalnum('^') = %d\tft_isalnum('^') = %d -> %s\n" ,isalnum('^')	,ft_isalnum('^')	,(ft_isalnum('^') == ((isalnum('^') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\n");
		printf("\tisascii('1') = %d\tft_isascii('1') = %d -> %s\n" ,isascii('1')	,ft_isascii('1')	,(ft_isascii('1') == ((isascii('1') == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisascii(134) = %d\tft_isascii(134) = %d -> %s\n" ,isascii(134)	,ft_isascii(134)	,(ft_isascii(134) == ((isascii(134) == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\n");
		printf("\tisprint(31)  = %d\tft_isprint(31)  = %d -> %s\n" ,isprint(31)		,ft_isprint(31)		,(ft_isprint(31)  == ((isprint(31)  == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisprint(32)  = %d\tft_isprint(32)  = %d -> %s\n" ,isprint(32)		,ft_isprint(32)		,(ft_isprint(32)  == ((isprint(32)  == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisprint(127) = %d\tft_isprint(127) = %d -> %s\n" ,isprint(127)	,ft_isprint(127)	,(ft_isprint(127) == ((isprint(127) == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisprint(128) = %d\tft_isprint(128) = %d -> %s\n" ,isprint(128)	,ft_isprint(128)	,(ft_isprint(128) == ((isprint(128) == 0) ? 0 : 1)) ? "OK" : "Error!" );
		printf("\tisprint(-1)  = %d\tft_isprint(-1)  = %d -> %s\n" ,isprint(-1)		,ft_isprint(-1)		,(ft_isprint(-1)  == ((isprint(-1)  == 0) ? 0 : 1)) ? "OK" : "Error!" );

	// String
		printf("\nString:\n");
		printf("\tstrlen('123456789') = %ld\tft_strlen('123456789') = %ld -> %s\n", strlen("123456789")	,ft_strlen("123456789")	,(ft_strlen("123456789") == strlen("123456789")) ? "OK" : "Error!" );

	// Other
		printf("\nOther:\n");
		printf("\ttoupper('a') = %c\tft_toupper('a') = %c -> %s\n", toupper('a')	,ft_toupper('a')	,(ft_toupper('a') == toupper('a')) ? "OK" : "Error!" );
		printf("\ttoupper('z') = %c\tft_toupper('z') = %c -> %s\n", toupper('z')	,ft_toupper('z')	,(ft_toupper('z') == toupper('z')) ? "OK" : "Error!" );
		printf("\ttoupper('A') = %c\tft_toupper('A') = %c -> %s\n", toupper('A')	,ft_toupper('A')	,(ft_toupper('A') == toupper('A')) ? "OK" : "Error!" );
		printf("\ttoupper('Z') = %c\tft_toupper('Z') = %c -> %s\n", toupper('Z')	,ft_toupper('Z')	,(ft_toupper('Z') == toupper('Z')) ? "OK" : "Error!" );
		printf("\ttoupper('@') = %c\tft_toupper('@') = %c -> %s\n", toupper('@')	,ft_toupper('@')	,(ft_toupper('@') == toupper('@')) ? "OK" : "Error!" );
		printf("\ttoupper('[') = %c\tft_toupper('[') = %c -> %s\n", toupper('[')	,ft_toupper('[')	,(ft_toupper('[') == toupper('[')) ? "OK" : "Error!" );
		printf("\n");
		printf("\ttolower('a') = %c\tft_tolower('a') = %c -> %s\n", tolower('a')	,ft_tolower('a')	,(ft_tolower('a') == tolower('a')) ? "OK" : "Error!" );
		printf("\ttolower('z') = %c\tft_tolower('z') = %c -> %s\n", tolower('z')	,ft_tolower('z')	,(ft_tolower('z') == tolower('z')) ? "OK" : "Error!" );
		printf("\ttolower('A') = %c\tft_tolower('A') = %c -> %s\n", tolower('A')	,ft_tolower('A')	,(ft_tolower('A') == tolower('A')) ? "OK" : "Error!" );
		printf("\ttolower('Z') = %c\tft_tolower('Z') = %c -> %s\n", tolower('Z')	,ft_tolower('Z')	,(ft_tolower('Z') == tolower('Z')) ? "OK" : "Error!" );
		printf("\ttolower('@') = %c\tft_tolower('@') = %c -> %s\n", tolower('@')	,ft_tolower('@')	,(ft_tolower('@') == tolower('@')) ? "OK" : "Error!" );
		printf("\ttolower('[') = %c\tft_tolower('[') = %c -> %s\n", tolower('[')	,ft_tolower('[')	,(ft_tolower('[') == tolower('[')) ? "OK" : "Error!" );		


	// ft_atoi
		printf("\nft_atoi:\n");
		printf("\tft_atoi(%s) = %d\n", numstr, ft_atoi(numstr));

	return (0);
}