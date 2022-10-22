//Evento mouseover y mouseout

var primer_parrafo = document.getElementsByClassName('texto')[0];

primer_parrafo.addEventListener('mouseover', () => {
  // Todo...

	primer_parrafo.className = 'texto fondo-rojo';

	var parrafo = document.createElement('p');

	var texto_nuevo = document.createTextNode('Hola soy un texto nuevo');

	parrafo.appendChild(texto_nuevo); //Integrar un elemento hijo dentro de un párrafo
	parrafo.setAttribute('class', 'texto'); //Agregando los atributos al párrafo

	var contenedor = document.getElementsByClassName('contenedor')[0]; //Porque es un arreglo, por eso la posición 0

	contenedor.appendChild(parrafo);

	parrafo.id = 'parrafoAgregado';

});

primer_parrafo.addEventListener('mouseout', () => {
  // Todo...
  primer_parrafo.textContent = 'Quité el mouse';

  var parrafoAgregado = document.getElementById('parrafoAgregado');

  var contenedor = document.getElementsByClassName('contenedor')[0];

  contenedor.removeChild(parrafoAgregado);

});