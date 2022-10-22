//Eventos click y dblclick

var boton = document.getElementById('boton');

boton.addEventListener('dblclick', () => {
	var parrafo = document.createElement('p');

	var texto_nuevo = document.createTextNode('Hola soy un texto nuevo');

	parrafo.appendChild(texto_nuevo); //Integrar un elemento hijo dentro de un párrafo
	parrafo.setAttribute('class', 'texto'); //Agregando los atributos al párrafo

	var contenedor = document.getElementsByClassName('contenedor')[0]; //Porque es un arreglo, por eso la posición 0

	contenedor.appendChild(parrafo);
});