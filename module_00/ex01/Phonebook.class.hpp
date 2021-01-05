/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:56:19 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/05 22:34:25 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

class Phonebook {

public:
	Phonebook( void );
	~Phonebook( void );

	Contact		contact[8];
	int			numContacts;
	void		add( void );
	void		search( void );

};

#endif