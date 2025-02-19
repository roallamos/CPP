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

#endif // !_COLORS

// Span declaration --------------------------------------------------------

#ifndef _SPAN_HPP
# define _SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <set>

class Span {
private:
	unsigned int		N;
	std::vector<int>	vec;
public:
	Span(void);
	Span(unsigned int n);
	Span(Span const& other);
	~Span(void);

	Span& operator=(Span const& other);

	void	addNumber(int nb);
	void	addMultipleNumber(int min, int max);
	int		shortestSpan();
	int		longestSpan();

	class Full : public std::exception{
		public:
			virtual const char * what() const throw(){
				return ("the class if full");
			}
	};

	class notEnoughSize : public std::exception{
		public:
			virtual const char * what() const throw(){
				return ("the class is empty or has just one member");
			}
	};
};

#endif // !_SPAN_HPP

