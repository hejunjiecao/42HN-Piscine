/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:50:41 by hecao             #+#    #+#             */
/*   Updated: 2025/05/21 17:49:21 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = malloc((max - min) * sizeof(int));
	if (!result)
		return (-1);
	i = 0;
	j = min;
	while (j < max)
	{
		result[i] = j;
		i++;
		j++;
	}
	*range = result;
	return (i);
}
