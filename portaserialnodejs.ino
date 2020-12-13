/*
  Código criado para configuração da base física do arduino Uno -  FOTOS DO PROTÓTIPO NO REPOSITÓRIO:

  1º PushButton de quatro pernas.
  2º Fios para a conexão, pelo menos 5.
  3º Um LED simples de qualquer cor.
  4º Dois resistores de valor =  220R(pelo menos foi o que eu usei e deu certo).   
  5º Uma matriz de contato.
  
CONFIGURAÇÃO FÍSICA - LED :
     
     1º Cabo amarelo uma ponta na ponta não chanfrada do LED -
     2º Cabro amarelo outra ponta na matrix de contato horizontal. 
     3º LED - Ponta chanfrada em outra ponta do resistor 1 220R.
     4º RESISTOR 1 a outra ponta no cabo marrom.
     5º CABO MARROM - a outra ponta do cabo marrom no encaixe 10 do arduino.  

CONFIGURAÇÃO FÍSICA - GND:
     
     1º Cabo preto na mesma linha horizontal do cabo amarelo.
     2º Cabo preto outra ponta no GND do arduino uno.

CONFIGURAÇÃO FÍSICA - BOTÃO ÚNICO:
     
     1º Cabo laranja na perna do botão, esquerda de cima, na mesma linha da matriz de contato vertical. 
     2º Cabo laranja na entrada do 5V do arduino uno.
     3º Cabo vermelho na outra perna direita debaixo do botão.
     4º Cabo vermelho outra ponta na entrada 2 do arduino uno.

CONFIGURAÇÃO FÍSICA - RESISTOR 2 :

     1º Uma ponta do resistor 2 na ponta direita de cima do botao.
     2º Outra ponta do resistor 2 na linha horizontal do cabo preto e cabo amarelo na matriz de contato.      

*/


int Boton = 2;
int PinoLed = 10; 
int OnNow = 0;



void setup() {


 pinMode(PinoLed, OUTPUT);
 pinMode(Boton, INPUT);
 

Serial.begin(9600);
}  



void loop() {

//Demonstrar o estado do botão no físico.  
OnNow = digitalRead(Boton);


//Condicional do pisca pisca do led.
  if(OnNow == HIGH){
    digitalWrite(PinoLed, HIGH);
    }
    else{
      digitalWrite(PinoLed, LOW);
      
      }
//Código para mostrar os dados do botão, on ou off, no monitor serial do arduino, a cada 15 segundos.
      
int estadoMonitorSerial = digitalRead(2);
Serial.print("Estado atual do botão - 0 para não pressionado e 1 para pressionado");
Serial.println(estadoMonitorSerial);
delay(5000);  

  //Ignorar código abaixo
  // put your main code here, to run repeatedly:
//  Serial.println(2);
//delay(2000);

  //Para ver a rolagem do monitor serial, basta apertar a lupa no canto direito. 

}
