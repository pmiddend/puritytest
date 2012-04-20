#ifndef KLASSE
#define KLASSE

class klasse
{
public:
	klasse();

	int const &
	getI() const __attribute__((const));

	void
	increase();
private:
	int i;
};

#endif
