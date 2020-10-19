/*
Finding Max Element and Index of an Array
*/
#include <iostream>

using namespace std ;

typedef int Max_Element ;
typedef int Max_Index ;
typedef int Length ;


int main()
{
    Max_Element ME ;
    Max_Index MI ;
    Length L ;

    int A[] = {2,4,233,700000,4,6,932,57777,6,8} ;

    ME = A[0] ;

    L = sizeof(A) / sizeof(A[0]) ;

    for (auto x:A)
    {
        if(ME > x )
        {
            ME = ME ;
        }else
        {
            ME = x ;
        }
        for(int j = L ; j >= 0 ; j--)
        {
            if(A[j] == ME)
            {
                MI = j ;
            }
        }        
    }
    cout << "Max_Element : " << ME << endl ;
    cout << "Max_Index : " << MI << endl ;


}