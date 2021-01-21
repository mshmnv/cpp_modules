/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:53:12 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/18 17:18:59 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <iomanip>

class Enemy {

private:
	Enemy();

protected:
	std::string _type;
	int			_hp;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy();

	Enemy&	operator=(Enemy const & src);
	
	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int amount);
};

std::ostream&	operator<<(std::ostream & out, Enemy const & enemy);


#endif