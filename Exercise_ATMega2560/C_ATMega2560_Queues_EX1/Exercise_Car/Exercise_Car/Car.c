/*
 * Car.c
 *
 * Created: 4/12/2019 10:00:41 AM
 *  Author: angel
 */ 

#include "Car.h"
struct Car {
	int hp;
	int seats;
	bool started;
	};
	
	
	// For creating a new car
	car_p carCreate(int hp, int seats) {
	
	// Allocate memory using malloc.
	car_p self = malloc(sizeof(struct Car));
	self ->hp = hp;
	self ->seats = seats
	self ->started = false;
	return self;
		
	}
	
	// Method for starting the car.
	void carStart(car_p self) {
		self ->started = true;
	}
	// Release the memory on carDestroy.
	void carDestroy(car_p self) {
		free(self);
	}
	
	
	car_p myCar = carCreate(190, 5);
	car_p myCar = carCreate(65, 4);
	carStart(myCar);