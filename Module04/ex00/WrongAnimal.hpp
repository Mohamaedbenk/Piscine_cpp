#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal( const std::string & type );
    WrongAnimal( const WrongAnimal & obj);
    WrongAnimal & operator = ( const WrongAnimal & obj);
    ~WrongAnimal();

    std::string getType( void ) const;
    void    makeSound() const;
};

#endif