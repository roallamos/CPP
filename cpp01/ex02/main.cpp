/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:18 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/08 19:08:52 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str;
    
    str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "memory addres\n"
                << "str " << &str << "\n"
                << "stringPTR " << stringPTR << "\n"
                << "stringREF " << &stringREF << std::endl;
    std::cout << "value of str\n"
                << "str " << str << "\n"
                << "stringPTR " << *stringPTR << "\n"
                << "stringREF " << stringREF << std::endl;
    return (0);
}