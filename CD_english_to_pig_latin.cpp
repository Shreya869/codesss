#include <algorithm>	
#include <iostream>	
#include <string>		
using namespace std;	
bool is_vowel(char c)	
{	
    c = tolower(c);	
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c =='y';	
}	

string to_piglatin(const string& str)	
{	
    auto iter = find_if(str.begin(), str.end(), is_vowel);	
    if (iter == str.begin())
     {	
        return str + "way";	
    }	
    else if (iter != str.end())
     {	
        string ingstray(iter, str.end());	
        ingstray.append(str.begin(), iter);	
        return ingstray + "ay";	
    }	
    return str;	
}	
	
int main(int argc, char* argv[])	
{	
    string str;	
    for (int i = 1; i < argc; i++) {	
        str = argv[i];	
        cout << to_piglatin(str) << " ";	
}	

    cout << endl;	
    return 0;	
}	
