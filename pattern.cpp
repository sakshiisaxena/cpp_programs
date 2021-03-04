#include <iostream>
using namespace std;
class pattern{
	public:
		void row();
};

void pattern::row()
{
	int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j % 2 == 1)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << "\n";
    }
}
int main()
{
    pattern ob;
    ob.row();
}
