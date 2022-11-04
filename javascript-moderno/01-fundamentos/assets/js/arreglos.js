// const arr = [];
// console.log(arr);

let videoJuegos = [ 'Mario 3', 'Megaman', 'Chrono Trigger' ];
console.log({ videoJuegos });

console.log( videoJuegos[0] );

let arregloCosas = [
    true,
    123,
    'Mariangel',
    1 + 2,
    function () {
        console.log('Entró en la función');
    },
    () => {

    },
    {a: 1},
    ['X', 'Megaman', 'Zero', 'Dr. Light']
];

// console.log({ arregloCosas });
console.log( arregloCosas[7][3] );

// Más detalles

// Longitud de un arreglo
console.log( arregloCosas.length );

// Recorrer un arreglo
videoJuegos.forEach( (elem, indice, arr) => {
    console.log({ elem, indice, arr });
});

// Insertar elemento al final
videoJuegos.push( 'F-Zero' );
console.log( videoJuegos );

// Insertar elemento al inicio
videoJuegos.unshift( 'Fire Emblem' );
console.log( videoJuegos );

// Remover elemento al final
let juegoBorrado = videoJuegos.pop();
console.log( juegoBorrado );
console.log( videoJuegos );

// Remover elemento según posición
let pos = 1;
videoJuegos.splice(pos, 1);
console.log( videoJuegos );

// Saber el índice de un arreglo
let marioIndex = videoJuegos.indexOf('Megaman');
console.log( marioIndex );



