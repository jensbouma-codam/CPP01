/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileHandler.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jensbouma <jensbouma@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 16:29:58 by jensbouma     #+#    #+#                 */
/*   Updated: 2024/09/24 16:12:03 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"

FileHandler::FileHandler(std::string fileName) : _fileName(fileName) {

    std::ifstream file(fileName);    
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            _fileContent += line + "\n";
        }
        file.close();
    } else {
        std::cout << "File not found" << std::endl;
        exit(1);
    }
}

FileHandler::~FileHandler() {
    return ;
}

void FileHandler::sed(std::string s1, std::string s2) {

    std::string newContent;
    size_t pos = 0;
    while (pos < _fileContent.length()) {
        size_t found = _fileContent.find(s1, pos);
        if (found == std::string::npos) {
            newContent += _fileContent.substr(pos);
            break;
        }
        newContent += _fileContent.substr(pos, found - pos);
        newContent += s2;
        pos = found + s1.length();
    }
    _fileContent = newContent;
}

void FileHandler::writeNewFile() {
    std::ofstream file(_fileName + ".replace");
    if (file.is_open()) {
        file << _fileContent;
        file.close();
    } else {
        std::cout << "No permissions to write file" << std::endl;
    }
}
