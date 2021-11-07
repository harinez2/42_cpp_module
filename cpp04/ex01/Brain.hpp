#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
protected:
	std::string		ideas[100];
public:
	Brain(void);
	Brain(const Brain& obj);
	Brain(const Brain* obj);
	Brain&			operator=(const Brain& obj);
	virtual ~Brain(void);

};

#endif
