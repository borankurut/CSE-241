#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "demon.h"

namespace KurutRpg{
    class Cyberdemon: public Demon{
    public:
        Cyberdemon();
        Cyberdemon(int theStrength, int theHitpoint);

        int getDamage() const;
        string getSpecies() const;
    };
}

#endif