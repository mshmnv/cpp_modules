#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Phonebook {

public:
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

	Phonebook(void);
	~Phonebook(void);

	void		add(void);
	void		search(void);
	void		exit(void);


private:

};

/*
** constructor
*/
Phonebook::Phonebook(void) {

	std::cout << "Constructor called" << std::endl;

	this->firstName = "no name";
	std::cout << "this->name: " << this->firstName << std::endl;

	this->add();
	return ;
}

/*
** destructor
*/
Phonebook::~Phonebook(void) {

	std::cout << "Destructor called" << std::endl;
	return ;	
}

/*
** methods
*/
void		Phonebook::add(void)
{
	std::cout << "Add function called" << std::endl;
}

#endif