/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:22:06 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/29 19:10:35 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

typedef struct s_literaltok
{
	int	has_dot;
	int	has_f;
	int has_sing;
	int has_char;
	int has_nb;
}	t_literaltok;

typedef struct s_cast
{
	int	c;
	char	character;
	int	i;
	int		integer;
	float	flot;
	double	dob;
}	t_cast;

void	countTokens(t_literaltok *l, std::string literal)
{
	int i = 0;
	
	while (literal.at(i))
	{
		if (literal.at(i) >= '0' && literal.at(i) <= '9')
			l->has_nb++;
		else if (literal.at(i) == '.' && l->has_nb)
			l->has_dot++;
		else if (literal.at(i) == 'f' && l->has_dot && l->has_nb)
			l->has_f++;
		else if (literal.at(i) == '+' || literal.at(i) == '-')
		{
			l->has_sing++;
			l->has_char++;
		}
		else
			l->has_char++;
		i++;
	}
}

bool	parse(std::string literal, t_cast *cast, t_literaltok l)
{

	if (literal == "-inff" || literal == "+inff"
		|| literal == "nanf" || literal == "-inf"
		|| literal == "+inf" || literal == "nan")
	{
		cast->c = 0;
		cast->i = 0;
		return (1);
	}
	else if (l.has_dot <= 1 && l.has_f <= 1 && l.has_sing <= 1)
	{
		cast->c = 1;
		cast->i = 1;
		return (1);
	}
	return (0);
}

void	caster(std::string literal, t_cast *cast, t_literaltok l)
{
	double	to_cast;
	if (l.has_char == 1)
		to_cast = literal.at(0);
	else
		to_cast = std::strtod(literal.c_str(), NULL);
	if (cast->c == 1)
		cast->character = static_cast<char>(to_cast);
	if (cast->i == 1)
		cast->integer = static_cast<int>(to_cast);
	cast->flot = static_cast<float>(to_cast);
	cast->dob = static_cast<double>(to_cast);
}

void	print(t_cast cast)
{
	std::cout << "char: " << cast.character << std::endl;
	std::cout << "int: " << cast.integer << std::endl;
	std::cout << "float: " << cast.flot << std::endl;
	std::cout << "double: " << cast.dob << std::endl;
}

void ScalarConverter::convert(std::string literal)
{
	t_literaltok	l;
	t_cast			cast;

	memset(&l, 0, sizeof(t_literaltok));
	countTokens(&l, literal);
	if (parse(literal, &cast, l))
	{	
		caster(literal, &cast, l);
		print(cast);
	}
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &copy)
{
	(void) copy;
	return (*this);
}

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}