/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorpela <mkorpela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:11:38 by mkorpela          #+#    #+#             */
/*   Updated: 2024/11/11 12:12:15 by mkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int 	fd;
	char 	*line = "hello";

	fd = open("file.txt", O_RDONLY);
	while (line)
	{
		line = get_next_line(fd);
		printf("MAIN: %s", line);
		free(line);
	}
	close (fd);
	return (0);
}
