#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
  
    
 
    while (i <= n)
    {
        
        int j = 1;

        while (j <= i)
        {
            char res='A'+i-1;
            cout << res<< " ";
           
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
// Input....4
// A 
// B B
// C C C
// D D D D