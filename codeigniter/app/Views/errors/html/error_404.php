<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Error 404 | Page Not Found</title>

	<style>
		<?= preg_replace('#[\r\n\t ]+#', ' ', file_get_contents(__DIR__ . DIRECTORY_SEPARATOR . 'debug.css')) ?>
	</style>
</head>
<body>
	<div class="containet text-center">
		<h1 class="headline">Whoops!</h1>

		<p class="lead">
			<?php if (! empty($message) && $message !== '(null)') : ?>
				<?= nl2br(esc($message)) ?>
			<?php else : ?>
				Sorry! Cannot seem to find the page you were looking for.
			<?php endif ?>
		</p>
	</div>
</body>
</html>
