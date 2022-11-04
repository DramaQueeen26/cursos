let personaje = {
    nombre: 'Tony Stark',
    codeName: 'Ironman',
    vivo: false,
    edad: 40,
    coords: {
        lat: 34.034,
        lng: -118.70
    },
    trajes: ['Mark I', 'Mark V', 'Hulkbuster']

};

console.log( personaje );
console.log( 'Nombre:', personaje.nombre );
console.log( 'Nombre:', personaje['nombre'] );
console.log( 'Edad:', personaje.edad );
console.log( 'Vivo:', personaje.vivo );
console.log( 'Traje:', personaje.trajes[2] );

// Más detalles

// Agregar propiedad
personaje.casado = true;

// Eliminar propiedad
delete personaje.edad;
console.log( personaje );

const entriesPares = Object.entries( personaje );
console.log( entriesPares );

// No funciona para propiedades anidadas
Object.freeze( personaje );

personaje.casao = true;
console.log( personaje );

// Listado de propiedads
const listado = Object.getOwnPropertyNames( personaje );
const valores = Object.values( personaje );
console.log( listado );
console.log( valores );

