$(document).ready(function() {
	
	//Seleccionando el primer elemento
	$('.texto').first();

	//Seleccionando el último elemento
	$('.texto').last();

	//Seleccionando el elemento según su índice
	$('.texto').eq(1);

	//Seleccionando el elemento según algún parámetro
	$('.texto').filter('#segundo');

	//Seleccionando todos los elementos excepto el indicado
	$('.texto').not('#segundo').css('background', '#ccc');

});