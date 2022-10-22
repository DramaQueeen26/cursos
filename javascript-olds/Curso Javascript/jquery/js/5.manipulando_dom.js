$(document).ready(function() {
	
	//Modificar texto
	// $('#segundo').text('Hola'); //Devuelve el texto dentro y lo modifica

	//Modificar HTML
	// $('#segundo').html('<strong>Esto es un párrafo en negrita</strong>');

	//Modificar o agregar atributos
	// $('.texto').eq(0).attr('id', 'primero');
	$('.texto').eq(0).attr({
		id: 'primero',
		class: 'texto fondo-rojo'
	});

});