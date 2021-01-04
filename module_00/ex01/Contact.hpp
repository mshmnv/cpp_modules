#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

public:
	Contact(void);
	~Contact(void);
	// void	setValue(std::string field, std::string value);
	// void	getValue(std::string field, std::string value);

// private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phonenumber;
	std::string	birthday;
	std::string	favMeal;
	std::string	underwearColor;
	std::string	darkestSecret;
};

Contact::Contact() {

}

Contact::~Contact() {

}

// void	Contact::setValue(std::string field, std::string value) {
// 	this->firstName = value;
// }

// void	Contact::getValue(std::string field, std::string value) {

// }

#endif