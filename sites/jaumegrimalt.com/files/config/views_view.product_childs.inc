<?php
/**
 * @file
 * views_view.product_childs.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'product_childs';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Product childs';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'medium-block-grid-3 small-block-grid-2';
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
$handler->display->display_options['row_options']['alternating_fieldset']['item_3'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_4'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_5'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_6'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_7'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_8'] = 'full';
$handler->display->display_options['row_options']['alternating_fieldset']['item_9'] = 'full';
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
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'default';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['parent']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['parent']['default_argument_options']['limit'] = TRUE;
$handler->display->display_options['arguments']['parent']['default_argument_options']['vocabularies'] = array(
  'product_categories' => 'product_categories',
);
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'product_categories' => 'product_categories',
);

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['argument_input'] = array(
  'parent' => array(
    'type' => 'none',
    'context' => 'entity:taxonomy_term.parent',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Taxonomy term: Parent term',
  ),
);
$translatables['product_childs'] = array(
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
  t('All'),
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
