<div class="list-item inline-edit-container row">
	<div class="small-4 columns">
		<?php print render($fields['field_cover_image']->content); ?>
	</div>
	<div class="small-8 columns">
		<h3><?php print render($fields['title']->content); ?></h3>
		<p class="author">By <?php print render($fields['name']->content); ?></p>
		<?php print render($fields['body']->content); ?>
	</div>
	<?php if($fields['edit_node']->content): ?>
		<div class="inline-edit">
			<div class="small button secondary"><?php print render($fields['edit_node']->content); ?></div>
		</div>
	<?php endif; ?>
</div>