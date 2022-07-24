#include <iostream>

int max(int a[], int n)
{
    int maxvalue = a[0];
    for (int i = 0; i < n; i++)
    {
        if (maxvalue < a[i])
        {
            maxvalue = a[i];
        }
    }
    return maxvalue;
}



using namespace std;


int main()
{
    int array[]={1,-2,250,5,10,-1,5,100};
    cout << max(array, 8) << endl;

    return 1;
}