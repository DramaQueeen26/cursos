$(document).ready(function() {
	
	var boton = $('#boton');
	boton.on('click', () => {
		$('#segundo').animate({
			width: '50%',
			height: '200px'
		}, 2000, () => {
			alert('Ya terminó');
		});
	});
});