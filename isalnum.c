/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:06:23 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/06 17:06:44 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char element)
{
	if ((element >= 'a' && element <= 'z')
		|| (element >= 'A' && element <= 'Z'))
		return (1);
	else if ((element >= '0' && element <= '9'))
		return (1);
	return (0);
}
