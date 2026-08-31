#include <iostream>
using namespace std;

class Rect
{
    // Member variables
    public:
         int length;
	 int width;

		Rect ()
	       {
		 length = 0;
		 width = 0;
	       }
  
};



int main()
{
        Rect r1;
	r1.length = 5;
	r1.width = 3;
	Rect r2;
	r2 = r1;
	r2.width = 4;
        cout << "RECT Length " << r1.length << endl;
	cout << "RECT Width "  << r1.width << endl;
        system("PAUSE");
        return 0;
}