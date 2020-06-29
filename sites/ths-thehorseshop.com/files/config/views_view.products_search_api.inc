<?php
/**
 * @file
 * views_view.products_search_api.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'products_search_api';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'search_api_index_products_search_api';
$view->human_name = 'Product Search API';
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
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Busca';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'medium-block-grid-2 small-block-grid-1';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'Lo sentimos, su búsqueda no ha tenido resultados. ';
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
/* Sort criterion: Search: Relevance */
$handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
$handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_products_search_api';
$handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
$handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
/* Filter criterion: Search: Fulltext search */
$handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_products_search_api';
$handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
$handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';

/* Display: Context */
$handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
$handler->display->display_options['style_plugin'] = 'ctools_context';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['path'] = 'busqueda/productos';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => '',
);
