

class Multiplication
{
public:
	Multiplication(double x, double y) { m_x = x, m_y = y; }

protected:
	double performMultiplication(double m_x, double m_y);

private:
	double m_x;
	double m_y;
};

double Multiplication::performMultiplication(double m_x, double m_y)
{
	return (m_x * m_y);
}