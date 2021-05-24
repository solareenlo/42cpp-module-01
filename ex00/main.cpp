/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 04:05:30 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/24 17:37:09 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Pony.hpp"

void putVarAddress(void) {
    int varOnTheStack = 42;
    int *varOnTheHeap = new int(42);

    std::cout << "Local Var    : " << (&varOnTheStack) << std::endl;
    std::cout << "Alloc Var    : " << (varOnTheHeap) << std::endl;
    delete varOnTheHeap;
}

void    ponyOnTheStack(void) {
    Pony    pony("Stack");

    std::cout << "Pony name    : " << pony.getName() << std::endl;
    std::cout << "Pony address : " << pony.getAddress() << std::endl;
    putVarAddress();
}

void    ponyOnTheHeap(void) {
    Pony    *pPony = new Pony("Heap");

    std::cout << "Pony name    : " << pPony->getName() << std::endl;
    std::cout << "Pony address : " << pPony->getAddress() << std::endl;
    putVarAddress();
    delete pPony;
}

int main(void) {
    std::cout << "Stack pony" << std::endl;
    ponyOnTheStack();
    std::cout << std::endl;
    std::cout << "Heap pony" << std::endl;
    ponyOnTheHeap();
    return 0;
}
