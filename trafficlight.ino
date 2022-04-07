const pin_t RED = D4;
const pin_t GREEN = D3;
const pin_t BLUE = D2;

void setup()
{
   pinMode(RED, OUTPUT);
   pinMode(GREEN, OUTPUT);
   pinMode(BLUE, OUTPUT);
   Particle.function("trafficlight",ledlight);
}
void loop()
{
}

bool ledlight(String trafficlight) 
{
    bool status = false;
    
    if (trafficlight == "Red") 
    {
        digitalWrite(RED, HIGH);
        digitalWrite(GREEN, LOW);
        digitalWrite(BLUE, LOW);

        status = true;
    }
    else if (trafficlight =="Green") 
    {
        digitalWrite(RED, LOW);
        digitalWrite(GREEN, HIGH);
        digitalWrite(BLUE, LOW);
        
        status = true;
    }
    else if (trafficlight == "Blue") 
    {
        digitalWrite(RED, LOW);
        digitalWrite(GREEN, LOW);
        digitalWrite(BLUE, HIGH);        
        
        status = true;
    }
    return -1;
}