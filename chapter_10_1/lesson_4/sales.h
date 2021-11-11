#ifndef SALES_H_
#define SALES_H_

namespace sales
{
	static const int QUARTERS = 4;
	class Sales
	{
	private:
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
		double find_min(const double ar[], int arSize);
		double find_max(const double ar[], int arSize);
		double find_average(const double ar[], int arsize);
	public:
		Sales(){};
		~Sales(){};
		Sales(const double ar[], const int arSize);
		void reset_sales();
		void set_sales();
		void show_sales();
	};
}

#endif
