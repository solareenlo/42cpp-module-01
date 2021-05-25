/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 04:04:03 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 04:47:30 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Brain.hpp"

std::string    Brain::identify(void) const {
    std::stringstream stream;
    stream  << this;
    std::string address = stream.str();
    return (this->toupper_(address));
}

std::string Brain::toupper_(std::string str) const {
    std::string res = "";
    for (int i = 0; str[i]; i++)
        res += toupper(str[i]);
    return (res);
}
