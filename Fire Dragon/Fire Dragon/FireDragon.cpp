/*
Scientists have discovered a species of fire-breathing dragons. DNA analysis of the dragon reveals that it is a reptile evolved from a common ancestor of crocodile, hundreds of millions of years ago. Even though they're related, the different reptile species cannot cross-breed.
Researchers would like to develop a lifecycle model of this rare species, in order to better study them. Complete the implementation below so that:
•	The FireDragon species implements the Reptile class.
•	When a Reptile Egg hatches, a new reptile will be created of the same species that laid the egg.
•	An std::logic_error is thrown if a ReptileEgg tries to hatch more than once.
*/
#include <stdexcept>
#include <functional>
class ReptileEgg;
class Reptile
{
public:
    virtual ~Reptile() {};
    virtual ReptileEgg* lay() = 0;
};
class ReptileEgg
{
public:
    ReptileEgg(std::function<Reptile* ()> createReptile)
    {
        throw std::logic_error("Waiting to be implemented");

    }
    Reptile* hatch()
    {
        bool hatched = false;
        if (hatch == true)
        {
            throw std::logic_error("The egg have hatched");
            return;
        }
        Reptile* childReptile = new Reptile;
        hatched = true;
        return childReptile;
    }
};
class FireDragon : public Reptile
{
public:
    FireDragon()
    {
    }
    ReptileEgg* lay()
    {
        ReptileEgg* eggDragon = new ReptileEgg;
        return eggDragon;
    }
};
#ifndef RunTests
int main()
{
    Reptile* fireDragon = new FireDragon();

    ReptileEgg* egg = fireDragon->lay();
    Reptile* childDragon = egg->hatch();
}
#endif
