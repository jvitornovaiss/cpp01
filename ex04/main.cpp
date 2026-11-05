/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovais                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:56:52 by jnovais           #+#    #+#             */
/*   Updated: 2026/11/05 19:56:52 by jnovais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string replaceAll(std::string word, std::string s1, std::string s2)
{
    if (s1.empty())
        return (word);
    size_t pos = 0;
    while ((pos = word.find(s1, pos)) != std::string::npos)
    {
        word.erase(pos, s1.length());
        word.insert(pos, s2);
        pos += s2.length();
    }
    return (word);
}

int main(int argc, char **argv)
{

    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    
    if (argv[2][0] == '\0')
    {
        std::cout << "Error: s1 cannot be empty" << std::endl;
        return (1);
    }

    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: Can not open file" << std::endl;
        return (1);
    }

    std::ostringstream buffer;
    buffer << file.rdbuf();
    std::string content = buffer.str();

    std::string result = replaceAll(content, argv[2], argv[3]);

    std::string nameFileExit = std::string(argv[1]) + ".replace";
    std::ofstream exit(nameFileExit.c_str());
    if (!exit.is_open())
    {
        std::cout << "Error: Can not create output file" << std::endl;
        return (1);
    }
    exit << result;

    return (0);
}