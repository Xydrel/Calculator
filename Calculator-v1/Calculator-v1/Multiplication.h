

class Multiplication
{
public:
	Multiplication(void) {};

	double performMultiplication(double x, double y);

private:
	double m_x;
	double m_y;
};

double Multiplication::performMultiplication(double x, double y)
{
	return (x * y);
}