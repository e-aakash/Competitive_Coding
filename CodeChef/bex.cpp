#include <iostream>
#include <stack>
#include <tuple>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	stack<tuple<int, int, string> > book_stack;	
	//stack of tuples {min_so_far, exercises_of_this, book_name}.
	int n;
	cin>>n;	//number of books.
	while(n--)
	{
		int x;	
		cin>>x;
		if(x==-1)	//if we want to print book with min exercises from top.
		{
			int count=0;
			while(!book_stack.empty())
			{
				auto top_book = book_stack.top();
				if(get<0>(top_book) == get<1>(top_book))
					break;
				count++;
				book_stack.pop();
			}
			auto top_book = book_stack.top();
			cout << count << ' ' << get<2>(top_book) << '\n';
			book_stack.pop();
		}
		else	//if we want to insert a book.
		{
			string book;
			cin>>book;
			if(x == 0)
				continue;
			if(book_stack.empty())
				book_stack.push({x, x, book});
			else
			{	
				int min_so_far = get<0>(book_stack.top());
				book_stack.push( { min(min_so_far, x), x, book } );
			}
		}
	}
}