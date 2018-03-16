<section class="node-page">
	<div class="row">
		<div class="large-7 columns">
			<?php print render($content['body']); ?>
			<?php if($node->nid == '5'): ?>
				<?php $block = module_invoke('webform', 'block_view', 'client-block-14'); ?>
				<?php print render($block['content']); ?>
			<?php endif; ?>
		</div>
		<div class="large-4 columns">
			<?php print render($content['field_front_image']); ?>
		</div>
	</div>
	<div class="row">
		<div class="column">
			<?php if($node->nid == '3'): ?>
				<?php $block = module_invoke('views', 'block_view', 'exhibitions-block'); ?>
				<?php print render($block['content']); ?>
			<?php endif; ?>
		</div>
	</div>
</section>
