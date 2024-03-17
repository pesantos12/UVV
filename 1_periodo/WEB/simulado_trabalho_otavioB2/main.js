//QUESTÃO 1
//VERIFICAR SE UM NÚMERO É PRIMO

//Function executada ao apertar o botão
function verificarPrimo() {

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


//QUESTÃO 2
//INVERTER UMA STRING

function inverterString() {
    //primeiro qual vai ser a string
    var string = prompt('Insira uma palavra, que eu vou invertela!')
    //criaçõa da variável que vai representar a string invertida
    var stringInvertida = ''

    /*loop onde o valor de i é o número total de caracteres da string digitada (string.length) -1 onde esse -1
    é para poder mencionar na ordem certa da string, pois ao utilizar os [] a ordem começa apartir do 0 e não do 1
    (por isso o -1), o loop irá encerrar quando i for menor que 0, ou seja, quando não sobrar nenhuma casa, e a cada
    loop irá diminuir 1, pegando do final para o inicio da string*/ 
    for (i = string.length - 1; i >= 0 ; i-- ) {
        //a stringinvertida vai ser igual a ela mesma mais a casa selecionada por i (+=), sendo  adicionado todas as casas até não existirem mais
        stringInvertida += string[i];
    }
    //informar o resultado:
    alert(stringInvertida)
}


//QUESTÃO 3
//ENCONTRAR O MAIOR ELEMENTO EM UM VETOR

function maiorVetor() {
    //criação do vetor, por isso o []
    var vetor = []
    
    //loop para perguntar quais serão os elementos do vetor, o loop vai repetir 5 vezes
    for (i = 0 ; i < 5 ; i++) {
        var elementos = parseFloat(prompt('Insira o '+ (i+1)+ '/5 elemento:'));
        //esse .push() vai levar o elemento escrito para o arrey vetor = []
        vetor.push(elementos);
    }

    /*... significa que os elementos do vetor vão se tornar argumentos, ou seja, sendo todos separados (é muito usado em conjunto com o Max e Min)
    Math.max vai informar qual é o maior elemento dentre todos os descritos*/
    var maiorValor = Math.max(...vetor)
    
    alert('O maior dos valores escritos é: '+ maiorValor)
}

//QUESTÃO 4
//MAIOR, MENOR E MÉDIA

function vetores() {
    var vetores = []

    for(i = 0; i < 5 ; i++){
        var elemento = parseFloat(prompt('Insira o ' + (i + 1) + ' elemento:'));
        vetores.push(elemento);
    }

    var maiorValor = Math.max(...vetores);
    //Math.min retorna o menor dos argumentos, ... transforma todos os vetores do array em argumentos
    var menorValor = Math.min(...vetores);
    //para calcular a média com vetores dentro de um array é mais complicado, um método bem usado é com o .reduce
    //vetores.length vai informar quantos elementos tem dentro do array
    var media = vetores.reduce(function(total, valor){return total + valor}, 0) / vetores.length

    alert('O maior dos valores escritos é '+ maiorValor + ', o menor valor é '+ menorValor + ' e a média é '+media)
}


//QUESTÃO 5
//Contar a frequência dos elementos em uma matriz

function elementosMatriz() {
    //criação da matriz chamada frequencia
    var frequencia = {};
    var vetores = []

    //loop que vai repetir 7 vezes e pegar todos os elementos escritos e joga-los para o arrey vetores
    for(i = 0; i < 7; i++) {
        var elementos = parseFloat(prompt('Insira o '+ (i+1)+ '/7 elemento'));
        vetores.push(elementos);
    }

    //esse loop ocorre o número de elementos fornecidos
    for (i = 0; i < vetores.length; i++) {
        //a variável elemento vai ser igual ao elemento indicado na ordem do vetor i
        var elemento = vetores[i];
        //caso o número exista dentro da matriz frequencia, é adicionado +1 ao elemento na matriz
        if(frequencia[elemento]){
            frequencia[elemento]++;
            //caso o número não exista, sua contagem começa a ser =1
        } else {
            frequencia[elemento] = 1;
        }
        
    }
    //depois de pesquisar muito, foi a unica forma de demonstrar corretamento a mesma coisa que aparece em console.log(frequencia)
    alert('A frequência dos elementos descrita é: '+ JSON.stringify(frequencia));

}

//QUESTÃO 6
//Validar uma senha

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
        alert('Está faltando letra maiúscula!!!')
    }
    if (minuscula == false) {
        alert('Está faltando letra minúscula!!!')
    }
    if (numero == false ) {
        alert('Está faltando números!!!')
    }}
}


//QUESTÃO 7
//Remover elementos duplicados da matriz

function removerDuplicados() {
    var vetores7 = [];

    for (i=0;i<7;i++) {
        var elementos7 = parseFloat(prompt('Digite um número ('+ (i+1)+'/7):'));
        vetores7.push(elementos7);
    }

    var vetores72 = [];

    for (i = 0; i < vetores7.length; i++) {
        var elemento7 = vetores7[i];
        
        if(vetores72.indexOf(elemento7) === -1) {
            vetores72.push(elemento7)
        }
    }
    
    alert('Retirando todos os números iguais, nós temos: '+vetores72)
}

//QUESTÃO 8

//QUESTÃO 9
//Calcular fatorial

function calcularFatorial() {
    var numero9 = parseFloat(prompt('Digite um número e vou calcular sua fatorial:'));
    var resultado = 1;

    for(i = 1; i <= numero9; i++) {
        resultado *= i;
    }console.log(resultado);
}

//QUESTÃO 10

//QUESTÃO 11
//Converter C para F

function converterTemp() {
    var temp = parseFloat(prompt('Digita o valor da temperatura em °C: '));

    var fahrenheit = (temp * 1.8) + 32;
    alert('O valor '+ temp + ' em fahrenheit é igual a: ' + fahrenheit);
}

//QUESTÃO 12
//Verificar se um número é quadrado perfeito

function verificarQuadrado() {
    var numero12 = parseFloat(prompt('Digite um número e vou informar se ele é um quadrado perfeito'));

    if(numero12 < 0) {
        alert('números negativos não são quadrados perfeitos')
    } else{
        var raiz = Math.sqrt(numero12);
        if(Number.isInteger(raiz)){
            alert('Esse número é um quadrado perfeito!!')
        } else {
            alert('Esse número não é um quadrado perfeito')
        }
    }
}

//QUESTÃO 13

//QUESTÃO 14

//QUESTÃO 15
//Geração de cores aleatórias

function coresAleatorias() {
    const hex = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "A", "B", "C", "D", "E", "F"];
    var hexCor = "#";
    
    for (i = 0; i < 6 ; i++) {
        hexCor += hex[Math.floor(Math.random() * hex.length)]
    }
    document.getElementById('questao15').style.backgroundColor = hexCor;
}