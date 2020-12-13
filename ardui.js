/*
OBJETIVO - mostrar no PROMPT/CMD os dados vindos de fora pelo microcontrolador. 

IMPORTANTE -  Algorítmo escrito no sistema operacional windows 10: 

1º SABER QUAL É A SERIAL PORTA UTILIZADA NO ARDUINO(representa a entrada de dados no sistema).
2º COLOCAR TODAS AS CONFIGURAÇÕES E INSTALAÇÕES DO NODEJS, NO CMD, NA PASTA ONDE SERÁ COLOCADO ESSE CÓDIGO EM JS.
3º INSTALAR O NPM SERIALPORT(PACOTES), SE NÃO ELE NÃO RECONHECE A ENTRADA DO ARDUINO QUE ESTÁ SENDO UTILIZADA.  
*/

var serialport = require("serialport");
// Incluindo o pacote do NPM

var ObjetoPorta1 = serialport.ObjetoPorta1;

//Criando e incluindo um "objeto instanciado" na serialport.


var entradaPortaSerial = new ObjetoPorta1("COM3 Arduino Uno" ,{

//Cada sistema operacional tem a porta com um nome diferente, verificar isso sempre . 

 baudrate: 9600,
 parser: serialport.parsers.readline("\n");

});


    //Criando os eventos do sistema	e função de callback para resolver o problema
	
	ObjetoPorta1.on("Open", function(){
       console.log("FUNCIONANDO, ESTÁ VIVO");
       //Vai aparecer quando começar a aparecer os valores do módulo do arduino quando a porta for aberta.


	});

     // Ou método de Dados que chegam pelo serial enviado via conselo para o terminal
	ObjetoPorta1.on("data", function(dados){
     console.log(dados);


	});

	//No final do código é abrir o prompt/cmd e aplicar o node no arquivo ardui.js.
	// vai mostrar no prompt o mesmo que mostra no monitor serial do arquivo do arduino. 