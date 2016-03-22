/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdidier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:06:49 by rdidier           #+#    #+#             */
/*   Updated: 2015/12/14 22:08:52 by rdidier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *str, void (*f)(char *))
{
	int	i;

	if (str && f)
	{
		i = 0;
		while (str[i])
		{
			f(str + i);
			i++;
		}
	}
}