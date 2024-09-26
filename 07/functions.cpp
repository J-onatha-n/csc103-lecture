#include <iostream>
using std::cin;
using std::cout;

/* example function: compute x |--> x^2 + 1 */
double f(double x)
{
	return x*x + 1;
}
/* question: when we give inputs to a function, do they
 * get copies, or the real thing (the same piece of memory)? */
void g(int y)
{
	y = y + 3;
	cout << "from body of g(...):\n";
	cout << "y == " << y << "\n";
}
/* NOTE: by default, parameters are "by value", meaning the
 * function works with copies of whatever you put into it.
 * You can change this!  Just use the & between the type and
 * the parameter: */
void h(int& w)
{
	w = w + 3;
	cout << "from body of h(...):\n";
	cout << "w == " << w << "\n";
}

int main()
{
	/* now let's see how to use our new function: you
	 * just say its name... */
	cout << f(3) << "\n";
	cout << f(f(3)) << "\n";
	int y = 2;
	g(y);
	cout << "from main(...):\n";
	cout << "y == " << y << "\n";
	int z = 2;
	g(z); /* NOTE: the relationship between z and function g's
			 parameter y is that y is a COPY OF z's VALUE. */
	cout << "from main(...):\n";
	cout << "z == " << z << "\n";
	h(z);
	cout << "from main(...):\n";
	cout << "z == " << z << "\n";
	/* NOTE: the following is NOT OK: */
	// h(7);
	/* however, this is fine: */
	int seven = 7;
	h(seven);
	/* the idea is that whenever you apply a function using "&"
	 * with the parameter, you need to apply it to a variable
	 * or expression that could appear on the left hand side
	 * of an assignment statement.  Hopefully "7 = x;" seems
	 * wrong to you... */
}

// vim:foldlevel=2
