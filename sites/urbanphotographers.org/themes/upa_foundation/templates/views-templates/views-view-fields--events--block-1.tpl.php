<div class="list-item inline-edit-container clearfix">
	<div class="float-left date-day">
		<strong><?php print render($fields['field_event_date_1']->content); ?></strong>
	</div>
	<div class="float-left body">
		<h4><?php print render($fields['title']->content); ?></h4>
		<?php print render($fields['field_event_organiser']->content); ?>
	</div>
	<?php if($fields['edit_node']->content): ?>
		<div class="inline-edit">
			<div class="tiny button secondary"><?php print render($fields['edit_node']->content); ?></div>
		</div>
	<?php endif; ?>
</div>