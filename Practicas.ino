# Solo-meu-
Probas feitas a partires dos coñecementos adquiridos

// C++ code
//
# define INTERNO 13 //o pin 13 e o led integrado van xuntos cada modificacion que lle faga a un afectaralle o outro
# define ROJO    8  // Defino cada unha das entradas con un nome para asi poder modificar a entrada so con cambiar
# define ANALOG  9  //o seu numero sen necesidade de modificar todo o codigo

int TIEMPO1 = 4000; // doulle un nome a unha unidade de tempo asi podo usalo moitas veces e so con cambialo aqui cambia en todos
int TIEMPO2 = 3000; //comprobar como sucede
int TIEMPO3 = 2000; // int sempre para variables enteiras



void setup()
{
  pinMode(INTERNO, OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(ANALOG, INPUT);
}

void loop()
{
  digitalWrite(INTERNO, HIGH);
  delay(TIEMPO1); // Wait for 1000 millisecond(s)
  digitalWrite(ROJO, HIGH);
  digitalWrite(INTERNO, LOW);
  delay(TIEMPO2); // Wait for 3000 millisecond(s)
  digitalWrite(ROJO, LOW);
  delay(TIEMPO3);// Wait for 2000 millisecond(s)
