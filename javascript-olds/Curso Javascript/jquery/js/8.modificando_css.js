$(document).ready(function() {
	
	//Añadir una clase al elemento
	// $('#segundo').addClass('fondo-rojo');

	//Eliminar una clase al elemento
	// $('#segundo').removeClass('texto');

	//Alternar entre agregar y eliminar clase

	// const cambiar_fondo = () => $('#segundo').toggleClass('fondo-rojo'); 
	// $('.boton').click(cambiar_fondo);

// ----------------------------------------------------------------------------

	//Cambiando una sola propiedad
	// $('#segundo').css('background', '#ccc');

	//Cambiando varias propiedades con un objeto
	$('#segundo').css({
		background: '#ccc',
		color: 'blue'
	});

});