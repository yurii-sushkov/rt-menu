/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhloba <anhloba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 17:43:14 by anhloba           #+#    #+#             */
/*   Updated: 2018/06/28 11:30:30 by anhloba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_error(int i)
{
	char	*str;

	str = strerror(i);
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}