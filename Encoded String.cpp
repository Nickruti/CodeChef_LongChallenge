#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, N, tmp, val;
	string ch;
	char dec[16] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
	cin >> t;
	string S;
	
	while(t--)
	{
	    cin >> N;
	    getline(cin, ch);
	    getline(cin, S);
	    
	    for(int i = 0; i < N; i++)
        {
            if(!(i % 4))
            {
                val = 0;
                tmp = 3;
            }
            
            val += (S[i] - '0') * (pow(2, tmp));
            
            tmp--;
            if(tmp < 0)
            {
                cout << dec[val];
            }
        }
        cout << endl;
	}
	
	return 0;
}
