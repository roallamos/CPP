/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:22:06 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/31 19:47:59 by rodralva         ###   ########.fr       */
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
	int has_space;
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
	int	length;

	length = literal.length();
	while (i < length)
	{
		if (literal.at(i) >= '0' && literal.at(i) <= '9')
			l->has_nb++;
		else if (literal.at(i) == '.' && l->has_nb)
			l->has_dot++;
		else if (literal.at(i) == 'f' && l->has_dot && l->has_nb)
			l->has_f++;
		else if ((literal.at(i) == '+' || literal.at(i) == '-') && length != 1)
			l->has_sing++;
		else if (length != 1 && literal.at(i) == ' ')
			l->has_space++;
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
	else if (l.has_space && literal.length() > 1)
		return (0);
	else if (l.has_dot <= 1 && l.has_f <= 1 && l.has_sing <= 1 && l.has_char <= 1)
	{
		cast->c = 1;
		cast->i = 1;
		//std::cout << l.has_space << std::endl;
		//std::cout << l.has_sing << std::endl;
		return (1);
	}
	return (0);
}

void	caster(std::string literal, t_cast *cast, t_literaltok l)
{
	double	to_cast;
	const char	*str;

	str = literal.c_str();
	if (l.has_char == 1 && l.has_sing <= 1 && !l.has_nb)
		to_cast = literal.at(0);
	else
		to_cast = std::strtod(&str[l.has_sing], NULL);
	if (cast->c == 1)
		cast->character = static_cast<char>(to_cast);
	if (cast->i == 1)
		cast->integer = static_cast<int>(to_cast);
	cast->flot = static_cast<float>(to_cast);
	cast->dob = static_cast<double>(to_cast);
}

void	print(t_cast cast)
{
	if (cast.c == 1 && cast.character >= 32 && cast.character <= 126)
		std::cout << "char: '" << cast.character << "'" << std::endl;
	else if (cast.c == 1)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: imposible\n";
	if (cast.i == 1)
		std::cout << "int: " << cast.integer << std::endl;
	else
		std::cout << "int: imposible\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << cast.flot << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << cast.dob << std::endl;
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
	else
		std::cout << "Can not convert '" << literal << "'" << std::endl;
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