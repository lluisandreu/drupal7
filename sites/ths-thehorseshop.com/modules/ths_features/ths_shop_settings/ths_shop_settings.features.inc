<?php
/**
 * @file
 * ths_shop_settings.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function ths_shop_settings_commerce_flat_rate_default_services() {
  $items = array(
    'collect_in_store' => array(
      'name' => 'collect_in_store',
      'base' => 'collect_in_store',
      'display_title' => 'Recogida en tienda',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_collect_in_store',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'collect_in_store_details_form',
        'details_form_validate' => 'collect_in_store_details_form_validate',
        'details_form_submit' => 'collect_in_store_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Collect in store',
      'base_rate' => array(
        'amount' => 0,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'example' => array(
      'name' => 'example',
      'base' => 'example',
      'display_title' => 'Gastos de envío',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_example',
      'weight' => 1,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'example_details_form',
        'details_form_validate' => 'example_details_form_validate',
        'details_form_submit' => 'example_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Example',
      'base_rate' => array(
        'amount' => 350,
        'currency_code' => 'EUR',
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_example',
              'price' => array(
                'amount' => 289,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|iva',
              'price' => array(
                'amount' => 61,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
                    'name' => 'iva',
                    'display_title' => 'IVA',
                    'description' => '',
                    'rate' => 0.21,
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
function ths_shop_settings_commerce_product_default_types() {
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
function ths_shop_settings_commerce_tax_default_rates() {
  $items = array(
    'iva' => array(
      'name' => 'iva',
      'display_title' => 'IVA',
      'description' => '',
      'rate' => 0.21,
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
 * Implements hook_commerce_tax_default_types().
 */
function ths_shop_settings_commerce_tax_default_types() {
  $items = array(
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Sales tax',
      'description' => 'A basic type for taxes that do not display inclusive with product prices.',
      'display_inclusive' => 0,
      'round_mode' => 0,
      'rule' => 'commerce_tax_type_sales_tax',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales tax',
      'admin_list' => TRUE,
    ),
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 1,
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function ths_shop_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
