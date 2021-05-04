#include <iostream>
#include <cassert>

using namespace std;
void move(int numDisks, int start, int end){
    assert(numDisks>=1);
    assert(start >= 1 && start <=3);
    assert(end >= 1 && end <= 3);
    if (numDisks == 1){
        cout << "Move a disk from " << start << " to " << end << ". " << endl;
    }
    else{
        int other = 6-start-end;
        move(numDisks-1, start, other);
        move(1, start, end);
        move(numDisks -1, other, end);
    }
}
int main() {

    int n;
    int from;
    int to;
    cout << "How many disks? ";
    cin >>n;
    cout << "From where? ";
    cin >>from;
    cout << "To where? ";
    cin >>to;
    move(n, from, to);
    return 0;
}
