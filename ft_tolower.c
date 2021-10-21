/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:30:38 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/06 20:31:18 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char	*string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		if (string[index] >= 'A' && string[index] <= 'Z')
			string[index] += 32;
		index++;
	}
	return (string);
}
