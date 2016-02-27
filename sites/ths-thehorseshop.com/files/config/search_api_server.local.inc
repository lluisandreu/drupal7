<?php
/**
 * @file
 * search_api_server.local.inc
 */

$api = '2.0.0';

$data = entity_import('search_api_server', '{
    "name" : "Local",
    "machine_name" : "local",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : { "products_search_api" : {
          "title" : {
            "table" : "search_api_db_products_search_api_text",
            "type" : "text",
            "boost" : "21.0"
          },
          "status" : {
            "table" : "search_api_db_products_search_api",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_product_category" : {
            "table" : "search_api_db_products_search_api",
            "column" : "field_product_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_product_brand" : {
            "table" : "search_api_db_products_search_api",
            "column" : "field_product_brand",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_products" : {
            "table" : "search_api_db_products_search_api_field_products",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_products_search_api",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_products_search_api_text",
            "type" : "text",
            "boost" : "8.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'search_api',
);
