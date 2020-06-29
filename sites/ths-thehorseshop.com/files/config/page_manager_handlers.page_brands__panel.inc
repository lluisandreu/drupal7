<?php
/**
 * @file
 * page_manager_handlers.page_brands__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_brands__panel';
$handler->task = 'page';
$handler->subtask = 'brands';
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
$display->title = 'Productos por marca';
$display->uuid = '05cacecd-01cf-479c-a64e-6fecd4727c95';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2d65e072-59dc-4a5e-9cc5-e1026d68981f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'brands-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '0',
    'override_title' => 0,
    'override_title_text' => 'Productos por marca',
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
  $pane->uuid = '2d65e072-59dc-4a5e-9cc5-e1026d68981f';
  $display->content['new-2d65e072-59dc-4a5e-9cc5-e1026d68981f'] = $pane;
  $display->panels['middle'][0] = 'new-2d65e072-59dc-4a5e-9cc5-e1026d68981f';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-2d65e072-59dc-4a5e-9cc5-e1026d68981f';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.brands' => 'views_view.brands',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
