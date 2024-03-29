<?php
/**
 * @file
 * breakpoints.custom.user.phablet.inc
 */

$api = '2.0.0';

$data = $breakpoint = new stdClass();
$breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
$breakpoint->api_version = 1;
$breakpoint->machine_name = 'custom.user.phablet';
$breakpoint->name = 'Phablet';
$breakpoint->breakpoint = 'screen and (min-width: 640px)';
$breakpoint->source = 'user';
$breakpoint->source_type = 'custom';
$breakpoint->status = 1;
$breakpoint->weight = 0;
$breakpoint->multipliers = array(
  '2x' => '2x',
  '1x' => '1x',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'breakpoints',
);
