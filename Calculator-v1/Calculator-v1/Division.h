

class Division
{
public :
	Division(void) {};

	double performDivision(double x, double y);

private:
	double m_x;
	double m_y;
}; 

double Division::performDivision(double x, double y)
{
	return (x / y);
}