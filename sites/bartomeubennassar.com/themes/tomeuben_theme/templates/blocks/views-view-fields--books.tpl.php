<div class="book-display">
	<?php if ($fields['field_book_cover']->content): ?>
		<div class="book-display-cover">
			<?php print render($fields['field_book_cover']->content); ?>
		</div>
	<?php endif; ?>
	<div class="book-display-information <?php print ($fields['field_book_cover']->content ? 'with-cover' : ''); ?>">
		<?php print render($fields['field_book_information']->content); ?>
	</div>
</div>