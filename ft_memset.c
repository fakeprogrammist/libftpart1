/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:24:18 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/06 19:25:06 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*temp;
	int		index;

	temp = (char *)b;
	index = 0;
	while (index < len)
	{
		temp[index] = c;
		index++;
	}
	return (temp);
}
