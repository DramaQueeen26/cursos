$(document).ready(function() {
	
	//Buscar en jquery los eventos
	var boton = $('.boton');

	//Añadiendo un evento con función anónima
	// boton.click(() => {
	// 	alert('Hola soy un texto');
	// });

	//Añadiendo un evento con función declarada

	// const saludo = () => {
	// 	alert('Hola soy un texto');
	// }
	// boton.click(saludo);

	//Añadiendo evento con 'on'
	boton.on('click', function() {
		alert('Evento con ON');
	});

	//Eliminando un evento
	boton.off('click');


});