<div class="node-default-template">
	<div class="node-page-content node-main <?php print (isset($content['field_cover_image'])) ? 'large-6 column' : 'column'; ?>" >
		<time><?php print format_date($node->created, "upa_long"); ?></time>
		<?php print render($content['body']); ?>
	</div>
	<?php if(isset($content['field_cover_image'])): ?>
		<aside class="large-6 column">
			<?php print render($content['field_cover_image']); ?>
		</aside>
	<?php endif; ?>
</div>