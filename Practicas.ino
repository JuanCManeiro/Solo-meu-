# Solo-meu-
Probas feitas a partires dos coñecementos adquiridos

/***
Solo-meu-
Probas feitas a partires dos coñecementos adquiridos
***/

// C++ code
//
# define INTERNO 13 //o pin 13 e o led integrado van xuntos cada modificacion que lle faga a un afectaralle o outro
# define ROJO    8  // Defino cada unha das entradas con un nome para asi poder modificar a entrada so con cambiar
//# define ANALOG  A1  //o seu numero sen necesidade de modificar todo o codigo, NO PODO DEFINIR NON FUNCIONA

int TIEMPO1 = 4000; // doulle un nome a unha unidade de tempo asi podo usalo moitas veces e so con cambialo aqui cambia en todos
int TIEMPO2 = 3000; //comprobar como sucede
int TIEMPO3 = 2000; // int sempre para variables enteiras
int ANALOG  = A1;
int V2;


void setup()
{
  pinMode(INTERNO, OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(ANALOG, INPUT);
  Serial.begin(9600);
}

void loop()
{
    V2 = analogRead(ANALOG);
    Serial.println(V2);
    delay(TIEMPO1);
  digitalWrite(INTERNO, HIGH); //Comprobar que os delays funcionan correctamente antes de seguir avanzando no codigo
    delay(TIEMPO1); // Wait for 1000 millisecond(s)
    Serial.print("PIN 13 4sg ");
  digitalWrite(ROJO, HIGH);
  digitalWrite(INTERNO, LOW);  
    delay(TIEMPO2); // Wait for 3000 millisecond(s)
    Serial.print("3sg ");
  digitalWrite(ROJO, LOW);
    delay(TIEMPO3); // Wait for 2000 millisecond(s)
    Serial.println("2sg");

}    
  
  /**
  Necesidade de continuar investigando, PONTE H, IF-ELSE e PULSADOR
  **/
// DEFINIDO   entrada analoxica e principio de funcionamento, lectura non é correcta, continuar investigando
