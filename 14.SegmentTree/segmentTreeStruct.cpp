#include <bits/stdc++.h>
using namespace std;

struct segmentTree{

    int n;
    vector<int>st;

    void init(int n){
        this->n=n;
        st.resize(4*n,0);
    }

    void build(int start, int ending ,int node ,vector<int>&v){
        if(start==ending){
            st[node]=v[start];
            return;
        }
        int mid=(start+ending)/2;

        build(start,mid, 2*node+1,v);
        build(mid+1,ending,2*node+2,v);

        st[node]=st[node*2+1]+ st[node*2+2];
    }

    int query(int start, int ending, int l, int r, int node){
        //non overlapping case
        if(start>r || ending<l){
            return 0;
        }

        //complete overleap
        if(start >=l && ending<=r){
            return st[node];
        }

        int mid=(start+ending)/2;
        int q1=query(start,mid,l,r,2*node+1);
        int q2=query(mid+1,ending,l,r,2*node+2);

        return q1+q2;
    }

   	void update(int start, int ending, int node, int index, int value) {
		// base case
		if (start == ending) {
			st[node] = value;
			return;
		}

		int mid = (start + ending) / 2;
		if (index <= mid) {
			// left subtree
			update(start, mid, 2 * node + 1, index, value);
		}
		else {
			// right
			update(mid + 1, ending, 2 * node + 2, index, value);
		}

		st[node] = st[node * 2 + 1] + st[node * 2 + 2];

		return;
	}

    void build(vector<int> &v){
        build(0,n-1,0,v);
    }

    int query(int l, int r){
        return query(0,n-1,l,r,0);
    }

    void update(int x, int y) {
		update(0, n - 1, 0, x, y);
	}

};


int main()
{
    vector<int>v={1,2,3,4,5,6,7,8};

    segmentTree tree;
    tree.init(v.size());
	tree.build(v);

	cout << tree.query(0, 4) << '\n';
}