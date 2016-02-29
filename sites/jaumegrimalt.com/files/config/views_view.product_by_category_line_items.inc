<?php
/**
 * @file
 * views_view.product_by_category_line_items.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'product_by_category_line_items';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_product';
$view->human_name = 'Product by category (line items)';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'sku' => 'sku',
  'title' => 'title',
  'commerce_price' => 'commerce_price',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'sku' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'commerce_price' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Commerce Product: Referencing Taxonomy term */
$handler->display->display_options['relationships']['field_taxonomy_products']['id'] = 'field_taxonomy_products';
$handler->display->display_options['relationships']['field_taxonomy_products']['table'] = 'commerce_product';
$handler->display->display_options['relationships']['field_taxonomy_products']['field'] = 'field_taxonomy_products';
/* Field: Commerce Product: SKU */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['label'] = 'Referéncia';
$handler->display->display_options['fields']['sku']['link_to_product'] = 0;
/* Field: Commerce Product: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'commerce_product';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Descripción';
$handler->display->display_options['fields']['title']['link_to_product'] = 0;
/* Field: Commerce Product: Price */
$handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
$handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['label'] = 'Precio';
$handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_price']['settings'] = array(
  'calculation' => '0',
);
/* Sort criterion: Commerce Product: SKU */
$handler->display->display_options['sorts']['sku']['id'] = 'sku';
$handler->display->display_options['sorts']['sku']['table'] = 'commerce_product';
$handler->display->display_options['sorts']['sku']['field'] = 'sku';
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'field_taxonomy_products';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
  'product_categories' => 'product_categories',
);
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Commerce Product: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'commerce_product';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'product' => 'product',
);

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
$translatables['product_by_category_line_items'] = array(
  t('Master'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Taxonomy term referencing products from field_taxonomy_products'),
  t('Referéncia'),
  t('Descripción'),
  t('Precio'),
  t('All'),
  t('Content pane'),
  t('View panes'),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'commerce_product',
  2 => 'commerce_price',
  3 => 'views_content',
);
