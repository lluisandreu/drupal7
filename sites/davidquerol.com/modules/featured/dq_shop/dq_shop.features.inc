<?php
/**
 * @file
 * dq_shop.features.inc
 */

/**
 * Implements hook_commerce_customer_profile_type_info().
 */
function dq_shop_commerce_customer_profile_type_info() {
  $items = array(
    'billing' => array(
      'description' => 'The profile used to collect billing information on the checkout and order forms.',
      'help' => '',
      'addressfield' => TRUE,
      'module' => 'commerce_customer',
      'label_callback' => 'commerce_customer_profile_default_label',
      'type' => 'billing',
      'name' => 'Billing information',
    ),
    'shipping' => array(
      'description' => 'The profile used to collect shipping information on the checkout and order forms.',
      'help' => '',
      'addressfield' => TRUE,
      'module' => 'commerce_shipping',
      'label_callback' => 'commerce_customer_profile_default_label',
      'type' => 'shipping',
      'name' => 'Shipping information',
      'checkout_pane_weight' => 0,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function dq_shop_commerce_flat_rate_default_services() {
  $items = array(
    'standard' => array(
      'name' => 'standard',
      'base' => 'standard',
      'display_title' => 'Standard',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_standard',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'standard_details_form',
        'details_form_validate' => 'standard_details_form_validate',
        'details_form_submit' => 'standard_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Standard',
      'base_rate' => array(
        'amount' => 1000,
        'currency_code' => 'EUR',
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_standard',
              'price' => array(
                'amount' => 826,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|iva',
              'price' => array(
                'amount' => 174,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
                    'name' => 'iva',
                    'display_title' => 'IVA',
                    'description' => '',
                    'rate' => '.21',
                    'type' => 'vat',
                    'rules_component' => 'commerce_tax_rate_iva',
                    'default_rules_component' => 1,
                    'price_component' => 'tax|iva',
                    'calculation_callback' => 'commerce_tax_rate_calculate',
                    'module' => 'commerce_tax_ui',
                    'title' => 'IVA',
                    'admin_list' => TRUE,
                  ),
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'iva',
      ),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function dq_shop_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function dq_shop_commerce_tax_default_rates() {
  $items = array(
    'iva' => array(
      'name' => 'iva',
      'display_title' => 'IVA',
      'description' => '',
      'rate' => '.21',
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_iva',
      'default_rules_component' => 1,
      'price_component' => 'tax|iva',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'IVA',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function dq_shop_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dq_shop_image_default_styles() {
  $styles = array();

  // Exported image style: shop_squared.
  $styles['shop_squared'] = array(
    'label' => 'Shop squared',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dq_shop_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
