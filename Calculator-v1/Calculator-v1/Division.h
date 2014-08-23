

class Division
{
public :
	Division(double x, double y) { m_x = x, m_y = y; }

protected:
	double performDivision(double m_x, double m_y);

private:
	double m_x;
	double m_y;
}; 

double Division::performDivision(double m_x, double m_y)
{
	return (m_x / m_y);
}