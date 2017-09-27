<?php 

?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<?php if(isset($content['body'])): ?>
  <?php print render($content['body']); ?>
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
      <div class="project-media-slideshow">
        <?php print render($content['field_images']); ?>
      </div>
    <?php elseif($did == 4): ?>
      <div class="project-media-slideshow auto">
        <?php print views_embed_view('random_slideshow', 'block_1'); ?>
      </div>
    <?php endif; ?>
  <?php endif; ?>

</div>

</div>
