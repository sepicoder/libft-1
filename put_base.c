/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_digi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mray <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 21:51:38 by mray              #+#    #+#             */
/*   Updated: 2018/02/25 21:51:48 by mray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		put_base(long c, char *str, int i)
{
	char nbr;

	if (c < 0)
	{
		str[0] = '-';
		c *= -1;
	}
	if (c >= 10)
		put_base(c / 10, str, i - 1);
	nbr = (c % 10) + '0';
	str[i] = nbr;
}
