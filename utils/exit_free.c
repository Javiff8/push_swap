/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:17:31 by javferna          #+#    #+#             */
/*   Updated: 2021/11/07 19:11:19 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error_end(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	free_inputs(char **inputs)
{
	int	i;

	i = 0;
	while (inputs[i])
		free(inputs[i++]);
	free(inputs);
}

void	free_all_error(char **inputs, t_stack **stack)
{
	int	i;

	i = 0;
	while (inputs && inputs[i])
		free(inputs[i++]);
	if (inputs)
		free(inputs);
	if (*stack)
		ft_lstclear_stack(stack);
	error_end();
}
