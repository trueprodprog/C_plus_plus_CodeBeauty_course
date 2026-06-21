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
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName; //child class  can see it
    int ContentQuality;
public:
    //constructor
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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

    void CheckAnalytics() {
        if (ContentQuality < 5)
            cout << Name << " has bad quality content " << endl;
        else
            cout << Name << " has great quality content " << endl;
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

// inheritance
class CookingYouTubeChannel:public YouTubeChannel {
public:
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

    }

    void Practice() { //polymorphism - different implementations but same method name
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }

};


// inheritance
class SingersYouTubeChannel:public YouTubeChannel {
public:
    SingersYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

    }

    void Practice() {
        cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
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

    //inheritance
    CookingYouTubeChannel ytCookChannel("Amy's Kitchen", "Amy");
    CookingYouTubeChannel ytCookChannel2("John's kitchen", "John");
    ytCookChannel.PublishVideo("Apple pie");
    ytCookChannel.PublishVideo("Chocolate cake");
    ytCookChannel.Subscribe();
    ytCookChannel.Subscribe();
    ytCookChannel.GetInfo();
    ytCookChannel.Practice();
    ytCookChannel2.Practice();

    //ytChannel2.Prac //not available for parent class

    SingersYouTubeChannel singersYtChannel ("JohnSings", "John");
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    ytCookChannel.Practice();

    YouTubeChannel* yt1 = &ytCookChannel;
    YouTubeChannel* yt2 = &singersYtChannel;

    yt1 -> CheckAnalytics(); //-> for pointers
    yt2 -> CheckAnalytics();
    singersYtChannel.CheckAnalytics();





}