#include <iostream>
#include <list>
using namespace std;
//works
//class is a user-defined data type
class YouTubeChannel {
    //private by default
    //make private for encapsulation

private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
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
    void Subscribe() {
        SubscribersCount++;
    }
    void Unsubscribe() {
        if (SubscribersCount > 0) {
            SubscribersCount--;
        }
    }

    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
    // --- GETTERS ---
    string getName() {
        return Name;
    }

    string getOwnerName() {
        return OwnerName;
    }

    // --- SETTERS ---
    void setName(string newName) {
        Name = newName;
    }

    void setOwnerName(string newOwnerName) {
        OwnerName = newOwnerName;
    }
};


int main() {

    //with constructor

    YouTubeChannel ytChannel("CodeBeauty","Saldina");
    ytChannel.PublishVideo("C++ for beginners Video 1");
    ytChannel.PublishVideo("HTML & CSS Video 1");
    ytChannel.PublishVideo("C++ OOP Video 1");


    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    YouTubeChannel ytChannel2("AmySings", "Amy");
    // ytChannel2.PublishedVideoTitles.push_back("Johny B - Cover");
    // ytChannel2.PublishedVideoTitles.push_back("Lorelei - Cover");
    // ytChannel2.GetInfo();


}