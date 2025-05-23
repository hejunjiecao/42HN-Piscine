/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:45:51 by hecao             #+#    #+#             */
/*   Updated: 2025/05/14 16:46:05 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_num(char *given_base, int i, int *num)
{
	char	c;

	while (i >= 0)
	{
		c = given_base[num[i]];
		write(1, &c, 1);
		i--;
	}
}

void	convert_to_given_base(int nbr, char *given_base)
{
	long	nb;
	int		i;
	int		num[32];
	int		base;

	i = 0;
	base = ft_strlen(given_base);
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (nb > 0)
	{
		num[i] = nb % base;
		nb /= base;
		i++;
	}
	print_num(given_base, i - 1, num);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_valid_base(base))
	{
		convert_to_given_base(nbr, base);
	}
}
