#include <iostream>

using namespace std;

int main()
{
    int mark ;

    cout<< "PLEASE ENTER YOUR MARK ";
    cin>>mark;

    if (mark >100){
        cout<< "MARKS EXCEED NORMAL THRESHOLD ";
    }
    else if (mark < 0){
        cout<< "YOU HAVE ENTERED AN INVALID MARK ";
    }
    else if (mark >= 50){
        cout<< "YOU HAVE PASSED !";
    }else if(mark < 49){
        cout<< "YOU HAVE FAILED !";
    }else if (){
        cout<<pass;
    }
    return 0;
}
