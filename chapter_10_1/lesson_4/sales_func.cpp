#include <iostream>
#include "sales.h"

namespace sales
{
	Sales::Sales(const double ar[], const int arSize)
	{
		for (int i = 0; i < arSize; i++)
		{
			if (m_sales[i] == 0)
			{
				m_sales[i] = find_min(ar, arSize);
				if (i+1 < QUARTERS)
				{
					for (int j = i+1; j < arSize; j++)
						m_sales[j] = 0;
				}
				break;
			}
		}
		m_average = find_average(ar, arSize);
		m_max = find_max(ar, arSize);
		m_min = find_min(ar, arSize);
	}

	void Sales::reset_sales()
	{
		for (int i = 0; i < QUARTERS; i++)
			m_sales[i] = 0;
	}

	void Sales::set_sales()
	{
		for (int i = 0, qty = 0; i < QUARTERS; i++)
		{
			std::cout << "\nEnter the quantity os sales for the "
				  << i+1 << " quarter: ";
			std::cin >> qty;
			double * sales = new double[qty];
			for (int j = 0; i < qty; j++)
			{
				std::cout << "\nEnter the " << j+1 << " amount: ";
				std::cin >> sales[j];
			}
			Sales temp(sales, qty);
			*this = temp;
			delete [] sales;
		}
	}

	void Sales::show_sales()
	{
		std::cout << "\nAverage: " << m_average
			  << "\nMaximum: " << m_max
			  << "\nMinimum: " << m_min << std::endl;
	}

	double Sales::find_min(const double ar[], int arSize)
	{
		double min_value = ar[0];
		for (int i = 1; i < arSize; i++)
		{
			if (ar[i] < min_value)
				min_value = ar[i];
		}
		return min_value;
	}

	double Sales::find_max(const double ar[], int arSize)
	{
		double max_value = ar[0];
		for (int i = 1; i < arSize; i++)
		{
			if (ar[i] > max_value)
				max_value = ar[i];
		}
		return max_value;
	}

	double Sales::find_average(const double ar[], int arSize)
	{
		double sum = 0;
		for (int i = 0; i < arSize; i++)
			sum += ar[i];
		return sum / arSize;
	}
}

