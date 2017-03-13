<div class="node-page-template">
	<div class="node-page-content node-main <?php print (isset($content['field_images'])) ? 'large-6 column' : 'column'; ?>" >
		<?php print render($content['body']); ?>
		<?php if($node->nid == '75'): ?>
			<?php print $block_news; ?>
		<?php elseif($node->nid == '72'): ?>
			<?php print $block_members; ?>
		<?php elseif($node->nid == '156'): ?>
			<?php print $block_blog; ?>
		<?php elseif($node->nid == '177'): ?>
			<?php print $block_events; ?>
		<?php elseif($node->nid == '48'): ?>
			<div class="row">
				<div class="column large-8">
					<?php print render($block_webform['content']); ?>
				</div>
			</div>
		<?php endif; ?>
	</div>
	<?php if(isset($content['field_images'])): ?>
		<aside id="main-aside" class="large-6 column">
			<?php print render($content['field_images']); ?>
		</aside>
	<?php endif; ?>
</div>