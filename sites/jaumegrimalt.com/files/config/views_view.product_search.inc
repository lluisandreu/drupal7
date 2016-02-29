<?php
/**
 * @file
 * views_view.product_search.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'product_search';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'search_api_index_taxonomy';
$view->human_name = 'Product search';
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
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Buscar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'medium-block-grid-3 small-block-grid-2';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'taxonomy_teaser';
/* Field: Indexed Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'search_api_index_taxonomy';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
/* Sort criterion: Search: Relevance */
$handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
$handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_taxonomy';
$handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
/* Filter criterion: Search: Fulltext search */
$handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_taxonomy';
$handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
$handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
  2 => '2',
  1 => '1',
  3 => 0,
);
$handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['path'] = 'search';
$translatables['product_search'] = array(
  t('Master'),
  t('more'),
  t('Buscar'),
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
  t('Term ID'),
  t('.'),
  t(','),
  t('Page'),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => '',
);
