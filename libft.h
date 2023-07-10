/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcofer <marcofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:03:08 by marcofer          #+#    #+#             */
/*   Updated: 2023/07/10 19:37:56 by marcofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include "ft_isalpha.c"
// #include "ft_isdigit.c"
// #include "ft_atoi.c"
// #include "ft_isalnum.c"
// #include "ft_isascii.c"

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(int c);
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);

#endif