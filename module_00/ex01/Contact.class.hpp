/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:10:44 by lbagg             #+#    #+#             */
/*   Updated: 2021/01/05 22:33:17 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

class Contact {

public:
	Contact(void);
	~Contact(void);
	void		set_firstName( std::string value );
	void		set_lastName( std::string value );
	void		set_nickname( std::string value );
	void		set_login( std::string value );
	void		set_postalAddress( std::string value );
	void		set_emailAddress( std::string value );
	void		set_phonenumber( std::string value );
	void		set_birthday( std::string value );
	void		set_favMeal( std::string value );
	void		set_underwearColor( std::string value );
	void		set_darkestSecret( std::string value );
	void		print_contact( int index );
	void		print_value( std::string value );
	void		print_information( void );


private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phonenumber;
	std::string	_birthday;
	std::string	_favMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
};

#endif