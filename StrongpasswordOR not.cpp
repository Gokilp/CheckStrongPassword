#include<iostream>
#include<string>
using namespace std;
bool isStrongpassword(string pass);
int main()
{
    string password;
    cout<<"Enter Password";
    getline(cin,password);
    if(isStrongPassword(pass))
    {
        cout<<"Strong password";
    }
    else
    {
        cout<<"Not a strong password";
    }

}
bool isStrongpassword(string pass)
{
    bool upper=false,specialChar=false,Number=false;

  for(auto c:pass)
  {
      if(isupper(c))
        upper=true;
      if(ispunct(c))
        specialChar=true;
      if(isdigit(c))
        Number=truel;
  }
  if(upper&&specialChar&&Number&&pass.size()>=8)
        return true;

    else
        return false;
}
}
