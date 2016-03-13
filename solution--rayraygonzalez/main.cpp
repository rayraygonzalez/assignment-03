/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Raymond Gonzalez <rayraygking@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
# include <iostream>
# include <cmath>
# include <string>
using std::cout;
using std::string;
using std::cin;
void quadraticformula(double a,double b,double c)
{
	try {
		if (a == 0)
			throw 0;
		else if ((b*b) < (4 * a*c))
			throw 'b';
	}
		catch (int p)
		{cout << "you cannot devide by zero";
		return;
		}
		catch (char y)
		{
			cout << "your a variable and c variable are too big which results in a imaginary number";
			return;
		}
		double g;
		double x = 0;
		x = (b*-1) + sqrt(((b*b) - (4 * a*c)));
	x = x/(2*a);
	g = (b*-1)- sqrt(((b*b) - (4 * a*c)));
	g = g / (2 * a);
	cout << "Using the quadratic formula you get " << x << " and " << g;
	return ;
};
template <class T>
class Combining
{
public:
	T adder(T first,T second) {
		T result = first + second;
		cout << result;
		return result;
	}
};

int main() {
	//Example of execptions
	double a, b, c;
	cout << "This function calculates the quadratic formula enter a,b,c";
	cin >> a >> b >> c;
	quadraticformula(a,b,c);
	//end of execptions
	//example of template
	int d, e;
	Combining<string> start;
	start.adder("a", "b");

}
