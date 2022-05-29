#include <iostream>;
using namespace std;

int Main(){
    int ans;
cout<<"who are you\n";
cin>>ans;
switch(ans){
    case(1):
    admin();
    break;

    case(2):
    voter();
    break;

    defaul:
    cout<<"choose correctly"<<endl;
}

return 0;
}