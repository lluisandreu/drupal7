<?php
/**
 * @file
 * views_view.products_by_category.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'products_by_category';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Products by category';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'large-block-grid-4 medium-block-grid-3 small-block-grid-2';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'ds';
$handler->display->display_options['row_options']['alternating'] = 0;
$handler->display->display_options['row_options']['grouping'] = 0;
$handler->display->display_options['row_options']['advanced'] = 0;
$handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
$handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
$handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Categoría (field_product_category) */
$handler->display->display_options['arguments']['field_product_category_tid']['id'] = 'field_product_category_tid';
$handler->display->display_options['arguments']['field_product_category_tid']['table'] = 'field_data_field_product_category';
$handler->display->display_options['arguments']['field_product_category_tid']['field'] = 'field_product_category_tid';
$handler->display->display_options['arguments']['field_product_category_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_product_category_tid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_product_category_tid']['title'] = 'Productos en %1';
$handler->display->display_options['arguments']['field_product_category_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_product_category_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_product_category_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_product_category_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_product_category_tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_product_category_tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['field_product_category_tid']['validate_options']['vocabularies'] = array(
  'categories' => 'categories',
);
$handler->display->display_options['arguments']['field_product_category_tid']['validate_options']['type'] = 'tids';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'producto' => 'producto',
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'views_content',
);
