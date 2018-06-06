#include<iostream>
#include<string>
#include<vector>

using namespace std;

void allk(string s, int k, int j, vector<string> &v)
{
    if(k==0)
    { v.push_back(s); return;}
    char c;
    for(int i=j>0?j:0; i<s.size(); i++)
    {
    if(i==j)
    continue;
        c = s[i];
        s[i]='?';
        allk(s, k-1, i, v);
        s[i]=c;
    }
}

void all(string s, vector<string> &v)
{
    for(int i=1; i<s.size()+1; i++)
    {
        allk(s, i, -1, v);
        //cout<<endl;
    }
}

void search_and_replace( std::string& value, std::string const& search,
                    std::string const& replace )
{
    std::string::size_type next;

    for ( next = value.rfind( search );      // Try and find the first match
          next != std::string::npos;        // next is npos if nothing was found
          next = value.rfind( search, next ) // search for the next match starting after
                                            // the last match that was found.
        ) {
            // Inside the loop. So we found a match.
            if ( next == 0 || value[next - 1] != '\r' ) {
                value.replace( next, search.length(), replace );  // Do the replacement.
            }
            // Move to just after the replace. This is the point were we start
            // the next search from.
            next += replace.length();
    }
}

void rep(string &s, vector<string> &v)
{
    string a = "CHEF";
    for(int i=0; i<v.size(); i++)
    {
        search_and_replace(s, v[i], a);
    }
    a="?";
    string b="A";
    search_and_replace(s,a,b);
}

int main()
{
    int t;
    cin>>t;
    vector<string> v;
    all("CHEF", v);
    while(t--)
    {
	string s;
    cin>>s;
	rep(s,v);
	cout<<s<<endl;
    }
}
