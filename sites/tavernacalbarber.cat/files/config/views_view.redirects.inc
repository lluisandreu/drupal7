<?php
/**
 * @file
 * views_view.redirects.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'redirects';
$view->description = 'Displays a list of redirects on user and admin pages.';
$view->tag = '';
$view->base_table = 'redirect';
$view->human_name = 'Redirects';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer redirects';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'source' => 'source',
  'redirect' => 'redirect',
  'language' => 'language',
  'count' => 'count',
  'access' => 'access',
  'edit_redirect' => 'edit_redirect',
  'delete_redirect' => 'delete_redirect',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'source' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'redirect' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'language' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'count' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'access' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'edit_redirect' => array(
    'align' => '',
    'separator' => '',
  ),
  'delete_redirect' => array(
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['content'] = 'No URL redirects found.';
$handler->display->display_options['empty']['area']['format'] = '1';
/* Field: Redirect: Redirect ID */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'redirect';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
/* Field: Redirect: Source URL */
$handler->display->display_options['fields']['source']['id'] = 'source';
$handler->display->display_options['fields']['source']['table'] = 'redirect';
$handler->display->display_options['fields']['source']['field'] = 'source';
$handler->display->display_options['fields']['source']['absolute'] = 0;
/* Field: Redirect: Redirect URL */
$handler->display->display_options['fields']['redirect']['id'] = 'redirect';
$handler->display->display_options['fields']['redirect']['table'] = 'redirect';
$handler->display->display_options['fields']['redirect']['field'] = 'redirect';
$handler->display->display_options['fields']['redirect']['alter']['path'] = 'node';
$handler->display->display_options['fields']['redirect']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['redirect']['absolute'] = 0;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['language']['id'] = 'language';
$handler->display->display_options['fields']['language']['table'] = 'redirect';
$handler->display->display_options['fields']['language']['field'] = 'language';
$handler->display->display_options['fields']['language']['empty'] = 'All';
/* Field: Redirect: Clicks */
$handler->display->display_options['fields']['count']['id'] = 'count';
$handler->display->display_options['fields']['count']['table'] = 'redirect';
$handler->display->display_options['fields']['count']['field'] = 'count';
/* Field: Redirect: Last accessed date */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'redirect';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['label'] = 'Last accessed';
$handler->display->display_options['fields']['access']['empty'] = 'Never';
$handler->display->display_options['fields']['access']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['access']['date_format'] = 'time ago';
/* Field: Redirect: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'redirect';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
/* Filter criterion: Redirect: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'redirect';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'redirect' => 'redirect',
);

/* Display: Page: User redirects */
$handler = $view->new_display('page', 'Page: User redirects', 'page_user');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Redirect: User ID */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'redirect';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['path'] = 'user/%/redirects';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Redirects';
$handler->display->display_options['menu']['weight'] = '0';

/* Display: Page: Admin redirects */
$handler = $view->new_display('page', 'Page: Admin redirects', 'page_admin');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'admin/config/search/redirect/list';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['tab_options']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'redirect',
);
