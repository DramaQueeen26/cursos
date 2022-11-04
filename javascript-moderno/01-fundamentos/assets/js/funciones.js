// Funcionwa
function saludar(nombre) {
    console.log( 'Hola mundo ' + nombre );
    return 1;
}

// Función anónima
const saludar2 = function(){
    console.log( 'Hola mundo' );
    
}

const saludarFlecha = () => {
    console.log( 'Hola Flecha' );
}

// Retorno simplificado
const suma = ( a, b ) => a + b;

const getAleatorio = () => Math.random();

const retorno = saludar( 'Mariangel' );
saludar2();
saludarFlecha();
console.log( retorno );

console.log( suma(2, 4) );
console.log( getAleatorio() );
