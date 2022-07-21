#include <bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long int
#define int ll
#define ld long double
#define pb push_back
#define mp make_pair
#define ft front()
#define bk back()
#define pi 2*acos(0.0)     /// acos(-1) , 3.14159265359
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
#define gap ' '
#define en '\n'
#define endl en
#define sz(x) (int(x.size()))
#define sor(x)  sort(x.begin(), x.end())
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rng(x,y) uniform_int_distribution<int>(x,y)(rng)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define each(a,x) for (auto& a: x)
typedef struct linked_list node;

struct linked_list{
    int number;
    node *next;
};

void create(node *myList){
    cout << "Input a number , (Enter -99999 at end)\n";
    cin >> myList->number;
    if(myList->number == -99999) myList->next = NULL;
    else{
        myList->next = (node*) malloc(sizeof(node));
        create(myList->next);
    }
}
void print(node *myList){
    cout << myList->number;
    if(myList->next == NULL) return;
    cout << myList->next;
}
int countListItem(node *myList){
    if(myList->next == NULL) return 0;
    return (1+countListItem(myList->next));
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    node *head;
    head = (node *) malloc(sizeof(node));
    cout << en << head << en;
    cout << "Number of items = " << countListItem(head);


    return 0;
}