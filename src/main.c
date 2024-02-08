/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:23:33 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:23:44 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	leaks(void)
{
	system("leaks -q cub3D");
}

int	main(int ac, char **av)
{
	t_data	dt;

	atexit(leaks);
	if (!parsing(ac, av, &dt))
		return (1);
	execution(&dt);
	return (0);
}
