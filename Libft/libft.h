/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmota <gmota@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:27:38 by gmota             #+#    #+#             */
/*   Updated: 2020/10/06 22:27:38 by gmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

/* # include <unistd.h>*/

typedef struct      s_list
{
    void            *content;
    size_t          conten_size;
    struct s_list   *next;
}                   t_list;


void	*ft_memset(void *str, int c, size_t n);

#endif