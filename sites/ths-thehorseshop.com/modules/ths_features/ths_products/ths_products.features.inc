<?php
/**
 * @file
 * ths_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ths_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ths_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ths_products_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured products".
  $flags['featured_products'] = array(
    'entity_type' => 'node',
    'title' => 'Featured products',
    'global' => 0,
    'types' => array(
      0 => 'producto',
    ),
    'flag_short' => 'Producto destacado',
    'flag_long' => 'Producto destacado en la página principal',
    'flag_message' => '',
    'unflag_short' => 'Quitar el producto destacado',
    'unflag_long' => 'Quitar el producto de la página principal',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'ths_products',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Oferta".
  $flags['oferta'] = array(
    'entity_type' => 'node',
    'title' => 'Oferta',
    'global' => 1,
    'types' => array(
      0 => 'producto',
    ),
    'flag_short' => 'Producto en oferta',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'El producto no está en oferta',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'ths_products',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function ths_products_image_default_styles() {
  $styles = array();

  // Exported image style: product_cloud_thumb.
  $styles['product_cloud_thumb'] = array(
    'label' => 'Product cloud thumb',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_image_thumb_desktop.
  $styles['product_image_thumb_desktop'] = array(
    'label' => 'Product image thumb desktop',
    'effects' => array(
      13 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 330,
          'height' => 210,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'product_image_thumb_desktop',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: product_page.
  $styles['product_page'] = array(
    'label' => 'Product page',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 520,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ths_products_node_info() {
  $items = array(
    'producto' => array(
      'name' => t('Producto'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título del producto'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
