/* Consider the following generic if statement, where A,B,C represent
 * boolean expressions: */

if (A) {
	X();
} else if (B) {
	Y();
} else if (C) {
	Z();
}

/* TODO: see if you can come up with logical conditions on the boolean
 * expressions A,B,C that would ensure the if statement could be rearranged in
 * any order, and still be *functionally equivalent*, meaning that the
 * reordering does not change what the program actually does/computes.  There
 * are 3! = 6 rearrangements (including the original).  If you need a hint,
 * maybe think about Venn diagrams.  And to make sure you understand what I'm
 * asking, here are a few examples of rearrangements: */

if (A) {
	X();
} else if (C) {
	Z();
} else if (B) {
	Y();
}

if (B) {
	Y();
} else if (C) {
	Z();
} else if (A) {
	X();
}

if (C) {
	Z();
} else if (A) {
	X();
} else if (B) {
	Y();
}

/* Lastly, for concreteness, here is a situation where they can NOT be
 * arbitrarily rearranged without changing the program's behavior (assuming
 * X,Y,Z each do something different, of course): */

if (i < 5 || i > 15) {
	X();
} else if (i == 7 || i == 3) {
	Y();
} else if (i > 20) {
	Z();
}


// vim:foldlevel=2
