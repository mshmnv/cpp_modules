/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:52:52 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 15:31:36 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** --------- Constructors and Destructor ---------
*/

Enemy::Enemy(int hp, std::string const & type) 
	: _hp(hp), _type(type) {
	
}
Enemy::Enemy(Enemy const & src) {
	*this = src;
}

Enemy::~Enemy() {
	
}

/*
** ------------------ Methods ------------------
*/
	
std::string		Enemy::getType() const {
	return (this->_type);
}
int				Enemy::getHP() const {
	return(this->_hp);
}

void	Enemy::takeDamage(int amount) {
	if (amount < 0)
		return ;
	int damage = amount;
	this->_hp -= amount;
	if (this->_hp <= 0)
	{
		damage = this->_hp + amount;
		this->_hp = 0;
	}
	std::cout << this->_type << " takes " << damage << " points of damage!" << std::endl;
}


/*
** ------------------ Overloads ------------------
*/

Enemy&	Enemy::operator=(Enemy const & src) {
	this->_hp = src._hp;
	this->_type = src._type;
	return (*this);
}

std::ostream&	operator<<(std::ostream & out, Enemy const & src) {
	out << "---------------------------------" << std::endl;
	out << "|" << std::setw(15) << "EnemyType" << "|";
	out << std::setw(15) << "EnemyHP" << "|" << std::endl;
	out << "---------------------------------" << std::endl;
	out << "|" << std::setw(15) << src.getType() << "|";
	out << std::setw(15) << src.getHP() << "|" << std::endl;
	out << "---------------------------------" << std::endl;
	return (out);
}