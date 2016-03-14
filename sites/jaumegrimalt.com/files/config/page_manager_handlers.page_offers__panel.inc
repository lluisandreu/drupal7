<?php
/**
 * @file
 * page_manager_handlers.page_offers__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_offers__panel';
$handler->task = 'page';
$handler->subtask = 'offers';
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
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '6cecfc70-6aa5-4e35-8f27-a798b0d98441';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-9dd41c80-a478-49d0-86c3-3144046ecbd9';
$pane->panel = 'middle';
$pane->type = 'views_panes';
$pane->subtype = 'offers-panel_pane_2';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '9dd41c80-a478-49d0-86c3-3144046ecbd9';
$display->content['new-9dd41c80-a478-49d0-86c3-3144046ecbd9'] = $pane;
$display->panels['middle'][0] = 'new-9dd41c80-a478-49d0-86c3-3144046ecbd9';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-9dd41c80-a478-49d0-86c3-3144046ecbd9';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.offers' => 'views_view.offers',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
