/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:24:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/17 12:00:22 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)

# define TRUE (1)

# define FALSE (0)

# define EVEN_MSG ("I have an even number of arguments.\n")

# define ODD_MSG ("I have an odd number of arguments.\n")

# define SUCCESS (0)

#endif
