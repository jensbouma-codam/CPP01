/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 15:55:54 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:01:52 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "String: " << &str << std::endl;
    std::cout << "Pointer: " << ptr << std::endl;
    std::cout << "Reference: " << &ref << std::endl;

    std::cout << "Value of string: " << str << std::endl;
    std::cout << "Value of pointer: " << *ptr << std::endl;
    std::cout << "Value of reference: " << ref << std::endl;

    return 0;
}