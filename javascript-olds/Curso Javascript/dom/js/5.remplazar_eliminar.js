var parrafos = document.getElementsByClassName('texto');

var padre_parrafo = parrafos[0].parentNode;

//COPIAR Y PEGAR LO QUE ESTABA EN EL ARCHIVO JS 2

//Creando nuevo párrafo

var parrafo = document.createElement('p');

var texto_nuevo = document.createTextNode('Hola soy un texto nuevo');

parrafo.appendChild(texto_nuevo); //Integrar un elemento hijo dentro de un párrafo
parrafo.setAttribute('class', 'texto'); //Agregando los atributos al párrafo

var contenedor = document.getElementsByClassName('contenedor')[0]; //Porque es un arreglo, por eso la posición 0

// ----------------------------------------------------------------------------

//Remplazando elementos

padre_parrafo.replaceChild(parrafo, parrafos[1]);

//Eliminando elementos

padre_parrafo.removeChild(parrafos[0]);