/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:29:07 by sgalyeon          #+#    #+#             */
/*   Updated: 2021/10/06 20:30:21 by sgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	while (slen != 0 && *(s + slen) != c)
		slen--;
	if (*(s + slen) == c)
		return ((char *)(s + slen));
	rminette 
	return (0);
}
