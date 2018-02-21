<?php

function davidquerol_theme_preprocess_html($variables) {
	$fontawesome = "https://use.fontawesome.com/88826c71d5.js";
  drupal_add_css('//cdn.jsdelivr.net/npm/bootstrap-v4-grid-only@1.0.0/dist/bootstrap-grid.min.css', array('type' => 'external'));
	drupal_add_js($fontawesome, array('type' => 'external'));
	drupal_add_js("//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-54734cc76e9f99b6", array('type' => 'external'));
}


function davidquerol_theme_breadcrumb($variables) {
 $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
  	$title = drupal_get_title();
  	$breadcrumb[] = $title;
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' / ', $breadcrumb) . '</div>';
    return $output;
  }
}

function davidquerol_theme_preprocess_views_view_fields(&$variables) {
  
  $prices = array();
  if($variables['view']->name == 'shop') {
    $nid = $variables['fields']['nid']->raw;
    $node = node_load($nid);
    if(!empty($node->field_product_variants)) {
      $variants = $node->field_product_variants['und'];
      foreach ($variants as $key => $value) {
        $product = commerce_product_load($value['product_id']);
        array_push($prices,$product->commerce_price['und'][0]['amount']);
      }
      if(count($prices) > 1) {
        $variables['fields']['price']['comment'] = "from ";
      } else {
        $variables['fields']['price']['comment'] = "";
      }
      $variables['fields']['price']['amount'] = commerce_currency_format(min($prices), 'EUR');
    }
  }
}

function davidquerol_theme_preprocess_block($variables) {
  
  if($variables['block_id'] == 3) {
   
    
  }
}