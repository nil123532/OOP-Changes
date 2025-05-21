#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
    int   weight;
    int   fuelCapacity;
    float fuelPercentage;
    int   numberOfTrips;
    bool  isOperational;

public:
    /*‒‒‒ constructors ‒‒‒*/
    Vehicle();                       // 1 000 kg, 50 L, 100 % fuel
    Vehicle(int w, int f);           // custom weight / fuel-cap
    virtual ~Vehicle() = default;

    /*‒‒‒ getters ‒‒‒*/
    int   get_weight()         const;
    int   get_fuelCapacity()   const;
    float get_fuelPercentage() const;
    int   get_numberOfTrips()  const;
    bool  get_isOperational()  const;

    /*‒‒‒ setters ‒‒‒*/
    void set_weight(int w);
    void set_fuelCapacity(int f);
    void set_fuelPercentage(float pct);   // clamped 0–100
    void set_numberOfTrips(int n);
    void set_isOperational(bool state);

    /*‒‒‒ behaviour ‒‒‒*/
    void      refuel();                      // back to 100 %
    virtual   void travel(int distance,
                          int speed);        // km / km h-¹
};
#endif
