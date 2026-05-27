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

        while (j <= n)
        {
            // alternate char='A'+i-1 in i loop....
            char res='A'+i+j-2;
            cout << res<< " ";
           
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
// Input....4
// A B C D 
// B C D E
// C D E F
// D E F G 