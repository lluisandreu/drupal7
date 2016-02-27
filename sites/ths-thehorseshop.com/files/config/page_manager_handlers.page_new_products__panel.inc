<?php
/**
 * @file
 * page_manager_handlers.page_new_products__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_new_products__panel';
$handler->task = 'page';
$handler->subtask = 'new_products';
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
$display->title = 'Novedades';
$display->uuid = 'f2f62dfb-60e9-4bbc-9e62-201b721b11fb';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-61cfdeb2-0951-49ea-b091-c0f4b93d74d3';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'new_products-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '12',
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
  $pane->uuid = '61cfdeb2-0951-49ea-b091-c0f4b93d74d3';
  $display->content['new-61cfdeb2-0951-49ea-b091-c0f4b93d74d3'] = $pane;
  $display->panels['middle'][0] = 'new-61cfdeb2-0951-49ea-b091-c0f4b93d74d3';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-61cfdeb2-0951-49ea-b091-c0f4b93d74d3';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.new_products' => 'views_view.new_products',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
