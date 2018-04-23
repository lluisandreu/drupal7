<?php 

?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<?php if(isset($content['body'])): ?>
  <div class="language-switcher">
    <?php if(isset($node->field_body_spanish) && !empty($node->field_body_spanish) || isset($node->field_body_catala) && !empty($node->field_body_catala)): ?>
      <a href="#en" class="eng">ENG</a>
    <?php endif; ?>
    <?php if(isset($node->field_body_spanish) && !empty($node->field_body_spanish)): ?>
      <a href="#es" class="es">ESP</a>
    <?php endif; ?>
    <?php if(isset($node->field_body_catala) && !empty($node->field_body_catala)): ?>
      <a href="#cat" class="cat">CAT</a>
    <?php endif; ?>
  </div>
  <div class="language-description-wrapper">
      <div class="language-description selected" data-language="en">
        <?php print render($content['body']); ?>
      </div>
      <div class="language-description" data-language="es">
        <?php print render($content['field_body_spanish']); ?>
      </div>
      <div class="language-description" data-language="cat">
        <?php print render($content['field_body_catala']); ?>
      </div>
    </div>
<?php endif; ?>

<div class="project-media">
  <?php if(isset($node->field_project_display)): ?>
    <?php $did = $node->field_project_display['und'][0]['value']; ?>
    <?php if($did == 0): ?> 
     <div class="project-media-vertical">
       <?php print render($content['field_images']); ?>
     </div>
    <?php elseif($did == 1): ?>
      <div class="project-media-horizontal">
        <?php print render($content['field_images']); ?>
      </div>
    <?php elseif($did == 2): ?> 
      <div class="project-media-colorbox clearfix">
        <?php print render($content['field_images']); ?>
      </div>
    <?php elseif($did == 3): ?>
      <div class="project-media-slideshow nojs">
        <?php print render($content['field_images']); ?>
      </div>
    <?php elseif($did == 4): ?>
      <div class="project-media-slideshow auto nojs">
        <?php print views_embed_view('random_slideshow', 'block_1'); ?>
      </div>
    <?php elseif($did == 5): ?>
      <div class="project-media-slideshow fade nojs">
        <?php print views_embed_view('random_slideshow', 'block_1'); ?>
      </div>
    <?php endif; ?>
  <?php endif; ?>

</div>

</div>
