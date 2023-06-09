/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:42:28 by casalced          #+#    #+#             */
/*   Updated: 2023/06/09 04:45:16 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define _POSIX_SOURCE

#ifndef MINISHELL_H
# define MINISHELL_H

# define _GNU_SOURCE
# define _POSIX_SOURCE >=199309L
# define _POSIX_C_SOURCE

# include <sys/types.h>
# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

#endif
