/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:01 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 20:34:52 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
    std::string str;

    if (argc != 4 || !*argv[2] || !*argv[3])
        return (0);
    replacer    replacer(argv[2], argv[3]);
    replacer.Setfilename(argv[1]);
    str = read_file(argv);
    replacer.replace(str);
    return (0);
}