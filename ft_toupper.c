/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:31:33 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/06 20:32:14 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupper(char	*string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		if (string[index] >= 'a' && string[index] <= 'z')
			string[index] -= 32;
		index++;
	}
	return (string);
}
