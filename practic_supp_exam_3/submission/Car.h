#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int passengers;
    int maxSpeed;          // default 180 km h-¹

public:
    Car(int w, int f, int p);

    /* getters / setters */
    int  get_passengers() const;
    void set_passengers(int p);
    int  get_maxSpeed()  const;
    void set_maxSpeed(int s);

    /* behaviour */
    void travel(int distance, int speed) override;
};
#endif
