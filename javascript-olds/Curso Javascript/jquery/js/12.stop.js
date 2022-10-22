$(document).ready(function() {
	
	var boton = $('#boton');
	var detener = $('#detener');
	boton.on('click', () => {
		$('#segundo').animate({
			width: '50%'
		}, 2000);

		$('#segundo').animate({
			width: '80%'
		}, 2000);

		$('#segundo').animate({
			width: '300px'
		}, 2000);
	});


	//stop(limpiarCola, saltarFinal)
	detener.on('click', () => $('#segundo').stop(true, true));

});