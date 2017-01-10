<section class="node-page column">
	<div class="large-6">
		<?php if($node->nid == '7'): ?>
			<?php $block = module_invoke('webform', 'block_view', 'client-block-8'); ?>
			<?php print render($block['content']); ?>
		<?php endif; ?>
		<?php print render($content['body']); ?>
	</div>
</section>