/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 15:22:35 by yeliew            #+#    #+#             */
/*   Updated: 2026/08/05 15:22:42 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_else(char convert)
{
	if ((write(1, "%", 1) == -1))
		return (-1);
	if ((write(1, &convert, 1) == -1))
		return (-1);
	return (2);
}

static int	ft_convert(va_list args, char convert)
{
	int	size;

	if (convert == 'c')
		size = ft_printchar((char)va_arg(args, int));
	else if (convert == 's')
		size = ft_printstr(va_arg(args, char *));
	else if (convert == '%')
		size = write(1, "%", 1);
	else if (convert == 'd' || convert == 'i')
		size = ft_decimal(va_arg(args, int));
	else if (convert == 'u')
		size = ft_unsigned_decimal(va_arg(args, unsigned int));
	else if (convert == 'x')
		size = ft_hex(va_arg(args, unsigned int), 'x');
	else if (convert == 'X')
		size = ft_hex(va_arg(args, unsigned int), 'X');
	else if (convert == 'p')
		size = ft_ptr(va_arg(args, void *));
	else if (convert == 0)
		return (0);
	else
		size = ft_else(convert);
	return (size);
}

int	ft_printf(const char *format_string, ...)
{
	va_list	args;
	int		size;
	int		write_size;

	size = 0;
	if (!format_string)
		return (-1);
	va_start(args, format_string);
	while (*format_string)
	{
		if (*format_string == '%')
			write_size = ft_convert(args, *(++format_string));
		else
			write_size = write(1, format_string, 1);
		if (write_size == -1)
			return (va_end(args), -1);
		size += write_size;
		format_string++;
	}
	return (va_end(args), size);
}
