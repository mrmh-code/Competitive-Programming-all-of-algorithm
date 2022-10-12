#include <bits/stdc++.h>
using namespace std;

struct fenWick{
    vector<int>vec;
    int n;

    void init(int n){
        this->n=n+1;
        vec.resize(this->n,0);
    }

    void add(int x, int y){
        x++;
        while(x<n){
         vec[x]+=y;
         x+=(x & (-x));
        }
    }

    int sum(int x){
        x++;
        int ans=0;
        while (x)
        {
          ans+=vec[x];
          x-=(x& (-x));
        }

        return ans;
        
    }

    int sum(int l, int r){
        return sum(l)-sum(r-1);
    }
};


int main()
{
    vector<int>vec;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	fenWick tree;
	tree.init(v.size());

	for (int i = 0; i < v.size(); i++) {
		tree.add(i, v[i]);
	}

	cout << tree.sum(3, 5) << '\n';

	tree.add(4, -3);

	cout << tree.sum(3, 5) << '\n';
}