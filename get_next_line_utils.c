/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoubin <dgoubin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:53:22 by dgoubin           #+#    #+#             */
/*   Updated: 2022/11/12 19:46:40 by dgoubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str, int boolnl)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
	{
		if (boolnl && str[cpt] == '\n')
			return (cpt + 1);
		cpt++;
	}
	return (cpt);
}

char	*ft_strcat(char *src, char *dest)
{
	char	*res;
	int		cpt;
	char	*tmp;

	if (!src || !dest)
	{
		free(dest);
		return (0);
	}
	res = (char *)malloc(sizeof(char)
			* (ft_strlen(src, 0) + ft_strlen(dest, 0) + 1));
	if (!res)
	{
		free(dest);
		return (0);
	}
	cpt = 0;
	tmp = dest;
	while (*tmp)
		res[cpt++] = *(tmp++);
	while (*src)
		res[cpt++] = *(src++);
	res[cpt] = 0;
	free(dest);
	return (res);
}

char	*ft_strdup_untilnl(char *str, int boolnl)
{
	char	*res;
	int		cpt;

	if (!str)
		return (0);
	res = (char *)malloc(sizeof(char) * (ft_strlen(str, boolnl) + 1));
	if (!res)
		return (0);
	cpt = 0;
	while (str[cpt])
	{
		res[cpt] = str[cpt];
		if (str[cpt++] == '\n' && boolnl)
			break ;
	}
	res[cpt] = 0;
	return (res);
}
