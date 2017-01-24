<div class="node-default-template">
	<div class="node-page-content node-main <?php print (isset($content['field_cover_image'])) ? 'large-6 column' : 'column'; ?>" >
		<h3><?php print render($content['field_event_organiser']); ?></h3>
		<time><?php print render($content['field_event_date']); ?></time>
		<?php print render($content['body']); ?>
		<?php if($content['field_event_info']): ?>
			<div class="panel">
				<?php print render($content['field_event_info']); ?>
			</div>
		<?php endif; ?>
	</div>
	<?php if(isset($content['field_cover_image'])): ?>
		<aside class="large-6 column">
			<?php print render($content['field_cover_image']); ?>
		</aside>
	<?php endif; ?>
</div>v