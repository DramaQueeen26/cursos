$(document).ready(function() {
	
	//Eliminar elemento incluyendo todos sus elementos hijos
	// $('.contenedor').remove();

	//Eliminar solo los elementos hijos
	// $('.contenedor').empty();
	// $('.contenedor').children().remove();

	//Eliminar un elemento específico
	$('.contenedor').children('#segundo').remove();
});