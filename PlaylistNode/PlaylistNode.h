//
// Created by Ahmed Yasser on 4/25/2020.
//
#include <iostream>
#ifndef PLAYLISTNODE_PLAYLISTNODE_H
#define PLAYLISTNODE_PLAYLISTNODE_H
using namespace std;

class PlaylistNode {
public:
    PlaylistNode();
    PlaylistNode(string uniqueID, string songName, string artistName, int songLength);
    void insertAfter(PlaylistNode *node);
    void SetNext(int val);
    string GetID() const;
    string GetSongName();
    string GetArtistName();
    int GetSongLength();
    PlaylistNode *GetNext();
    void PrintPlaylistNode();

private:
    string _uniqueID;
    string _songName;
    string _artistName;
    int _songLength;
    PlaylistNode* _next;
};


#endif //PLAYLISTNODE_PLAYLISTNODE_H
