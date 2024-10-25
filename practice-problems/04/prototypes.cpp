/* Function *prototypes* might seem unnecessary -- after all, as long as you
 * place the function earlier in your file than the places you use it, it'll
 * compile just fine.
 * TODO: come up with a situation where at least one function prototype is
 * *strictly necessary*.  Write functions which demonstrate your idea and
 * make sure what you wrote actually compiles (and will not compile without
 * any function prototypes).
 * BTW, if you need a reminder about prototypes, read here:
 * https:/w/www-cs.ccny.cuny.edu/~wes/CSC103/lingo.html#function-prototype
 * or here:
 * http://www.charlesli.org/pic10a/lectures/lecture8/index.html
 * */

/* your answer goes here... */
#include <iostream>
using std::cin;
using std::cout;

int add(int a, int b);

int main()
{
 cout << "Enter 2 numbers: \n";
 int a,b;
 cin >> a >> b;
 int sum = add(a,b);
 cout << "Sum:" << sum << "\n";
 return 0;
}
int add(int a,int b){
 int c;
 c = a+b;
 return c;
 }

// vim:foldlevel=2
