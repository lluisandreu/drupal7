<section class="node-front-page column">
	<?php if($content['body']): ?>
		<div class="node-front-body large-6">
			<?php print render($content['body']); ?>
		</div>
	<?php endif; ?>
	<?php if(isset($content['field_front_image'])): ?>
	<div class="node-front-image">
		<?php print render($content['field_front_image']); ?>
	</div>
	<?php endif; ?>
</section>