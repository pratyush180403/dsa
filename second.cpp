#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find LCM of n1 and n2
    int LCM(int n1,int n2) {
        //Variable to store lcm
        int lcm;
        
        // Variable to store max of n1 & n2
        int n = max(n1, n2);
        int i = 1;
        
        while(1) {
            // Variable to store multiple
            int mul = n * i;
            
            /* Checking if multiple is common
            common for both n1 and n2 */
            if(mul % n1 == 0 && mul % n2 == 0) {
                lcm = mul;
                break;
            }
            i++;
        }
        
        // Return the stored LCM
        return lcm;
    }
};

int main()
{
    int n1 = 4, n2 = 12;
    
    /* Creating and instance of 
    Solution class */
    Solution sol; 
    
    // Function call to get LCM of n1 and n2
    int ans = sol.LCM(n1, n2);
    cout << "The LCM of" << n1 << " and " << n2 << " is: " << ans;
    
    return 0;
}