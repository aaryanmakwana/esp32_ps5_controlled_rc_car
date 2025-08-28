struct motor{
  int MOD_1;
  int MOD_2;
  int speed;
};

struct motor motor_init(int MOD_1, int MOD_2){
  struct motor new_motor;
  new_motor.MOD_1 = MOD_1;
  new_motor.MOD_2 = MOD_2;
  new_motor.speed = 0;

  pinMode(MOD1, OUTPUT);
  pinMode(MOD2, OUTPUT);

  return new_motor;
}

void set_motor(struct motor this_motor, int speed){
  if (speed <0){
    digitalWrite(MOD_2, 0);
    analogWrite(MOD_1, -speed);
  }else if(speed != 0){
    digitalWrite(MOD_1,0);
    analogWrite(MOD_2, speed);
  }else{
    digitalWrite(MOD_1,0);
    digitalWrite(MOD_2,0);
  }
}
