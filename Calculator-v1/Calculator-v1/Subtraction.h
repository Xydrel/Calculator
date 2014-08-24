

class Subtraction
{

public:
	Subtraction(void) {};

	double performSubtraction(double x, double y);

private:
	double m_x;
	double m_y;
};

double Subtraction::performSubtraction(double x, double y)
{
	return (x - y);
}