/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:01 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 12:59:29 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{   
    std::ofstream       outfile;
    std::string         str;

    if (argc != 4)
        return (0);
    outfile = create_outfile(argv);
    str = read_file(argv);
    replace(argv, str, outfile);
    return (0);
}