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

  <?php if(isset($onsale) && $onsale): ?>
    <div class="onsale-price-field">
      <h3 style="padding-bottom:0;"><small style="text-decoration: line-through;"><?php print $original_price; ?></small></h3>
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
  ?>><h3 <?php if(isset($onsale) && $onsale): ?> style="padding-top:10px;" <?php endif; ?>><?php

  print render($item);
  ?></h3></div>
    <?php

}
?>
  </div>
</div>