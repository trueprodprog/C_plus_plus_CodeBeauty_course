#include <iostream>
#include <list>
using namespace std;
//works
//class is a user-defined data type
class YouTubeChannel {
    //private by default
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    //constructor
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    //method to show information
    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscribers count: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle<< endl;
        }
    }
};


int main() {

    //with constructor

    YouTubeChannel ytChannel("CodeBeauty","Saldina");
    //without constructor
    //YouTubeChannel ytChannel;
    // ytChannel.Name = "CodeBeauty";
    // ytChannel.OwnerName = "Saldina";
    // ytChannel.SubscribersCount = 1800;
    //ytChannel.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"}; //doesn't work idk
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners Video 1");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS Video 1");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP Video 1");
    // cout<< "Name: " << ytChannel.Name << endl;
    // cout << "Owner Name: " << ytChannel.OwnerName << endl;
    // cout << "Subscribers count: " << ytChannel.SubscribersCount << endl;
    // cout << "Videos: " << endl;
    // for (string videoTitle: ytChannel.PublishedVideoTitles) {
    //     cout << videoTitle << endl;
    // }

    ytChannel.GetInfo();


    YouTubeChannel ytChannel2("AmySings", "Amy");
    // ytChannel2.Name ="AmySings";
    // ytChannel2.OwnerName = "Amy";
    // ytChannel2.SubscribersCount = 2000;
    ytChannel2.PublishedVideoTitles.push_back("Johny B - Cover");
    ytChannel2.PublishedVideoTitles.push_back("Lorelei - Cover");
    ytChannel2.GetInfo();


}