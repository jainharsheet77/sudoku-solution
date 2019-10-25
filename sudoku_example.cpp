#include<iostream>
using namespace std;


#define rep(i,n,m) for(int i=n;i<m;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(c) c.begin(), c.end()
#define desc_sort(v) sort(v.rbegin(),v.rend())
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define M 1000000007 
#define pushll(head,d) push_into_linkedlist(&head,d)
#define popll(head) dp_delete_first(&head)
#define eol cout<<"\n"
#define N 1000000


//vvovooovovvovoovoovvvvovovvvov

typedef set<int> si;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector < vector<int> >  vii; 


int main()
{   
    ios
    int T=1;
    //cin>>T;
    while(T--)
    {
        int mat[9][9]={ {1,5,6,3,0,4,2,0,0},{9,0,0,1,8,0,0,7,0},{8,0,0,0,6,0,1,4,5},{0,8,3,0,9,6,5,0,7},{0,0,4,0,0,0,0,0,0},{0,1,9,7,0,3,8,0,4},{4,0,0,5,0,1,7,6,2},{7,0,0,0,0,0,0,0,0},{3,0,0,0,0,7,0,0,9}};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }       
    }
}