<div class="node-product">
  <div class="row">
    <div class="col-12 col-md-8">
      <div class="product-images clearfix">
        <?php print render($content['field_images']); ?>
      </div>
      <div class="language-switcher">
        <a href="#en" class="eng">ENG</a>
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
    </div>
    <div class="col-12 col-md-4">
      <?php print render($content['field_product_year']); ?>
      <?php print render($content['field_product_edition']); ?>
      <?php print render($content['field_product_quality_paper']); ?>
      <?php print render($content['field_framing_info']); ?>
      <div class="product-price">
        <?php print render($content['product:commerce_price']); ?>
        <p class="print-small-print">Includes Shipping &amp; Taxes</p>
      </div>
      <?php print render($content['field_product_variants']); ?>
    </div>
  </div>
</div>