

class Addition
{
public:
	Addition() {};

	double performAddition(double x, double y);

private:
	double m_x;
	double m_y;
};

double Addition::performAddition(double x, double y)
{
	return (x + y);
}