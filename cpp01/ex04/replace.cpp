/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:20:52 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 14:51:28 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
/*void   create_outfile(char *argv[])
{
    std::string         name;
    std::ofstream       outfile;
    
    name.append(argv[1]);
    name.append(".replace");
    outfile.open(name.c_str());
}*/

static std::string  replace_in_str(std::string str, std::string s1, std::string s2)
{
    long unsigned int   i;
    long unsigned int   j;
    unsigned long int   start;
    std::string         str_replace;
    
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
    return (str_replace);
}

void    replace(char *argv[], std::string str, std::string s1, std::string s2)
{

    std::ofstream       outfile;
    std::string         name;
    
    name.append(argv[1]);
    name.append(".replace");
    outfile.open(name.c_str());
    if (outfile.is_open())
    {
        while (str.find(s1) != (long unsigned int)-1)
            str = replace_in_str(str, s1, s2);
        outfile << str;
        outfile.close();
    }
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