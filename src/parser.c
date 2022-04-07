/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:01:35 by ikarjala          #+#    #+#             */
/*   Updated: 2022/04/06 17:46:05 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	parse(int fd)
{
	const char	*ct_fr = {'.', '#', '\n'};
	const int	*ct_to = {0, 1, 0};
	char		buf[BUFF_SIZE + 1];
	ssize_t		rbytes;
	t_uint		i;

	rbytes = 1;
	while (rbytes > 0)
	{
		rbytes = read(fd, buf, BUFF_SIZE);
		if (rbytes < 0)
			return (XC_ERROR);
		buf[rbytes] = 0;
		while (i < BUFF_SIZE)
		{
		}
	}
}