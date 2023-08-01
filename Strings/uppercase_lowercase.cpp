#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string  str = "asdfskjdflpoweiurjsdf";
    string  stra = "ASDFKIUWERJKDFLSIUERWJX";

    // convert to upper case
   for(size_t i=0; i<str.size(); i++) 
   {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
   }
   cout << "To_uppercase => " << str << endl;

   // convert to lower case
   for(size_t i=0; i<stra.size(); i++)
   {
        if(stra[i] >= 'A' && stra[i] <= 'Z')
        {
            stra[i] += 32;
        }
   }
   cout << "To_lowercase => " << stra << endl;

   return 0;
}