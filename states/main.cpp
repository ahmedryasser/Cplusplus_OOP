#include <iostream>

#include "State.h"

int main() {
    State *ca = new State("California", "CA", blue);
    State *ore = new State("Oregon", "OR", blue);
    State *wa = new State("Washington", "WA", blue);
    State *az = new State("Arizona", "AZ", purple);
    State *nv = new State("Nevada", "NV", blue);
    State *ut = new State("Utah", "UT", red);
    State *id = new State("Idaho", "ID", red);
    State *nm = new State("New Mexico", "NM", blue);
    State *co = new State("Colorado", "CO", purple);
    State *wy = new State("Wyoming", "WY", red);
    State *mt = new State("Montana", "MT", purple);

    ca->addNeighbor(ore);
    ca->addNeighbor(az);
    ca->addNeighbor(nv);

    ore->addNeighbor(ca);
    ore->addNeighbor(wa);
    ore->addNeighbor(nv);
    ore->addNeighbor(id);

    wa->addNeighbor(ore);
    wa->addNeighbor(id);

    nv->addNeighbor(ca);
    nv->addNeighbor(ore);
    nv->addNeighbor(id);
    nv->addNeighbor(ut);
    nv->addNeighbor(az);

    az->addNeighbor(ca);
    az->addNeighbor(nv);
    az->addNeighbor(ut);
    az->addNeighbor(nm);

    ut->addNeighbor(az);
    ut->addNeighbor(nv);
    ut->addNeighbor(id);
    ut->addNeighbor(co);
    ut->addNeighbor(wy);

    id->addNeighbor(wa);
    id->addNeighbor(ore);
    id->addNeighbor(nv);
    id->addNeighbor(ut);
    id->addNeighbor(wy);
    id->addNeighbor(mt);

    nm->addNeighbor(az);
    nm->addNeighbor(co);

    co->addNeighbor(nm);
    co->addNeighbor(ut);
    co->addNeighbor(wy);

    wy->addNeighbor(co);
    wy->addNeighbor(ut);
    wy->addNeighbor(id);
    wy->addNeighbor(mt);

    mt->addNeighbor(wy);
    mt->addNeighbor(id);


    State *state[11] = {ca, ore, wa, nv, id, az, ut, wy, mt, nm, co};
    string abbrev[11] = {"CA","OR","WA","NV","ID","AZ","UT","WY","MT","NM","CO"};
    for (int i = 0; i < 11; i++) {
        cout << state[i]->name() << " is within one state of: " << endl;
        for (int j = 0; j < 11; j++) {
            if (state[i]->abbreviation() != abbrev[j] && state[i]->isNearState(abbrev[j], 1)) {
                cout << abbrev[j] << endl;
            }
        }
        cout << endl;
        cout << state[i]->name() << " is within two states of: " << endl;
        for (int j = 0; j < 11; j++) {
            if (state[i]->abbreviation() != abbrev[j] && state[i]->isNearState(abbrev[j], 2)) {
                cout << abbrev[j] << endl;
            }
        }
        cout << endl << "-------" << endl;
    }

    cout << "States within 1 of UT: " << ut->numStatesNear(1, any) << endl;
    cout << "States within 2 of UT: " << ut->numStatesNear(2, any) << endl;
    cout << "Blue states within 1 of UT: " << ut->numStatesNear(1, blue) << endl;
    cout << "Blue states within 2 of UT: " << ut->numStatesNear(2, blue) << endl;
    cout << "Red states within 1 of UT: " << ut->numStatesNear(1, red) << endl;
    cout << "Red states within 2 of UT: " << ut->numStatesNear(2, red) << endl;
    cout << "Purple states within 1 of UT: " << ut->numStatesNear(1, purple) << endl;
    cout << "Purple states within 2 of UT: " << ut->numStatesNear(2, purple) << endl;
    cout << "States within 1 of WA: " << wa->numStatesNear(1, any) << endl;
    cout << "States within 2 of WA: " << wa->numStatesNear(2, any) << endl;
    cout << "Blue states within 1 of WA: " << wa->numStatesNear(1, blue) << endl;
    cout << "Blue states within 2 of WA: " << wa->numStatesNear(2, blue) << endl;
    cout << "Red states within 1 of WA: " << wa->numStatesNear(1, red) << endl;
    cout << "Red states within 2 of WA: " << wa->numStatesNear(2, red) << endl;
    cout << "Purple states within 1 of WA: " << wa->numStatesNear(1, purple) << endl;
    cout << "Purple states within 2 of WA: " << wa->numStatesNear(2, purple) << endl;

    return 0;
}