/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:20:52 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 17:32:26 by rodralva         ###   ########.fr       */
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
    size_t              pos;
    unsigned long int   start;
    std::string         str_replace;
    std::string        sub_str;

    
    pos = 0;
    start = str.find(s1);
    while (start != (unsigned long int) -1)
    {
        sub_str = str.substr(pos, start - pos);
        str_replace.append(sub_str); 
        str_replace.append(s2);
        pos = start + s1.length();
        start = str.find(s1, start + 1);
    }
    return (str_replace);
}

void    replace(char *argv[], std::string str, std::string s1, std::string s2)
{

    std::ofstream       outfile;
    std::string         new_str;
    std::string         name;
    
    name.append(argv[1]);
    name.append(".replace");
    outfile.open(name.c_str());
    if (outfile.is_open())
    {
        new_str = replace_in_str(str, s1, s2);
        outfile << new_str;
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