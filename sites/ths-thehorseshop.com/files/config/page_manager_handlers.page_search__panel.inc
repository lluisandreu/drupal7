<?php
/**
 * @file
 * page_manager_handlers.page_search__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
