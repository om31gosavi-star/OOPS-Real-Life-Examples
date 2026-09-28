#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Base class
class Media {
protected:
    string title;

public:
    Media(string t) {
        title = t;
    }

    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;
    virtual void showDetails() = 0;

    virtual ~Media() {}
};

// Derived class: Audio
class Audio : public Media {
private:
    string artist;

public:
    Audio(string t, string a) : Media(t) {
        artist = a;
    }

    void play() override {
        cout << "Playing Audio: " << title << endl;
    }

    void pause() override {
        cout << "Pausing Audio: " << title << endl;
    }

    void stop() override {
        cout << "Stopping Audio: " << title << endl;
    }

    void showDetails() override {
        cout << "Audio: " << title << " | Artist: " << artist << endl;
    }
};

// Derived class: Video
class Video : public Media {
private:
    string resolution;

public:
    Video(string t, string r) : Media(t) {
        resolution = r;
    }

    void play() override {
        cout << "Playing Video: " << title << endl;
    }

    void pause() override {
        cout << "Pausing Video: " << title << endl;
    }

    void stop() override {
        cout << "Stopping Video: " << title << endl;
    }

    void showDetails() override {
        cout << "Video: " << title
             << " | Resolution: " << resolution << endl;
    }
};

// Derived class: Image
class Image : public Media {
private:
    string format;

public:
    Image(string t, string f) : Media(t) {
        format = f;
    }

    void play() override {
        cout << "Displaying Image: " << title << endl;
    }

    void pause() override {
        cout << "Pausing Image: " << title << endl;
    }

    void stop() override {
        cout << "Stopping Image: " << title << endl;
    }

    void showDetails() override {
        cout << "Image: " << title
             << " | Format: " << format << endl;
    }
};

int main() {

    // Collection of base-class pointers
    vector<Media*> mediaList;

    // Creating objects
    mediaList.push_back(new Audio("Shape of You", "Ed Sheeran"));
    mediaList.push_back(new Video("Avengers Trailer", "1080p"));
    mediaList.push_back(new Image("Nature Photo", "JPG"));

    cout << "----- Media Details -----" << endl;

    // Polymorphic calls
    for (Media* media : mediaList) {
        media->showDetails();
        media->play();
        media->pause();
        media->stop();
        cout << endl;
    }

    // Free memory
    for (Media* media : mediaList) {
        delete media;
    }

    return 0;
}