#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    bool ok=false;
    cin>>n;
    vector<pair<string, string>>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
        if(v[i]==v[i+1])
            ok=true;
    if(ok)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
