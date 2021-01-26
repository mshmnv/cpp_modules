/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:38:33 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/26 13:02:35 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

private:

public:
	MutantStack();
	MutantStack(MutantStack<T> const & src);
	~MutantStack();

	MutantStack<T>& operator=(MutantStack<T> const & src);

	
};

#include "mutantstack.cpp"

#endif