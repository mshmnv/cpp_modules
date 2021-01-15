/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:53:12 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/15 15:06:36 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <iomanip>

class Enemy {

protected:
	std::string _type;
	int			_hp;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	~Enemy();

	Enemy&	operator=(Enemy const & src);
	
	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int amount);
};

std::ostream&	operator<<(std::ostream & out, Enemy const & enemy);


#endif