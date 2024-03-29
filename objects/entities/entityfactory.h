#ifndef ENTITYFACTORY_H
#define ENTITYFACTORY_H

#include <memory>
#include "entity.h"
#include "spriteflyweightfactory.h"

// Each entity simply moves horizontally along the background
// As they have slightly different behaviours, they extend a parentsubclass
// And instantiation of each of them occur through the factory method
class EntityFactory {
public:
    EntityFactory();
    virtual ~EntityFactory();

    void setVelocity(int velocity);
    int getVelocity();

    virtual std::shared_ptr<Entity> getEntity(std::string name);

private:
    int velocity;
    SpriteFlyweightFactory spriteFactory;

};

#endif // ENTITYFACTORY_H
