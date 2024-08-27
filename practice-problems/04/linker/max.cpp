/* NOTE: see main.cpp for instructions */
int max(int a, int b, int c)
{
	if (a >= b && a >= c) return a;
	if (b >= a && b >= c) return b;
	return c;
}

// vim:foldlevel=2
