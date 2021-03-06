/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdidier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:05:10 by rdidier           #+#    #+#             */
/*   Updated: 2015/12/14 21:57:21 by rdidier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *str)
{
	size_t	length;

	if (str)
	{
		length = ft_strlen(str);
		ft_bzero((void*)str, length);
	}
}
