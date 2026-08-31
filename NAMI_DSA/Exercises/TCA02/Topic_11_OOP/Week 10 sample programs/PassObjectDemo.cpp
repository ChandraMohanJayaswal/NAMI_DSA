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


void changelength(Rect r)
{
   r.length = 20;

}


int main()
{
    Rect r1;
    r1.length = 5;
    r1.width = 3;
    changelength(r1);
    cout << "RECT Length " << r1.length << endl;
    cout << "RECT Width " << r1.width << endl;
    system("PAUSE");
    return 0;
} 