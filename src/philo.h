/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 01:51:54 by alex              #+#    #+#             */
/*   Updated: 2024/04/26 23:25:10 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <sys/time.h>
# include <pthread.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_philo_args
{
	int		n_philos;
	int		time_die;
	int		time_eat;
	int		time_sleep;
	int		n_eat;
}				t_args;

typedef struct s_philo_stats
{
	int		id;
	int		n_ate;
	int		death;
}				t_stas;

// utils.c

void	ph_error(char *message);
int		ph_atoi(char *str);

#endif