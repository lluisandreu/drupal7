<?php
/**
 * @file
 * ths_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ths_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_test__panel_context_1a00d141-78ac-442a-afe2-5b3e53fefd0f';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'test';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Product search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-search',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Product Search API',
        'keyword' => 'view',
        'name' => 'view:products_search_api-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'search';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Buscar';
  $display->uuid = '1dcc1c1c-071c-43c1-a31a-330305af3285';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_test__panel_context_1a00d141-78ac-442a-afe2-5b3e53fefd0f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2af45b79-980e-4895-b221-724ef7a0793d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-tPRLiOd3Sc6xw3kL7nHe3RI1o0ne2QIK';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categorias',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2af45b79-980e-4895-b221-724ef7a0793d';
  $display->content['new-2af45b79-980e-4895-b221-724ef7a0793d'] = $pane;
  $display->panels['left'][0] = 'new-2af45b79-980e-4895-b221-724ef7a0793d';
  $pane = new stdClass();
  $pane->pid = 'new-32b65cea-c4fa-4f50-b078-4cbc4d6652dd';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-gsG3xwbomtYE0fjJQG1T3bNgtPT6k0pr';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Marcas',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '32b65cea-c4fa-4f50-b078-4cbc4d6652dd';
  $display->content['new-32b65cea-c4fa-4f50-b078-4cbc4d6652dd'] = $pane;
  $display->panels['left'][1] = 'new-32b65cea-c4fa-4f50-b078-4cbc4d6652dd';
  $pane = new stdClass();
  $pane->pid = 'new-2994ef41-587e-4105-94aa-532eacca0918';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-products_search_api-page_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'clearfix',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2994ef41-587e-4105-94aa-532eacca0918';
  $display->content['new-2994ef41-587e-4105-94aa-532eacca0918'] = $pane;
  $display->panels['right'][0] = 'new-2994ef41-587e-4105-94aa-532eacca0918';
  $pane = new stdClass();
  $pane->pid = 'new-21c8880c-a3b4-418b-bb27-58ae66450e4a';
  $pane->panel = 'right';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'context_view:products_search_api-ctools_context_1_1',
    'override_title' => 0,
    'override_title_text' => '%title',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '21c8880c-a3b4-418b-bb27-58ae66450e4a';
  $display->content['new-21c8880c-a3b4-418b-bb27-58ae66450e4a'] = $pane;
  $display->panels['right'][1] = 'new-21c8880c-a3b4-418b-bb27-58ae66450e4a';
  $pane = new stdClass();
  $pane->pid = 'new-e32a33a6-9397-4d7f-9c87-1dff8998f1f1';
  $pane->panel = 'right';
  $pane->type = 'views_empty';
  $pane->subtype = 'views_empty';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_view:products_search_api-ctools_context_1_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e32a33a6-9397-4d7f-9c87-1dff8998f1f1';
  $display->content['new-e32a33a6-9397-4d7f-9c87-1dff8998f1f1'] = $pane;
  $display->panels['right'][2] = 'new-e32a33a6-9397-4d7f-9c87-1dff8998f1f1';
  $pane = new stdClass();
  $pane->pid = 'new-55fedee7-d2b7-4c2b-b182-7141afe44b0b';
  $pane->panel = 'right';
  $pane->type = 'views_pager';
  $pane->subtype = 'views_pager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_view:products_search_api-ctools_context_1_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '55fedee7-d2b7-4c2b-b182-7141afe44b0b';
  $display->content['new-55fedee7-d2b7-4c2b-b182-7141afe44b0b'] = $pane;
  $display->panels['right'][3] = 'new-55fedee7-d2b7-4c2b-b182-7141afe44b0b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-21c8880c-a3b4-418b-bb27-58ae66450e4a';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_test__panel_context_1a00d141-78ac-442a-afe2-5b3e53fefd0f'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ths_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = '';
  $page->path = 'busqueda/productos';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Product Search API',
        'keyword' => 'view',
        'name' => 'view:products_search_api-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66decc64-eb7d-49bc-b1cb-474a4a54933c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e89d62e8-89d3-4659-8fa9-bbce8c59dc05';
  $pane->panel = 'right';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'context_view:products_search_api-ctools_context_1_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e89d62e8-89d3-4659-8fa9-bbce8c59dc05';
  $display->content['new-e89d62e8-89d3-4659-8fa9-bbce8c59dc05'] = $pane;
  $display->panels['right'][0] = 'new-e89d62e8-89d3-4659-8fa9-bbce8c59dc05';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
