#include <iostream>
#include <list>
using namespace std;
//doesn't work CMake bug
//class is a user-defined data type
class YouTubeChannel {
    //private by default
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};


int main() {
    YouTubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    //ytChannel.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};
    cout<< "Name: " << ytChannel.Name << endl;
    cout << "Owner Name: " << ytChannel.OwnerName << endl;
}