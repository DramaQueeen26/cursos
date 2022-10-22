$(document).ready(function() {
	var boton = $('#boton');

	//Calcular ancho
	// boton.on('click', () => {
	// 	// var ancho = $('#segundo').width();
	// 	// var ancho = $('#segundo').innerWidth(); //Incluyendo padding
	// 	// var ancho = $('#segundo').outerWidth(); //incluyendo border
	// 	// var ancho = $('#segundo').outerWidth(true) //incluye margin


	// 	alert(ancho);
	// });

	//Calcular alto
	boton.on('click', () => {
		// var alto = $('#segundo').height();
		var alto = $('#segundo').innerHeight(); //Incluyendo padding
		// var alto = $('#segundo').outerHeight(); //incluyendo border
		// var alto = $('#segundo').outerHeight(true) //incluye margin


		alert(alto);
	});
});