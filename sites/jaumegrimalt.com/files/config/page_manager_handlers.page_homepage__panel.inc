<?php
/**
 * @file
 * page_manager_handlers.page_homepage__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_homepage__panel';
$handler->task = 'page';
$handler->subtask = 'homepage';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Homepage Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'panel',
  'metatag_panels' => array(
    'enabled' => 1,
    'metatags' => array(
      'title' => array(
        'value' => 'Inicio| [current-page:pager][site:name]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'rating' => array(
        'value' => 'general',
      ),
      'referrer' => array(
        'value' => 'no-referrer',
      ),
    ),
  ),
);
$display = new panels_display();
$display->layout = 'flexible:homepage';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'left' => NULL,
    'right' => NULL,
    'center' => NULL,
    'about' => NULL,
    'offers' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '134c7930-46d8-4955-8371-c1502aae405a';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-27a9752d-9887-49c9-8c2d-fda7daced052';
$pane->panel = 'about';
$pane->type = 'node';
$pane->subtype = 'node';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'nid' => '1',
  'links' => 1,
  'leave_node_title' => 0,
  'identifier' => '',
  'build_mode' => 'teaser',
  'link_node_title' => 0,
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
$pane->uuid = '27a9752d-9887-49c9-8c2d-fda7daced052';
$display->content['new-27a9752d-9887-49c9-8c2d-fda7daced052'] = $pane;
$display->panels['about'][0] = 'new-27a9752d-9887-49c9-8c2d-fda7daced052';
$pane = new stdClass();
$pane->pid = 'new-3b6d3cce-fa50-4958-aa96-faf86808738d';
$pane->panel = 'about';
$pane->type = 'views_panes';
$pane->subtype = 'brands-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'items_per_page' => '0',
  'override_title' => 1,
  'override_title_text' => 'Nuestros proveedores',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 1;
$pane->locks = array();
$pane->uuid = '3b6d3cce-fa50-4958-aa96-faf86808738d';
$display->content['new-3b6d3cce-fa50-4958-aa96-faf86808738d'] = $pane;
$display->panels['about'][1] = 'new-3b6d3cce-fa50-4958-aa96-faf86808738d';
$pane = new stdClass();
$pane->pid = 'new-ee923216-f842-4500-8226-d59a26786259';
$pane->panel = 'center';
$pane->type = 'views_panes';
$pane->subtype = 'featured_products-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 1,
  'override_title_text' => 'Productos y servicios',
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
$pane->uuid = 'ee923216-f842-4500-8226-d59a26786259';
$display->content['new-ee923216-f842-4500-8226-d59a26786259'] = $pane;
$display->panels['center'][0] = 'new-ee923216-f842-4500-8226-d59a26786259';
$pane = new stdClass();
$pane->pid = 'new-b76e1255-d9d6-4528-8f21-3a0cb0b93cc5';
$pane->panel = 'offers';
$pane->type = 'views_panes';
$pane->subtype = 'offers-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 1,
  'override_title_text' => 'Ofertas recientes',
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
$pane->uuid = 'b76e1255-d9d6-4528-8f21-3a0cb0b93cc5';
$display->content['new-b76e1255-d9d6-4528-8f21-3a0cb0b93cc5'] = $pane;
$display->panels['offers'][0] = 'new-b76e1255-d9d6-4528-8f21-3a0cb0b93cc5';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.brands' => 'views_view.brands',
  'views_view.featured_products' => 'views_view.featured_products',
  'views_view.offers' => 'views_view.offers',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
