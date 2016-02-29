<?php
/**
 * @file
 * views_view.featured_products.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'featured_products';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Featured products';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'medium-block-grid-3 small-block-grid-1';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'ds';
$handler->display->display_options['row_options']['view_mode'] = 'taxonomy_teaser';
$handler->display->display_options['row_options']['alternating'] = 0;
$handler->display->display_options['row_options']['advanced'] = 0;
$handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
$handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'taxonomy_teaser';
$handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'full';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'product_categories' => 'product_categories',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';
$handler->display->display_options['filters']['parent']['value']['value'] = '0';

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
$translatables['featured_products'] = array(
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
  t('Content pane'),
  t('View panes'),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'views_content',
);
