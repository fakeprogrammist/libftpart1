/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:06:00 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/06 19:08:00 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(char	*element)
{
	int	index;
	int	result;

	result = 0;
	index = 0;
	while (element[index])
	{
		if (element[index] >= '0' && element[index] <= '9')
			continue ;
		else
			return (0);
	}
	return (1);
}
