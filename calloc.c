/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:25:15 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/07 12:05:15 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t num, size_t size)
{
	void	*result;

	if (!(result = malloc(num * size)))
		return (0);
	ft_bzero(result, num * size);
	return (result);

}
