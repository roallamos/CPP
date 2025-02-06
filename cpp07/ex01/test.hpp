#ifndef _COLORS
# define _COLORS

# define BLACK   "\033[1;30m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[1;33m"
# define BLUE    "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN    "\033[1;36m"
# define WHITE   "\033[1;37m"
# define NC      "\033[0m"

#endif


#ifndef _TEST_HPP
# define _TEST_HPP

# include <iostream>

class test {
private:
	int i;
public:
	test(void);
	test(test const& other);
	~test(void);

	test& operator=(test const& other);
	int	getI() const;
	void	setI(int x);
};

std::ostream	&operator<<(std::ostream &os, const test &other);

#endif

