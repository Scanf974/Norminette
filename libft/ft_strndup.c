/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/25 06:29:11 by bsautron          #+#    #+#             */
/*   Updated: 2014/12/25 06:29:36 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char            *ft_strndup(char const *s, size_t len)
{
	char            *dest;

	dest = (char *)malloc(sizeof(char) * len + 1);
	dest = ft_strncpy(dest, s, len);
	return (dest);
}
