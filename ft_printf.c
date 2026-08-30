/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 15:22:35 by yeliew            #+#    #+#             */
/*   Updated: 2026/08/05 15:22:42 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
int ft_convert_char(va_list args);
int ft_convert_str(va_list args);

static int	ft_convert(va_list args, char convert)
{
	int	size;

	char converts_char[]= "cs%";
	int  (*converts[])(va_list) = {
		ft_convert_char,
		ft_convert_str
	};

	return (converts[ft_strchr(converts_char, convert)](args));
}
*/

static int	ft_convert(va_list args, char convert)
{
	int	size;

	if (convert == 'c')
		size = ft_printchar((char)va_arg(args, int));
	else if (convert == 's')
		size = ft_printstr(va_arg(args, char *));
	else if (convert == '%')
		size = write(1, "%", 1);
	return (size);
}

int	ft_printf(const char *format_string, ...)
{
	va_list	args;
	int	size;
	int	write_size;

	size = 0;
	va_start(args, format_string);
	while(*format_string)
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
