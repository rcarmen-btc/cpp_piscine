#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {
	
protected:
	std::string type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &a);
	WrongAnimal &operator=(const WrongAnimal &a);
	virtual std::string getType() const;
	void makeSound() const;
	// virtual void makeSound() const;
};

#endif