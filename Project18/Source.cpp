# include <iostream>
using namespace std;



int main()
{
void zerroSmaller(int& , int& );
int a = 2, b = 3, c = 4, d = 5;
zerroSmaller(a, b);
zerroSmaller(c, d);
cout << "a= " << a << ";" << "b= " << b << ";" << "c= " << c << ";" <<
"d= " << d << endl;
system("pause");
return 0;
}
void zerroSmaller(int& t, int& k)
{
	if (t > k) k = 0;
	else t = 0;

}