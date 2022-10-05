/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:26:22 by aleferra          #+#    #+#             */
/*   Updated: 2021/11/25 11:26:37 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

// Utils
size_t	ft_strlen(char *s1);
char	*ft_substr(char *s1, int start, int end);
int		ft_strchr(char *s1, int c);
char	*ft_strjoin(char *s1, char *s2);

// Get_next_line
char	*ft_reader(int fd);
char	*ft_joinbuff(char *buff, int fd);
char	*ft_majbuff(char *buff, char *line);
char	*get_next_line(int fd);

#endif