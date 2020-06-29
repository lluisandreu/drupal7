<?php
/**
 * @file
 * page_manager_handlers.page_productos__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_productos__panel';
$handler->task = 'page';
$handler->subtask = 'productos';
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
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'panel',
);
$display = new panels_display();
$display->layout = 'foundation_1col';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Productos por categoría';
$display->uuid = 'd450f9a7-e51a-4743-a1cc-64a96e9c28ec';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-acd7515f-0e95-4fe8-b741-e0cd0057b5f4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'all_categories-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'acd7515f-0e95-4fe8-b741-e0cd0057b5f4';
  $display->content['new-acd7515f-0e95-4fe8-b741-e0cd0057b5f4'] = $pane;
  $display->panels['middle'][0] = 'new-acd7515f-0e95-4fe8-b741-e0cd0057b5f4';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-acd7515f-0e95-4fe8-b741-e0cd0057b5f4';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.all_categories' => 'views_view.all_categories',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
