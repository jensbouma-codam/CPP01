/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileHandler.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:26:46 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/02/24 16:52:41 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEHANDLER_HPP
# define FILEHANDLER_HPP

# include <string>
# include <iostream>
# include <fstream>

class FileHandler {
    private:
        std::string _fileName;
        std::string _fileContent;

    public:
        FileHandler (std::string fileName);
        ~FileHandler ();

        void sed(std::string s1, std::string s2);
        void writeNewFile();
};

#endif