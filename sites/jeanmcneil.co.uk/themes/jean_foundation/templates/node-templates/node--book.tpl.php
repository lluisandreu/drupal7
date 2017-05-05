<?php print render($content['field_image_book']); ?>
<p><strong><?php print render($content['field_summary']); ?></strong></p>
<?php print render($content['body']); ?>
<hr>
<?php if(isset($content['field_book_info'])): ?>
	<div class="panel">
		<strong><?php print render($content['field_book_info']); ?></strong>
		<p><?php print render($content['field_additional_book_informaiti']); ?></p>
		<?php if(isset($content['field_links'])): ?>
			<a href="<?php print render($content['field_links'][0]['#markup']); ?>" class="button" target="_blank">Buy in Amazon</a>
		<?php endif; ?>
	</div>
<?php endif; ?>