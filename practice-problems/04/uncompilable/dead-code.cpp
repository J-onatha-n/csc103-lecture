/* "Dead code" is code that will never be executed (the flow of control will
 * never reach those statements).  For example: */

if (true == false) {
	cout << "I'm dead\n";
}

/* Now consider a general if / else if... statement like this: */

if (A) {
	X();
} else if (B) {
	Y();
} else if (C) {
	Z();
} else {
	W();
}

/* TODO: perhaps thinking in terms of Venn diagrams corresponding to the
 * conditions A,B,C, try to describe as precisely as you can when:
 *   - X(); will be dead code
 *   - Y(); will be dead code
 *   - Z(); will be dead code
 *   - W(); will be dead code
 * See if you can generalize the result to an arbitrary number of conditions.
 * */


// vim:foldlevel=2
