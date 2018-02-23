<div class="node-product">
  <div class="row">
    <div class="col-12 col-md-8">
      <div class="product-images clearfix">
        <?php print render($content['field_images']); ?>
      </div>
      <h4>Description</h4>
      <?php print render($content['body']); ?>
    </div>
    <div class="col-12 col-md-4">
      <?php print render($content['field_product_year']); ?>
      <?php print render($content['field_product_edition']); ?>
      <?php print render($content['field_product_quality_paper']); ?>
      <div class="product-price">
        <?php print render($content['product:commerce_price']); ?>
      </div>
      <?php print render($content['field_product_variants']); ?>
    </div>
  </div>
</div>