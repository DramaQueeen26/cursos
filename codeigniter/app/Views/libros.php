
<table>
	<tr>
		<th>ID</th>
		<th>Nombre</th>
		<th>Descripción</th>
	</tr>
	<?php foreach($datos as $data):?>

	<tr>
		<td><?= $data->id_libro ?></td>
		<td><?= $data->nombre ?></td>
		<td><?= $data->description ?></td>
	</tr>
	<?php endforeach;?>
</table>
