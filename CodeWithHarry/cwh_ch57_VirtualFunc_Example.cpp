#include <iostream>
#include <string>
using namespace std;

// Cwh class...
class Cwh
{
protected:
    string video_title;
    float rating;

public:
    // Cwh constructor...
    Cwh(string s, float r)
    {
        video_title = s;
        rating = r;
    }

    virtual void display() // Runtime polymorphism...
    {
    }
};

// CwhVideo class...

class CwhVideo : public Cwh
{
    float video_Length;

public:
    CwhVideo(string s, float r, float vl) : Cwh(s, r)
    {
        video_Length = vl;
    }

    void display()
    {
        cout << "This is an amazing " << video_title << " Video" << endl;
        cout << "This video Rating: " << rating << " Out of 5 Star" << endl;
        cout << "Length of this video is: " << video_Length << " Minutes" << endl;
    }
};

// CwhText class...

class CwhText : public Cwh
{
    int words;

public:
    CwhText(string s, float r, int wc) : Cwh(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "This is an amazing " << video_title << " Tutorial" << endl;
        cout << "Rating of this Text Tutorial: " << rating << " Out of 5 Star" << endl;
        cout << "Number of words in this Text tutorial is: " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code with harry video...
    title = "Java Script tutorial";
    vlen = 45.56;
    rating = 4.89;
    CwhVideo jSVideo(title, rating, vlen);
    // jSVideo.display();

    // for Code with harry Text...
    title = "Java Script Text";
    rating = 3.29;
    words = 280;
    CwhText jSText(title, rating, words);
    // jSText.display();

    Cwh* tuts[2];
    tuts[0] = &jSVideo;
    tuts[1] = &jSText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}