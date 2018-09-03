<div class="<?php

print $classes;
?>"<?php

print $attributes;
?>>
  <?php

if (!$label_hidden) {
  ?>
    <div class="field-label"<?php

  print $title_attributes;
  ?>><?php

  print $label;
  ?>:&nbsp;</div>
  <?php

}
?>

  <?php if(isset($onsale)): ?>
    <div class="onsale-price-field">
      <small style="text-decoration: line-through;"><?php print $original_price; ?></small>
    </div>
  <?php endif; ?>

  <div class="field-items"<?php

print $content_attributes;
?>>
    <?php

foreach ($items as $delta => $item) {
  ?>
      <div class="field-item <?php

  print $delta % 2 ? 'odd' : 'even';
  ?>"<?php

  print $item_attributes[$delta];
  ?>><?php

  print render($item);
  ?></div>
    <?php

}
?>
  </div>
</div>