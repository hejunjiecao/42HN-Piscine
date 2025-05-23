/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:19:15 by hecao             #+#    #+#             */
/*   Updated: 2025/05/21 17:46:58 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	size = max - min;
	result = malloc(size * sizeof(int));
	if (result == NULL)
		return (NULL); 
	i = 0;
	j = min;
	while (j < max)
	{
		result[i] = j;
		i++;
		j++;
	}
	return (result);
}
