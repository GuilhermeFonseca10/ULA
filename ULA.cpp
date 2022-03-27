#include <iostream>
#include <cmath>
#include <locale>
#include <bitset>

using namespace std;
 //convertendo Decimal para binário
int conversao(int num1){
    int binario = 0;
    int resto, i=1;
    while(num1 !=0){
        resto = num1 % 2;
        num1 /=2;
        binario +=(resto*i);
        i *=10;
    }
    return binario;
}

int main(){
setlocale(LC_ALL,"portuguese");


  //Declarando variáveis
int Num1, Num2;
int Soma, Subtracao, Multiplicacao, Divisao;
int Resto; 
int LogNot, LogAnd, LogOR, LogXOR;


cout<<"Digite o primeiro numero: "<<endl;
cin>>Num1;
cout<<"Digite o segundo numero: "<<endl;
cin>>Num2;

bitset<3>Num3;
Num3=Num1;

bitset<3>Num4;
Num4=Num2;
cout<<endl;
cout<<"Seu primeiro numero em Binario: "<<Num3<<endl;
cout<<"Seu segundo numero em Binario: "<<Num4<<endl;


//funções Aritméticas
//Soma
bitset<3>soma2;
Soma = Num1 + Num2;
soma2=(Num1+Num2);

//Subtração
bitset<3>sub2;
Subtracao = Num1 - Num2;
sub2=(Num1 - Num2);

//Multiplicação
bitset<3>mult2;
Multiplicacao = Num1 * Num2;
mult2 =(Num1 * Num2);

//Divisão
bitset<3>div2;
Divisao = Num1 / Num2;
div2 = (Num1 / Num2);

//Resto da divisão
bitset<3>res2;
Resto = Num1 % Num2;
res2 = (Num1 % Num2);

//Operações logicas
//And
bitset<3>and2;
LogAnd = Num1 & Num2;
and2 = (Num1 & Num2);
//Or 
bitset<3>or2;
LogOR = Num1 | Num2;
or2 = (Num1 | Num2);
//Xor
bitset<3>xor2;
LogXOR = Num1 ^ Num2;
xor2=(Num1 ^ Num2);
//Not
bitset<3>not2;
LogNot = ~(Num1 & Num2);
not2 = ~(Num1 & Num2);


cout<<endl;
//imprimindo
cout<<"---OPERACOES-ARITMETICAS---"<<endl;
cout<<endl;
//Soma
cout<<"Soma em Decimal: "<<Soma<<endl;
cout<<"Soma em Binario: "<<soma2<<endl;

//Subtração
cout<<"Subtracao em Decimal: "<<Subtracao<<endl;
cout<<"Subtracao em Binario: "<<sub2<<endl;

//Mulplicação
cout<<"Multiplicacao em Decimal: "<<Multiplicacao<<endl;
cout<<"Multiplicacao em Binario: "<<mult2<<endl;

//Divisão
cout<<"Divisao em Decimal: "<<Divisao<<endl;
cout<<"Divisao em Binario: "<<div2<<endl;

//Resto da Divisão
cout<<"Resto da divisao em Decimal: "<<Resto<<endl;
cout<<"Resto da divisao em Binario: "<<res2<<endl;
cout<<endl;

cout<<"---OPERACOES LOGICAS---"<<endl;
//And 
cout<<endl;
cout<<"AND em Decimal: "<<LogAnd<<endl;
cout<<"AND em Binario: "<<and2<<endl;
//Or
cout<<"OR em Decimal: "<<LogOR<<endl;
cout<<"OR em Binario: "<<or2<<endl;
//Xor
cout<<"XOR em Decimal: "<<LogXOR<<endl;
cout<<"XOR em Binario: "<<xor2<<endl;
 //Not
cout<<"NOT em Decimal: "<<LogNot<<endl;
cout<<"NOT em Binario: "<<not2<<endl;


}


