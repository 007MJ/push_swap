/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:08:53 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/18 18:26:35 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if ((int)start < ft_strlen((char *)s))
		while (i < len && s[start + i])
				i++;
	ptr = malloc((i + 1) * sizeof(*s));
	if (!ptr)
		return (ptr);
	i = 0;
	if ((int)start <= ft_strlen((char *)s))
	{
		while (s[start] != '\0' && i < len)
		{
			ptr[i] = s[start];
			start++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
