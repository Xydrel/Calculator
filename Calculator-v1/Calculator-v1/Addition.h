

class Addition
{
public:
	Addition(double x, double y) { m_x = x, m_y = y; }

protected:
	double performAddition(double m_x, double m_y);

private:
	double m_x;
	double m_y;
};

double Addition::performAddition(double m_x, double m_y)
{
	return (m_x + m_y);
}