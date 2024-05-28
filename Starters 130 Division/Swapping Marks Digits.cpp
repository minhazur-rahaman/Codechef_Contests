#include <bits/stdc++.h>
using namespace std;

int reverse(int num) 
{
	  int tens,rem;
	  tens = num/10;
	  rem = num%10;
	  return rem*10+tens;
}

int main() {
	int t_case;
	cin >> t_case;
	while (t_case--)
	{
	    int ali,bob;
	    cin >> ali >> bob;
	    
	    int a_rev = reverse(ali);
	    int b_rev = reverse(bob);
	    
	    int alicWin = (ali > bob) || (a_rev > bob) || (a_rev > b_rev) || (ali> b_rev);
	    
	    if (alicWin) cout << "YES" << '\n';
	    else cout << "NO"<< '\n';
	}

}
