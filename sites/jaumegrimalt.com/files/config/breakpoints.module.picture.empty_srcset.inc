<?php
/**
 * @file
 * breakpoints.module.picture.empty_srcset.inc
 */

$api = '2.0.0';

$data = $breakpoint = new stdClass();
$breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
$breakpoint->api_version = 1;
$breakpoint->machine_name = 'module.picture.empty_srcset';
$breakpoint->name = 'Empty srcset';
$breakpoint->breakpoint = ' ';
$breakpoint->source = 'picture';
$breakpoint->source_type = 'module';
$breakpoint->status = 1;
$breakpoint->weight = 0;
$breakpoint->multipliers = array(
  '1x' => '1x',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'breakpoints',
);
