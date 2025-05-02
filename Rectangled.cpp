#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    
int N;
cin>>N;
 int max_area = 0;

 if (N >= 4) {
            for (int width = 1; width <= N / 4; width++) {
                int length = (N / 2) - width;
                max_area = max(max_area, width * length);
            }
        }

        cout << max_area << endl; 

}

}
