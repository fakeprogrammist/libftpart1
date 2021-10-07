/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:21:00 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/06 20:22:11 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if ((destlen = ft_strlen(dest)) > size)
		destlen = size;
	if (destlen == size)
		return (size + srclen);
	if (srclen < size - destlen)
	{
		ft_memcpy(dest + destlen, src, srclen);
		dest[destlen + srclen] = '\0';
	}
	else
	{
		ft_memcpy(dest + destlen, src, size - destlen - 1);
		dest[size - 1] = '\0';
	}
	return (destlen + srclen);
}
