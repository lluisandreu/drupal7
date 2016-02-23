<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<div class="node-content">
<?php if(!empty($node->field_page_hide_content) && $node->field_page_hide_content['und'][0]['value'] == 1): ?>
  <div class="messages info">El contingut d'aquesta pàgina és invisible als usuaris anònims</div>
<?php endif; ?>
<?php if(isset($content['body'])): ?>
  <div class="node-content-left"<?php print $content_attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h1><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php
      print render($content['body']);
    ?>
  </div>
<?php endif; ?>
  <?php if(isset($content['field_page_images']) || isset($content['field_page_right'])): ?>
    <div class="node-content-right <?php if(isset($content['body'])) {print "body";} ?>">
      <?php if(!isset($content['body'])): ?>
          <h1><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($content['field_page_images']); ?>
      <?php if(isset($content['field_page_right'])): ?>
        <?php print render($content['field_page_right']); ?>
      <?php endif; ?>
    </div>
  <?php endif; ?>
  </div>
</div>
</div>