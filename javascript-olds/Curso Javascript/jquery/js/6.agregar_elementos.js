$(document).ready(function() {
	
	var contenedor = $('.contenedor');
	var segundoParrafo = $('#segundo');

	$('.boton').click(() => {
		
		var nuevoParrafo = $('<p>').attr('class', 'texto').text('Esto es un nuevo párrafo');

		// contenedor.append(nuevoParrafo); //Para agregar el párrafo dentro del contenedor AL FINAL

		// contenedor.prepend(nuevoParrafo); //Agregar elementos en el contenedor al inicio

		// segundoParrafo.before(nuevoParrafo); //Agregar el parrafo antes de un elemento

		segundoParrafo.after(nuevoParrafo); //Agregar el parrafo despues de un elemento
	});
});