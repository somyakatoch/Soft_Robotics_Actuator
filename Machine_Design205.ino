
int BLPumpPin = 31; // back left pump
int BLValvePin = 30; // back left valve

int FLPumpPin  =35; // front right pump
int FLValvePin = 34; // front right valve

int MDPumpPin  = 39; // body  pump
int MDValvePin = 38; // body  valve

int FRPumpPin = 43; // front right pump
int FRValvePin = 42; // front right valve

int BRPumpPin = 47; // back right pump
int BRValvePin = 46; // back right valve





void setup(){
   
 pinMode(BLPumpPin,OUTPUT);
 pinMode(BLValvePin,OUTPUT);
 pinMode(BRPumpPin,OUTPUT);
 pinMode(BRValvePin,OUTPUT);

 pinMode(MDPumpPin,OUTPUT);
 pinMode(MDValvePin,OUTPUT);
 pinMode(FLPumpPin,OUTPUT);
 pinMode(FLValvePin,OUTPUT);

 pinMode(FRPumpPin,OUTPUT);
 pinMode(FRValvePin,OUTPUT);

 Serial.begin(9600);


// BL_up();
// BR_up();
// delay(500); //300ms -> 20degree, 400 ms -> bend 30 degree , 500ms -> 50degree to ground
// BL_down();
// BR_down();
// digitalWrite(BLValvePin,HIGH);
// digitalWrite(BRValvePin,HIGH);


delay(300);
BR_up();
delay(300);
BR_down();

delay(300);
MD_up();
delay(300);
MD_down();

delay(300);
FL_up();
delay(300);
FL_down();

delay(300);
FR_up();
delay(300);
FR_down();

delay(300);
BL_up();
BR_up();
MD_up();
FR_up();
FL_up();
delay(300);
BL_down();
BR_down();
MD_down();
FR_down();
FL_down();



ReleaseAll();
delay(2000);

//  crowling1(1);
crowling2(10 );


ReleaseAll();
delay(2000);
bodyUpHold();
delay(2500);
walking(10 );

ReleaseAll();
delay(2000);
bodyUpHold();
delay(2500);
hula(7);

ReleaseAll();
delay(2000);

}


void loop(){
}

