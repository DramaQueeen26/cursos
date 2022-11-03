let nombre = 'Peter Parker';
console.log( nombre );

nombre = 'Ben Parker';
console.log( nombre );

nombre = "Tía May";
nombre = `Tía May`;
console.log( typeof nombre ); // Imprime el tipo de variable

nombre = 123;
console.log( typeof nombre );

let esMarvel = true;
console.log( typeof esMarvel );

let edad = 20;
console.log( typeof edad );

let superPoder;
console.log( typeof superPoder );

let soyNull = null;
console.log( typeof soyNull )

/** El principal uso de un symbol es identificar propiedades de manera única */
let symbol1 = Symbol('a');
let symbol2 = Symbol('a');
console.log( typeof symbol1 )
console.log( typeof symbol2 )

console.log( symbol1 === symbol2 );