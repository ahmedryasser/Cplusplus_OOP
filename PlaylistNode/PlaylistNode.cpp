//
// Created by Ahmed Yasser on 4/25/2020.
//

#include "PlaylistNode.h"
PlaylistNode::PlaylistNode(){
    string _uniqueID = "none";
    string _songName = "none";
    string _artistName = "none";
    int _songLength = 0;
    PlaylistNode* _next = nullptr;
}
PlaylistNode::PlaylistNode(string uniqueID, string songName, string artistName, int songLength){
    _uniqueID = uniqueID;
    _songName = songName;
    _artistName = artistName;
    _songLength = songLength;
}
void PlaylistNode::insertAfter(PlaylistNode *node){
    if (node->_next) {
        PlaylistNode *p = node->_next;
        node->_next= this;
        this->_next = p;
    }
    else{
        node->_next = this;
        this->_next = nullptr;
    }
}
void PlaylistNode::SetNext(int val){

}
string PlaylistNode::GetID() const{
    return _uniqueID;
}
string PlaylistNode::GetSongName(){
    return _songName;
}
string PlaylistNode::GetArtistName(){
    return _artistName;
}
int PlaylistNode::GetSongLength(){
    return _songLength;
}
PlaylistNode* PlaylistNode::GetNext(){
    return _next;
}
void PlaylistNode::PrintPlaylistNode(){
    cout<<"Unique ID: " << _uniqueID <<endl;
    cout<<"Song Name: " << _songName <<endl;
    cout<<"Artist Name: " << _artistName <<endl;
    cout<<"Song Length: " << _songLength <<endl;
}