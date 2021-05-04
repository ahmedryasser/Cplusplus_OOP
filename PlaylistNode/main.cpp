#include <iostream>
#include "PlaylistNode.h"

string Menu(string title){
    cout<< title << "PLAYLIST MENU" <<endl;
    cout<< "a- Add song" << endl;
    cout<< "d- Remove song" << endl;
    cout<< "c- Change position of song" << endl;
    cout<< "s- Output song by specific artist" << endl;
    cout<< "t- Output total time of playlist (in seconds)" << endl;
    cout<< "o- output full playlist" << endl;
    cout<< "q- Quit" << endl;
    cout<< "Choose an option: " << endl;
}

int main() {
    string title;
    string option;
    int songLength;
    string uniqueID;
    string artistName;
    string songName;
    int totalLength = 0;
    int currentPosition;
    int newPosition;
    int pos;

    PlaylistNode*head = nullptr;
    PlaylistNode*tail = nullptr;
    PlaylistNode*song = nullptr;
    PlaylistNode*current = nullptr;
    PlaylistNode*newSong = nullptr;
    PlaylistNode*prevSong = nullptr;
    PlaylistNode*insPosition = nullptr;

    cout<< "Enter Playlist title: "<<endl;
    cin>>title;
    Menu(title);
    cin>> option;
    while(option != "q"){
        if (option == "a"){
            cout<<"Add song: "<<endl;
            cout<<"Enter song's unique ID: "<<endl;
            cin>>uniqueID;
            cout<<"Enter song's name: "<<endl;
            cin>>songName;
            cout<<"Enter artist's name: "<<endl;
            cin>>artistName;
            cout<<"Enter song's length (seconds): "<<endl;
            cin>>songLength;
            newSong = new PlaylistNode(uniqueID, songName, artistName, songLength );
            if (head == nullptr){
                head = newSong;
                tail = newSong;
            }
            else{
                tail->insertAfter(newSong);
                tail=tail->GetNext();
            }
            Menu(title);
            cin>>option;
        }
        if (option == "d"){
            cout<<"Remove song: "<<endl;
            cout<<"Enter song's unique ID: "<<endl;
            cin>>uniqueID;
            cout << songName<<" is removed";

            Menu(title);
            cin>>option;
        }
        if (option == "c"){
            cout<< "Change position: "<<endl;
            cout<<"Enter song's current position: "<<endl;
            cin>>currentPosition;
            cout<<"Enter song's new position";
            cin>>newPosition;
            PlaylistNode* temp4 = head;
            while(temp4){

            }

        }
        if (option == "s"){
            cout<< "OUTPUT SONGS BY SPECIFIC ARTIST: "<<endl;
            cout<<"Artist name: "<<endl;
            cin>>artistName;
            PlaylistNode* temp3 = head;
            while(temp3){
                if (temp3->GetArtistName() == artistName){
                    cout<<temp3;
                }
                temp3 = temp3->GetNext();
            }
        }
        if (option == "t"){
            cout<< "Total time of: "<<endl;
            PlaylistNode* temp = head;
            while(temp){
                totalLength += temp->GetSongLength();
                temp = temp->GetNext();
            }
        }
        if (option == "o"){
            cout<< "Full playlist: "<<endl;
            PlaylistNode* temp1 = head;
            while(temp1){
                temp1->PrintPlaylistNode();
                temp1 = temp1->GetNext();
            }

        }
    }
    cout<<" You have quit the menu"<< endl;
    return 0;
}
