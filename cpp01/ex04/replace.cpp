/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:20:52 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 13:02:05 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
std::ofstream   create_outfile(char *argv[])
{
    std::string         name;
    std::ofstream       outfile;
    
    name.append(argv[1]);
    name.append(".replace");
    outfile.open(name.c_str());
    return (outfile);
}

void    replace(char *argv[], std::string str, std::ofstream outfile)
{
    std::string         s1 = argv[2];
    std::string         s2 = argv[3];
    std::string         str_replace;
    unsigned long int   start;
    long unsigned int   i;
    long unsigned int   j;
    
    while (str.find(s1) != (long unsigned int)-1)
    {
        i = 0;
        while (i != str.length())
        {
            j = 0;
            start = str.find(s1);
            while (i != str.length() && i != start)
                str_replace += str.at(i++);
            while (i == start && j != s2.length())
                str_replace += s2.at(j++);
            if (j != 0)
                i += s1.length();
        }
        str = str_replace;
        str_replace.clear();
    }
    outfile << str;
    outfile.close();
}

std::string    read_file(char *argv[])
{
    std::ifstream       infile;
    std::string         str;
    std::string         new_str;
    
    infile.open(argv[1]);
    if (infile.is_open())
    {
        while (std::getline(infile, new_str))
        {
            str += new_str;
            if (!infile.eof())
                str += '\n';
        }
        infile.close();
    }
    return (str);
}