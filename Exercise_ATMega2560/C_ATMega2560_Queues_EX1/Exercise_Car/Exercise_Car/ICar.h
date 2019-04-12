/*
 * ICar.h
 *
 * Created: 4/12/2019 9:58:53 AM
 *  Author: angel
 */ 

//Defines the pointer of the car_p
typedef struct Car *car_p;

car_p carCreate(int hp, int seats);
void carStart(car_p self);
void carDestroy(car_p self);

//#endif /* ICAR_H_ */