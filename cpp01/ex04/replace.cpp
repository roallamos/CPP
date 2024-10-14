/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:20:52 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 20:34:36 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replacer::replacer(std::string s1,std::string s2)
{
    replacer::s1 = s1;
    replacer::s2 = s2;
}

replacer::~replacer()
{
}

void    replacer::Setfilename(std::string name)
{
    replacer::file_name = name + ".replace";
}

const std::string    replacer::GetFilename()
{
    return (file_name);
}

std::string    replacer::GetS1()
{
    return (replacer::s1);
}

std::string    replacer::GetS2()
{
    return (replacer::s2);
}

void  replacer::replace(std::string str)
{
    unsigned long int   start;
    std::ofstream       out_file;

    start = str.find(s1);
    out_file.open(file_name.c_str());
    if (out_file.is_open())
    {
        while (start != (unsigned long int) -1)
        {
            str.erase(start, s1.length());
            str.insert(start, s2);
            start = str.find(s1);
        }
        out_file << str;
        out_file.close();
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