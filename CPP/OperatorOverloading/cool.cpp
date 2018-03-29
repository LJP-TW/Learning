#include <iostream>
#include <string>

using namespace std;

class WTF
{
	public:
		string word;
		void operator- () 
		{
			int i = 1;
			char c = word[0];
			for(; i <= (int)word.size() - 1 ; ++i)
			{
				word[i - 1] = word[i];
			}
			word[i - 1] = c;
		}
};

int main()
{
	WTF wtf;
	wtf.word = "-------yee------";

	for(int i = 0; i < 50; ++i)
	{
		-wtf;
		cout << wtf.word << endl;
	}

	return 0;
}
