<div class="node-default-template">
	<div class="node-page-content node-main <?php print (isset($content['field_images'])) ? 'large-6 column' : 'column'; ?>" >
		<?php print render($content['body']); ?>

		<?php if($node->type == "member_page"): ?>
			<a href="<?php print url('node/72'); ?>"><i class="fa fa-arrow-circle-left"></i> Back to Members</a>
		<?php endif; ?>
	</div>
	<?php if(isset($content['field_images'])): ?>
		<aside id="main-aside" class="large-6 column">
			<?php print render($content['field_images']); ?>
		</aside>
	<?php endif; ?>
</div>