/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:48:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/26 04:35:07 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX05_BRAIN_HPP_
#define EX05_BRAIN_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class   Brain {
 public:
    std::string    identify(void) const;
 private:
    std::string toupper_(std::string str) const;
};

#endif  // EX05_BRAIN_HPP_
