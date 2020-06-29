<?php
/**
 * @file
 * page_manager_existing_pages.test.inc
 */

$api = '2.0.0';

$data = $pm_existing_page = new stdClass();
$pm_existing_page->api_version = 1;
$pm_existing_page->name = 'test';
$pm_existing_page->label = 'Search Products API';
$pm_existing_page->context = '';
$pm_existing_page->paths = 'busqueda/productos';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'pm_existing_pages',
);
