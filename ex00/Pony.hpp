/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 04:05:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/24 17:09:29 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_PONY_HPP_
#define EX00_PONY_HPP_

#include <iostream>
#include <string>

class Pony {
 public:
    explicit    Pony(std::string name);
    ~Pony(void);

    std::string getName(void);
    void        *getAddress(void);

 private:
    std::string name_;
};

#endif  // EX00_PONY_HPP_
