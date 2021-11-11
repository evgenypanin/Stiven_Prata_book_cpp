#include <iostream>
#include <cctype>
#include "Customer.h"
#include "stack.h"

int main()
{
	using std::cout;
	using std::cin;

	Stack st;
	double subtotal = 0.0;
	char ch;
	Customer po;
	cout << "Please enter A to add a customer,\n"
	     << "P to pop the customer, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a': cout << "Enter a customer name to add: ";
				  cin.sync();
				  getline(cin, po.fullname);
				  cout << "Enter a customer payment to add: ";
				  cin >> po.payment;

				  if (st.is_full())
					  cout << "Stack already full\n";
				  else
					  st.push(po);
				  break;
			case 'p':
			case 'P': if (st.is_empty())
					  cout << "Stack already empty\n";
				  else
				  {
					  subtotal += po.payment;
					  st.pop(po);
					  cout << "Customer " << po.fullname << " popped.\n"
					       << "Subtotal is: " << subtotal;
				  }
				  break;
		}
		cout << "\n\nPlease enter A to add a customer,\n"
		     << "P to pop the customer, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}
