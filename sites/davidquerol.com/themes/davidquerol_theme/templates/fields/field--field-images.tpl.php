<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
    	<?php if(!empty($item['#item']['field_hyperlink'])): ?>
    		<a href="<?php print url($item['#item']['field_hyperlink']['und'][0]['safe_value']); ?>">
    	<?php endif; ?>
      	<div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
      	<?php if(!empty($item['#item']['field_hyperlink'])): ?>
    		</a>
    	<?php endif; ?>
    <?php endforeach; ?>
  </div>
</div>