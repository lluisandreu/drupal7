<div class="grid-inner inline-edit-container">
	<?php print render($fields['field_cover_image']->content); ?>
	<h3><?php print render($fields['title']->content); ?></h3>
	<time><?php print render($fields['field_published_date']->content); ?></time>
	<?php print render($fields['body']->content); ?>
	<?php if($fields['edit_node']): ?>
		<div class="inline-edit">
			<div class="small button secondary"><?php print render($fields['edit_node']->content); ?></div>
		</div>
	<?php endif; ?>
</div>