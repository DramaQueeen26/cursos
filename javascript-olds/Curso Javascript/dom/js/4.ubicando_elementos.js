//COPIAR Y PEGAR LO QUE ESTABA EN EL ARCHIVO JS 2

//Creando nuevo elemento o nodo

var parrafo = document.createElement('p');

var texto_nuevo = document.createTextNode('Hola soy un texto nuevo');

parrafo.appendChild(texto_nuevo); //Integrar un elemento hijo dentro de un párrafo
parrafo.setAttribute('class', 'texto'); //Agregando los atributos al párrafo

var contenedor = document.getElementsByClassName('contenedor')[0]; //Porque es un arreglo, por eso la posición 0

// ------------------------------------------------------------------

var parrafos = document.getElementsByClassName('texto');

//Obtener elemento padre

var padre_parrafo = parrafos[0].parentNode;

//Agregar un nuevo elemento antes del elemento seleccionado


padre_parrafo.insertBefore(parrafo, parrafos[1]);



