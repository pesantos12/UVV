//QUESTÃO 1
//Calcular número primo

function numeroPrimo() {
    
    //Número que será verificado
    var numero = parseFloat(prompt("Escreva um número que falarei se é primo ou não"));

    //Se o número for 0 ou 1 pode ser como não pode ser considerado primo, o == da o resultado de True ou False, o || significa "ou"
    if (numero == 1 || numero == 0) {
        //alerta que ocorre se o número for 1 ou 0
        alert('O número ' + numero + ' não é considerado primo (apesar de haver controversas)') 

        //caso o número seja igual a dois terá um aviso diferente (único número primo par, o que quebra a lógica do for)
    }else if(numero == 2){ 
        alert('O número 2 é o único número par e primo!!')

        //Com o número sendo maior que 2, iremos verificar se é primo ou não
    }else if (numero > 2) {

        //O For é um loop, a variável inicia com o valor 2 e aumenta 1 a cada loop, e vai parar quando i for igual ao número
        for (let i = 2; i < numero; i++) {
            
            /*essa operação com % nos dá a sobra da divisão inteira, esse if só ocorrerá quando a sobra for 0, o que é impossível existir um número maior
            do que 1 que divida um número primo (a não ser ele mesmo), portanto, se essa condição for True, o número não é primo*/
            if (numero % i == 0) {
                alert('O número '+ numero + ' não é primo');
                //break para parar o loop
                break
            //quando o loop estiver no ultimo loop, ou seja, quando acabar e ainda não tiver cumprido o if anterior, ele irá informar que o número é primo
            } else if(numero - 1 == i){ 
                alert('O número ' + numero + ' é primo!');
                break
            }
        }

    //caso alguem digite algum número negativo enviar esta mensagem
    }else if(numero < 0){
        alert('Números negativos não podem ser primos!!!')
    //se a pessoa escrever um número todo errado (com símbolos por exemplo)
    }else {
        alert('Isso não é válido!!!!')
    }
}

//1.2

function numeroPrimo1000() {
    var numero1000 = 1000;
    
    //loop que vai existir 1000 vezes
    for (i = 2; i < numero1000; i++) {
      //parametro foi defenido como true para ser usado futuramente
      var parametro = true;

      //esse loop vai retornar se o número em questão não vai ser primo, caso isso aconteça ele é definido como falso
      for (a = 2; a <= Math.sqrt(i); a++) {
        if (i % a === 0) {
          parametro = false;
          break;
        }
      }
      //sendo verdadeiro vai ser retornado no console.log
      if (parametro) {
        console.log(i);
      }
    }
    alert('Olhe no console!!!!')
    
}



//QUESTÃO 2
//VALIDAR SENHA

function validarSenha() {
    //campo da senha
    var senha = prompt('Digite sua senha:')
    //foi atribuido o valor de falso para as 3 variáveis antes de realmente valida-las para que tenham o valor de boolean
    var maiuscula = false
    var minuscula = false
    var numero = false

    //caso a senha seja menor de 8 digitos o código ja interrompe, caso tenha mais ele continua
    if(senha.length < 8) {
        alert('Sua senha precisa de pelo menos 8 caracteres!');
        } else {
    //foi criado um loop que repete o número total de caracteres da senha
    for(i = 0; i < senha.length; i++){
        //variável caractere é igual ao caractere da senha na casa do número do loop que está ocorrendo
        var caractere = senha[i];
        
    //caso qualquer caracter seja maiúsculo (esteja entre A e Z) ele mudara o valor para true
    if(caractere >= 'A' && caractere <= 'Z') {
        maiuscula = true
    //caso qualquer caracter seja minúsculo (esteja entre a e z) ele mudara o valor para true
    } else if(caractere >= 'a' && caractere <= 'z') {
        minuscula = true
    //caso qualquer caracter seja um número (esteja entre 0 e 1) ele mudara o valor para true
    } else if(caractere >= '0' && caractere <= '9') {
        numero = true
    }  }  

    //a senha será falsa e terá um aviso caso qualquer uma das 3 variáveis não tiverem alterado para true
    if (maiuscula == false) {
        alert('Está faltando letra maiúscula!!! (A, B, C, ....)')
    }
    if (minuscula == false) {
        alert('Está faltando letra minúscula!!! (a, b, c, ....)')
    }
    if (numero == false ) {
        alert('Está faltando números!!!')
    }}

    if(maiuscula == true && minuscula == true && numero == true) {
        alert('Sua senha está perfeita!')
    }
}



//QUESTÃO 3
//FUNÇÃO FATORIAL

function calcularFatorial() {
    //primeiro é dito o número a ser verificado
    var numeroFatorial = parseFloat(prompt('Digite um número e vou calcular sua fatorial:'));
    //resultado é onde vai contar a resposta final
    var resultado = 1;

    //loop que vai existir ate que i fique maior que o número escrito, e toda ves que existir ele vai multiplicar o resultado(1) e no final da conta vai ser a fatorial do número escrito
    for(i = 1; i <= numeroFatorial; i++) {
        resultado *= i;
    }
    alert('A fatorial desse número é: ' + resultado)
}

//3.2
    //calculei fatorial por fatorial
function calcularFatorial10() {
    var numero1 = 1;
    var resultado1 = 1
    for(i = 1; i <= numero1; i++) {
        resultado1 *= i;
    };

    var numero2 = 2;
    var resultado2 = 1
    for(i = 1; i <= numero2; i++) {
        resultado2 *= i;
    };

    var numero3 = 3;
    var resultado3 = 1
    for(i = 1; i <= numero3; i++) {
        resultado3 *= i;
    };

    var numero4 = 4;
    var resultado4 = 1
    for(i = 1; i <= numero4; i++) {
        resultado4 *= i;
    };

    var numero5 = 5;
    var resultado5 = 1
    for(i = 1; i <= numero5; i++) {
        resultado5 *= i;
    };

    var numero6 = 6;
    var resultado6 = 1
    for(i = 1; i <= numero6; i++) {
        resultado6 *= i;
    };

    var numero7 = 7;
    var resultado7 = 1
    for(i = 1; i <= numero7; i++) {
        resultado7 *= i;
    };

    var numero8 = 8;
    var resultado8 = 1
    for(i = 1; i <= numero8; i++) {
        resultado8 *= i;
    };

    var numero9 = 9;
    var resultado9 = 1
    for(i = 1; i <= numero9; i++) {
        resultado9 *= i;
    };

    var numero10 = 10;
    var resultado10 = 1
    for(i = 1; i <= numero10; i++) {
        resultado10 *= i;
    };

    alert('A fatorias são 1: '+ resultado1 + ' / 2: '+ resultado2+ ' / 3: '+ resultado3+ ' / 4: '+ resultado4+ ' / 5: '+ resultado5+ ' / 6: '+ resultado6+ ' / 7: '+ resultado7+ ' / 8: '+ resultado8+ ' / 9: '+ resultado9+ ' / 10: '+ resultado10)
}

//QUESTÃO 4
//QUADRADO PERFEITO

function verificarQuadrado() {
    var numeroQuadrado = parseFloat(prompt('Digite um número e vou informar se ele é um quadrado perfeito'));

    //se o número for negativo ja é descartado
    if(numeroQuadrado < 0) {
        alert('números negativos não são quadrados perfeitos')
    } else{
        //caso a raiz do número seja inteira o programa retorna que é perfeito, caso contrario diz que não
        var raiz = Math.sqrt(numeroQuadrado);
        if(Number.isInteger(raiz)){
            alert('Esse número é um quadrado perfeito!!')
        } else {
            alert('Esse número não é um quadrado perfeito')
        }
    }
}
