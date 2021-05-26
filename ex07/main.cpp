/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:33:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 19:12:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 4 || *argv[2] == '\0' || *argv[3] == '\0') {
        std::cout << "Usage: ./replace <file> <s1> <s2>" << std::endl;
        std::cout << "<s1> and <s2> is not empty." << std::endl;
        return (1);
    }

    const std::string ifile_name(argv[1]);
    std::ifstream   fin(ifile_name);
    if (static_cast<bool>(fin) == false) {
        std::cerr << "error: " << ifile_name;
        std::cerr << " could not be opened." << std::endl;
        return (1);
    }

    const std::string ofile_name(ifile_name + ".replace");
    std::ofstream   fout(ofile_name);
    if (static_cast<bool>(fout) == false) {
        fin.close();
        std::cerr << "error: fata: " << ofile_name;
        std::cerr << " could not be opened." << std::endl;
        return (1);
    }

    const std::string s1(argv[2]), s2(argv[3]);
    std::string file_str, line;
    while (std::getline(fin, line)) {
        file_str.append(line);
        if (fin.eof() == false)
            file_str.append("\n");
    }

    std::string::size_type pos = file_str.find(s1);
    while (pos != std::string::npos) {
        file_str.replace(pos, s1.length(), s2);
        pos = file_str.find(s1, pos + s2.length());
    }

    fout << file_str;

    fin.close();
    fout.close();
    return (0);
}
