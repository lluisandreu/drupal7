<?php
/**
 * @file
 * dq_shop.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dq_shop_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_commerce_stripe'] = entity_import('rules_config', '{ "commerce_payment_commerce_stripe" : {
      "LABEL" : "Stripe",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_stripe" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "commerce_stripe",
                "settings" : {
                  "stripe_currency" : "EUR",
                  "secret_key" : "sk_test_XSkQIZiP7tdj9kJPJ4F8NVB3",
                  "public_key" : "pk_test_oWc5SsYToPlpxuckgB0W0IGp",
                  "display_title" : "Credit or debit card",
                  "receipt_email" : 0,
                  "integration_type" : "elements",
                  "checkout_settings" : {
                    "name" : "David Querol",
                    "description" : "",
                    "image" : {
                      "fid" : 0,
                      "upload_button" : "Upload",
                      "remove_button" : "Remove",
                      "upload" : ""
                    },
                    "panelLabel" : "Pay {{amount}}",
                    "zipCode" : 0,
                    "allowRememberMe" : 0,
                    "bitcoin" : 0,
                    "billingAddress" : 0,
                    "shippingAddress" : 0
                  },
                  "txn_type" : "auth_capture",
                  "commerce_stripe_api_version" : "Account Default",
                  "commerce_stripe_api_version_custom" : ""
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_standard'] = entity_import('rules_config', '{ "commerce_shipping_service_standard" : {
      "LABEL" : "Rate Standard",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "standard",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_iva'] = entity_import('rules_config', '{ "commerce_tax_rate_iva" : {
      "LABEL" : "Calculate IVA",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "iva"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  return $items;
}
