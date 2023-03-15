/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:06:16 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/22 16:26:19 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		size_s;
	int		i;

	i = 0;
	size_s = ft_strlen(src);
	ptr = malloc(sizeof(*ptr) * (size_s + 1));
	if (!ptr)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
