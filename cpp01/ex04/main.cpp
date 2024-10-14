/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:01 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 14:59:39 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
    std::string         str;
    std::string         s1;
    std::string         s2;

    if (argc != 4 || !*argv[2] || !*argv[3])
        return (0);
    s1 = argv[2];
    s2 = argv[3];
    str = read_file(argv);
    replace(argv, str, s1, s2);
    return (0);
}