<div class="grid-item">
	<?php if($fields['field_grid_type']->content === "image"): ?>
		<div class="grid-type-image">
			<?php if(isset($fields['field_grid_link'])): ?>
				<a href="<?php print url($fields['field_grid_link']->content); ?>">
			<?php endif; ?>
			<?php print $fields['field_grid_image']->content; ?>
			<?php if(isset($fields['field_grid_link'])): ?>
				</a>
			<?php endif; ?>
		</div>
	<?php else: ?>
		<div class="grid-type-text">
			<?php if(isset($fields['field_grid_link'])): ?>
				<a href="<?php print url($fields['field_grid_link']->content); ?>">
			<?php endif; ?>
			<h3><?php print $fields['field_grid_text']->content; ?></h3>
			<?php if(isset($fields['field_grid_link'])): ?>
				</a>
			<?php endif; ?>
		</div>
	<?php endif; ?>
</div>