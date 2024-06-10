/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorpela <mkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 08:24:46 by mkorpela          #+#    #+#             */
/*   Updated: 2023/12/13 09:35:37 by mkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	string_copy(char *dest, char *source, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}

char	*free_string_and_return_null(char *string)
{
	free(string);
	return (NULL);
}

int	return_newline_index(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (-1);
	while (s[i] != '\0' && s[i] != (char) '\n')
	{
		i++;
	}
	if (s[i] == '\0' && s[i] != (char) '\n')
	{
		return (-1);
	}
	else
	{
		return (i);
	}
}

char	*make_empty_string(char *string)
{
	if (!string)
	{
		string = malloc(sizeof(char) * 1);
		if (!string)
			return (NULL);
		*string = 0;
		return (string);
	}
	else
		return (string);
}
