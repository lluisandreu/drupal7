<div class="grid-item inline-edit-container">
	<?php print render($fields['field_images']->content); ?>
	<h3><?php print render($fields['title']->content); ?></h3>
	<?php if($fields['edit_node']->content): ?>
		<div class="inline-edit">
			<div class="small button secondary"><?php print render($fields['edit_node']->content); ?></div>
		</div>
	<?php endif; ?>
</div>