<div class="front-page-content row">
	<div class="large-6 columns">
		<h1><?php print $node->title; ?></h1>
		<div class="front-page-description">
			<?php print render($content['body']); ?>
		</div>
	</div>
	<div class="columns">
		<?php print render($content['field_front_grid']); ?>
	</div>
</div>