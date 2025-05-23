/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:20:53 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 21:43:45 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(int ascii_value)
{
	if ((ascii_value >= 32 && ascii_value <= 126))
	{
		return (1);
	}
	return (0);
}

void	convert_hex_value(char c)
{
	char			*hex;
	unsigned char	uc;

	hex = "0123456789abcdef";
	uc = (unsigned char)c;
	write(1, "\\", 1);
	write(1, &hex[uc / 16], 1);
	write(1, &hex[uc % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable((int)str[i]))
		{
			convert_hex_value(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char test1[] = "\x1F";
// 	ft_putstr_non_printable(test1);
// }