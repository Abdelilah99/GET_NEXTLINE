/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:08:12 by anoury            #+#    #+#             */
/*   Updated: 2022/05/14 16:08:14 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

// # ifndef BUFFER_SIZE
// #  define BUFFER_SIZE 1
// # endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
int		check(char *str, int c);
char	*add(char *s1, char *s2);

#endif